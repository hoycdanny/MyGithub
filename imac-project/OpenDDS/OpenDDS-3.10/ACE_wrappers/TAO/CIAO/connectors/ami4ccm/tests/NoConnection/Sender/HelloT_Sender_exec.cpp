// -*- C++ -*-
// $Id: HelloT_Sender_exec.cpp 2179 2013-05-28 22:16:51Z mesnierp $

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.8.3
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

#include "HelloT_Sender_exec.h"
#include "ace/OS_NS_unistd.h"

namespace CIAO_HelloT_Sender_Impl
{
  CORBA::Short nr_of_asyn_received = 0;
  CORBA::Short nr_of_asyn_called = 0;
  CORBA::Short nr_of_syn_failed = 0;

  //============================================================
  // Worker thread for asynchronous invocations for MyFoo
  //============================================================
  asynch_foo_generator::asynch_foo_generator (
        ::HelloT::CCM_Sender_Context_ptr context)
     : context_(::HelloT::CCM_Sender_Context::_duplicate (context))
  {
  }

  int asynch_foo_generator::svc ()
  {
    ACE_OS::sleep (3);
    ::HelloT::AMI4CCM_MyFoo_var my_foo_ami_  =
        context_->get_connection_sendc_run_my_foo();

    if (CORBA::is_nil (my_foo_ami_))
      {
        ACE_ERROR ((LM_ERROR, "ERROR Sender (ASYNCH) :\tfoo_ami is NIL !\n"));
       return 1;
      }
    else
      {
       ::HelloT::AMI4CCM_MyFooReplyHandler_var cb =
          new AMI4CCM_MyFooReplyHandler_run_my_foo_i ();

        //Invoke Asynchronous calls
        try
          {
            my_foo_ami_->sendc_hello (cb.in());
            ++nr_of_asyn_called;
          }
        catch (const CORBA::INV_OBJREF& ex)
          {
            if (ex.completed () != CORBA::COMPLETED_NO)
              {
                ex._tao_print_exception ("ERROR: Caught unexpected exception:");
              }

            // expected exception
          }
        try
          {
            my_foo_ami_->sendc_get_rw_attrib(cb.in());
            ++nr_of_asyn_called;
          }
        catch (const CORBA::INV_OBJREF& ex)
          {
            if (ex.completed () != CORBA::COMPLETED_NO)
              {
                ex._tao_print_exception ("ERROR: Caught unexpected exception:");
              }

            // expected exception
          }
        try
          {
            my_foo_ami_->sendc_get_ro_attrib(cb.in());
            ++nr_of_asyn_called;
          }
        catch (const CORBA::INV_OBJREF& ex)
          {
            if (ex.completed () != CORBA::COMPLETED_NO)
              {
                ex._tao_print_exception ("ERROR: Caught unexpected exception:");
              }

            // expected exception
          }
        try
          {
            my_foo_ami_->sendc_set_rw_attrib(cb.in(), 0);
            ++nr_of_asyn_called;
          }
        catch (const CORBA::INV_OBJREF& ex)
          {
            if (ex.completed () != CORBA::COMPLETED_NO)
              {
                ex._tao_print_exception ("ERROR: Caught unexpected exception:");
              }

            // expected exception
          }
      }
    return 0;
  }

  //============================================================
  // Worker thread for synchronous invocations for MyFoo
  //============================================================
  synch_foo_generator::synch_foo_generator (
      ::HelloT::CCM_Sender_Context_ptr context)
    : context_(::HelloT::CCM_Sender_Context::_duplicate (context))
  {
  }

  int synch_foo_generator::svc ()
  {
    ACE_OS::sleep (3);
    ::HelloT::MyFoo_var my_foo_ami_ =
          context_->get_connection_run_my_foo ();

    if (CORBA::is_nil (my_foo_ami_))
      {
        ACE_ERROR ((LM_ERROR, "ERROR - NO synchronous connection available."));
        return 0;
      }

    CORBA::String_var out_str;
    try
      {
        my_foo_ami_->hello (out_str.out ());
      }
    catch (...)
      {
        ACE_ERROR ((LM_INFO, "Exception on sync call"));
        ++nr_of_syn_failed;
      }
    try
      {
        my_foo_ami_->rw_attrib ();
      }
    catch (...)
      {
        ACE_ERROR ((LM_INFO, "Exception on sync call"));
        ++nr_of_syn_failed;
      }
    try
      {
        my_foo_ami_->rw_attrib (0);
      }
    catch (...)
      {
        ACE_ERROR ((LM_INFO, "Exception on sync call"));
        ++nr_of_syn_failed;
      }
    try
      {
        my_foo_ami_->ro_attrib ();
      }
    catch (...)
      {
        ACE_ERROR ((LM_INFO, "Exception on sync call"));
        ++nr_of_syn_failed;
      }

    return 0;
    }

  /**
   * Component Executor Implementation Class: Sender_exec_i
   */

  Sender_exec_i::Sender_exec_i (void) :
    asynch_foo_gen(0),
    synch_foo_gen(0)
  {
  }

  Sender_exec_i::~Sender_exec_i (void)
  {
  }

  // Supported operations and attributes.

  // Component attributes and port operations.

  // Operations from Components::SessionComponent.

  void
  Sender_exec_i::set_session_context (
    ::Components::SessionContext_ptr ctx)
  {
    this->ciao_context_ =
      ::HelloT::CCM_Sender_Context::_narrow (ctx);

    if ( ::CORBA::is_nil (this->ciao_context_.in ()))
      {
        throw ::CORBA::INTERNAL ();
      }
  }

  void
  Sender_exec_i::configuration_complete (void)
  {
    /* Your code here. */
  }

  void
  Sender_exec_i::ccm_activate (void)
  {
    this->asynch_foo_gen =
         new asynch_foo_generator (this->ciao_context_.in ());
     asynch_foo_gen->activate (THR_NEW_LWP | THR_JOINABLE, 1);

     this->synch_foo_gen =
       new synch_foo_generator (this->ciao_context_.in ());
     synch_foo_gen->activate (THR_NEW_LWP | THR_JOINABLE, 1);
  }

  void
  Sender_exec_i::ccm_passivate (void)
  {
    /* Your code here. */
  }

  void
  Sender_exec_i::ccm_remove (void)
  {
    if (nr_of_asyn_received > 0)
      {
        ACE_ERROR ((LM_ERROR, "ERROR: received unexpected asynchronous responses.\n"));
      }
    if (nr_of_asyn_called > 0)
      {
        ACE_ERROR ((LM_ERROR, "ERROR: unexpectedly succeeded calling asynchronously.\n"));
      }
    if (nr_of_syn_failed > 0)
      {
        ACE_ERROR ((LM_ERROR, "ERROR: unexpected failures calling synchronously.\n"));
      }

    delete this->asynch_foo_gen;
    this->asynch_foo_gen = 0;
    delete this->synch_foo_gen;
    this->synch_foo_gen = 0;
  }

  AMI4CCM_MyFooReplyHandler_run_my_foo_i::AMI4CCM_MyFooReplyHandler_run_my_foo_i (void)
  {
  }

  AMI4CCM_MyFooReplyHandler_run_my_foo_i::~AMI4CCM_MyFooReplyHandler_run_my_foo_i (void)
  {
  }

  void
  AMI4CCM_MyFooReplyHandler_run_my_foo_i::hello (
    const char * /* answer */)
  {
    // never should come here in this test.
     ACE_ERROR ((LM_ERROR, "ERROR: MyFoo_callback_exec_i::hello: "
                            "Unexpected return.\n"));
    ++nr_of_asyn_received;
  }

  void
  AMI4CCM_MyFooReplyHandler_run_my_foo_i::hello_excep (
    ::CCM_AMI::ExceptionHolder_ptr /*excep_holder*/)
  {
    // never should come here in this test.
     ACE_ERROR ((LM_ERROR, "ERROR: MyFoo_callback_exec_i::hello_excep: "
                            "Unexpected exception.\n"));
    ++nr_of_asyn_received;
  }

  void
  AMI4CCM_MyFooReplyHandler_run_my_foo_i::get_rw_attrib (
    ::CORBA::Short /* rw_attrib */)
  {
    // never should come here in this test.
       ACE_ERROR ((LM_ERROR, "ERROR: MyFoo_callback_exec_i::get_rw_attrib : "
                              "Unexpected return.\n"));
    ++nr_of_asyn_received;
  }

  void
  AMI4CCM_MyFooReplyHandler_run_my_foo_i::get_rw_attrib_excep (
    ::CCM_AMI::ExceptionHolder_ptr /*excep_holder*/)
  {
    // never should come here in this test.
     ACE_ERROR ((LM_ERROR, "ERROR: MyFoo_callback_exec_i::get_rw_attrib_excep: "
                            "Unexpected exception.\n"));
    ++nr_of_asyn_received;
  }

  void
  AMI4CCM_MyFooReplyHandler_run_my_foo_i::set_rw_attrib (void)
  {
    // never should come here in this test.
     ACE_ERROR ((LM_ERROR, "ERROR: MyFoo_callback_exec_i::set_rw_attrib: "
                            "Unexpected return.\n"));
    ++nr_of_asyn_received;
  }

  void
  AMI4CCM_MyFooReplyHandler_run_my_foo_i::set_rw_attrib_excep (
    ::CCM_AMI::ExceptionHolder_ptr /*excep_holder*/)
  {
    // never should come here in this test.
     ACE_ERROR ((LM_ERROR, "ERROR: MyFoo_callback_exec_i::set_rw_attrib_excep: "
                            "Unexpected exception.\n"));
    ++nr_of_asyn_received;
  }

  void
  AMI4CCM_MyFooReplyHandler_run_my_foo_i::get_ro_attrib (
    ::CORBA::Short /* ro_attrib */)
  {
    // never should come here in this test.
      ACE_ERROR ((LM_ERROR, "ERROR: MyFoo_callback_exec_i::get_ro_attrib: "
                             "Unexpected return.\n"));
    ++nr_of_asyn_received;
  }

  void
  AMI4CCM_MyFooReplyHandler_run_my_foo_i::get_ro_attrib_excep (
    ::CCM_AMI::ExceptionHolder_ptr /*excep_holder*/)
  {
    // never should come here in this test.
     ACE_ERROR ((LM_ERROR, "ERROR: MyFoo_callback_exec_i::get_ro_attrib_excep: "
                            "Unexpected exception.\n"));
    ++nr_of_asyn_received;
  }

  extern "C" HELLO_T_SENDER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_HelloT_Sender_Impl (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_NORETURN (
      retval,
      Sender_exec_i);

    return retval;
  }
}
