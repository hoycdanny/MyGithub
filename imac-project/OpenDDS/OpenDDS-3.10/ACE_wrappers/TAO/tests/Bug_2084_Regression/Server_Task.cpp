//
// $Id: Server_Task.cpp 2179 2013-05-28 22:16:51Z mesnierp $
//
#include "Server_Task.h"
#include "TestS.h"
#include "EventNode.h"

#include "ace/Manual_Event.h"
#include "tao/ORB_Core.h"

Server_Task::Server_Task (const ACE_TCHAR *output,
                          CORBA::ORB_ptr sorb,
                          ACE_Manual_Event &me,
                          ACE_Thread_Manager *thr_mgr)
  : ACE_Task_Base (thr_mgr)
    , output_ (output)
    , me_ (me)
    , sorb_ (CORBA::ORB::_duplicate (sorb))
{
}

int
Server_Task::svc (void)
{
 try
   {
     CORBA::Object_var poa_object =
       this->sorb_->resolve_initial_references("RootPOA");

     PortableServer::POA_var root_poa =
       PortableServer::POA::_narrow (poa_object.in ());

     if (CORBA::is_nil (root_poa.in ()))
       ACE_ERROR_RETURN ((LM_ERROR,
                          " (%P|%t) Panic: nil RootPOA\n"),
                         1);

     PortableServer::POAManager_var poa_manager =
       root_poa->the_POAManager ();

     EventNode *evnode_impl = new EventNode(this->sorb_.in(),ACE_Thread::self());
     PortableServer::ServantBase_var owner_transfer(evnode_impl);
     PortableServer::ObjectId_var id =
       root_poa->activate_object (evnode_impl);

     CORBA::Object_var object = root_poa->id_to_reference (id.in ());

     Test::EventNode_var evNode = Test::EventNode::_narrow (object.in ());

     ACE_DEBUG((LM_DEBUG,"Server (%t) optimize_collocation_objects=%d use_global_collocation=%d\n",
                         sorb_->orb_core()->optimize_collocation_objects(),
                        sorb_->orb_core()->use_global_collocation ()));

     CORBA::String_var ior =
       this->sorb_->object_to_string (evNode.in ());

     // Output the IOR to the <this->output_>
     FILE *output_file= ACE_OS::fopen (this->output_,
                                       "w");
     if (output_file == 0)
       ACE_ERROR_RETURN ((LM_ERROR,
                          "Cannot open output file for writing IOR: %s",
                          this->output_),
                         1);

     ACE_OS::fprintf (output_file, "%s", ior.in ());
     ACE_OS::fclose (output_file);

     poa_manager->activate ();

     // Signal the main thread before we call orb->run ();
     this->me_.signal ();

     this->sorb_->run ();

     ACE_DEBUG ((LM_DEBUG, "(%P|%t) server - event loop finished\n"));
   }
 catch (const CORBA::BAD_INV_ORDER&)
   {
     // Periodically we get a bad inv order on fast machines.
     // It's a false negative and is safe to ignore.
   }
 catch (const CORBA::Exception& ex)
   {
     ex._tao_print_exception ("Exception caught:");
     return 1;
   }

 return 0;
}
