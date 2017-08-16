// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2a_p11
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


// TAO_IDL - Generated from
// be/be_codegen.cpp:652

#ifndef _TAO_IDL_DATAREADERREMOTES_BDYXCE_CPP_
#define _TAO_IDL_DATAREADERREMOTES_BDYXCE_CPP_


#include "DataReaderRemoteS.h"
#include "tao/PortableServer/Operation_Table_Perfect_Hash.h"
#include "tao/PortableServer/Upcall_Command.h"
#include "tao/PortableServer/Upcall_Wrapper.h"
#include "tao/TAO_Server_Request.h"
#include "tao/ORB_Core.h"
#include "tao/Profile.h"
#include "tao/Stub.h"
#include "tao/IFR_Client_Adapter.h"
#include "tao/Object_T.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/DynamicC.h"
#include "tao/CDR.h"
#include "tao/operation_details.h"
#include "tao/PortableInterceptor.h"
#include "ace/Dynamic_Service.h"
#include "ace/Malloc_Allocator.h"

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_interface.cpp:1868

class TAO_OpenDDS_DCPS_DataReaderRemote_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: /Users/yc/MyGithub/imac-project/OpenDDS/OpenDDS-3.10/ACE_wrappers/bin/ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_OpenDDS_DCPS_DataReaderRemote_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_OpenDDS_DCPS_DataReaderRemote_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
     26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
     26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
     26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
     26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
     26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
     26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
     26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
     26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
     26, 26, 26, 26, 26,  0, 26,  0, 26, 26,
      0,  5, 26, 26, 26, 26, 26, 26, 26, 26,
      5, 26, 26, 26,  0,  0,  0,  0, 26, 26,
     26, 26, 26, 26, 26, 26, 26, 26,
    };
  return len + asso_values[(int) str[len - 1]] + asso_values[(int) str[0]];
}

const TAO_operation_db_entry *
TAO_OpenDDS_DCPS_DataReaderRemote_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 9,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 23,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 25,
      HASH_VALUE_RANGE = 21,
      DUPLICATES = 0,
      WORDLIST_SIZE = 14
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},
      {"remove_associations", &POA_OpenDDS::DCPS::DataReaderRemote::remove_associations_skel, 0},
      {"add_association", &POA_OpenDDS::DCPS::DataReaderRemote::add_association_skel, 0},
      {"",0,0},{"",0,0},
      {"update_incompatible_qos", &POA_OpenDDS::DCPS::DataReaderRemote::update_incompatible_qos_skel, 0},
      {"",0,0},
      {"association_complete", &POA_OpenDDS::DCPS::DataReaderRemote::association_complete_skel, 0},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname;

          if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}

static TAO_OpenDDS_DCPS_DataReaderRemote_Perfect_Hash_OpTable tao_OpenDDS_DCPS_DataReaderRemote_optable;

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:93

POA_OpenDDS::DCPS::DataReaderRemote::DataReaderRemote (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_OpenDDS_DCPS_DataReaderRemote_optable;
}

POA_OpenDDS::DCPS::DataReaderRemote::DataReaderRemote (const DataReaderRemote& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_OpenDDS::DCPS::DataReaderRemote::~DataReaderRemote (void)
{
}

namespace POA_OpenDDS
{
  
  namespace DCPS
  {
    

    // TAO_IDL - Generated from
    // be/be_visitor_operation/upcall_command_ss.cpp:83

    class add_association_DataReaderRemote
      : public TAO::Upcall_Command
    {
    public:
      inline add_association_DataReaderRemote (
        POA_OpenDDS::DCPS::DataReaderRemote * servant,
        TAO_Operation_Details const * operation_details,
        TAO::Argument * const args[])
        : servant_ (servant)
          , operation_details_ (operation_details)
          , args_ (args)
      {
      }

      virtual void execute (void)
      {
        TAO::SArg_Traits< ::OpenDDS::DCPS::GUID_t>::in_arg_type arg_1 =
          TAO::Portable_Server::get_in_arg< ::OpenDDS::DCPS::GUID_t> (
            this->operation_details_,
            this->args_,
            1);
          
        TAO::SArg_Traits< ::OpenDDS::DCPS::WriterAssociation>::in_arg_type arg_2 =
          TAO::Portable_Server::get_in_arg< ::OpenDDS::DCPS::WriterAssociation> (
            this->operation_details_,
            this->args_,
            2);
          
        TAO::SArg_Traits< ::ACE_InputCDR::to_boolean>::in_arg_type arg_3 =
          TAO::Portable_Server::get_in_arg< ::ACE_InputCDR::to_boolean> (
            this->operation_details_,
            this->args_,
            3);
          
        this->servant_->add_association (
          arg_1
          , arg_2
          , arg_3);
      }
    
    private:
      POA_OpenDDS::DCPS::DataReaderRemote * const servant_;
      TAO_Operation_Details const * const operation_details_;
      TAO::Argument * const * const args_;
    };
  }
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:171

void POA_OpenDDS::DCPS::DataReaderRemote::add_association_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::OpenDDS::DCPS::GUID_t>::in_arg_val _tao_yourId;
  TAO::SArg_Traits< ::OpenDDS::DCPS::WriterAssociation>::in_arg_val _tao_writer;
  TAO::SArg_Traits< ::ACE_InputCDR::to_boolean>::in_arg_val _tao_active;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_yourId,
      &_tao_writer,
      &_tao_active
    };
  
  static size_t const nargs = 4;

  POA_OpenDDS::DCPS::DataReaderRemote * const impl =
    dynamic_cast<POA_OpenDDS::DCPS::DataReaderRemote *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  add_association_DataReaderRemote command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_OpenDDS
{
  
  namespace DCPS
  {
    

    // TAO_IDL - Generated from
    // be/be_visitor_operation/upcall_command_ss.cpp:83

    class association_complete_DataReaderRemote
      : public TAO::Upcall_Command
    {
    public:
      inline association_complete_DataReaderRemote (
        POA_OpenDDS::DCPS::DataReaderRemote * servant,
        TAO_Operation_Details const * operation_details,
        TAO::Argument * const args[])
        : servant_ (servant)
          , operation_details_ (operation_details)
          , args_ (args)
      {
      }

      virtual void execute (void)
      {
        TAO::SArg_Traits< ::OpenDDS::DCPS::GUID_t>::in_arg_type arg_1 =
          TAO::Portable_Server::get_in_arg< ::OpenDDS::DCPS::GUID_t> (
            this->operation_details_,
            this->args_,
            1);
          
        this->servant_->association_complete (
          arg_1);
      }
    
    private:
      POA_OpenDDS::DCPS::DataReaderRemote * const servant_;
      TAO_Operation_Details const * const operation_details_;
      TAO::Argument * const * const args_;
    };
  }
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:171

void POA_OpenDDS::DCPS::DataReaderRemote::association_complete_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::OpenDDS::DCPS::GUID_t>::in_arg_val _tao_remote_id;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_remote_id
    };
  
  static size_t const nargs = 2;

  POA_OpenDDS::DCPS::DataReaderRemote * const impl =
    dynamic_cast<POA_OpenDDS::DCPS::DataReaderRemote *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  association_complete_DataReaderRemote command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_OpenDDS
{
  
  namespace DCPS
  {
    

    // TAO_IDL - Generated from
    // be/be_visitor_operation/upcall_command_ss.cpp:83

    class remove_associations_DataReaderRemote
      : public TAO::Upcall_Command
    {
    public:
      inline remove_associations_DataReaderRemote (
        POA_OpenDDS::DCPS::DataReaderRemote * servant,
        TAO_Operation_Details const * operation_details,
        TAO::Argument * const args[])
        : servant_ (servant)
          , operation_details_ (operation_details)
          , args_ (args)
      {
      }

      virtual void execute (void)
      {
        TAO::SArg_Traits< ::OpenDDS::DCPS::WriterIdSeq>::in_arg_type arg_1 =
          TAO::Portable_Server::get_in_arg< ::OpenDDS::DCPS::WriterIdSeq> (
            this->operation_details_,
            this->args_,
            1);
          
        TAO::SArg_Traits< ::ACE_InputCDR::to_boolean>::in_arg_type arg_2 =
          TAO::Portable_Server::get_in_arg< ::ACE_InputCDR::to_boolean> (
            this->operation_details_,
            this->args_,
            2);
          
        this->servant_->remove_associations (
          arg_1
          , arg_2);
      }
    
    private:
      POA_OpenDDS::DCPS::DataReaderRemote * const servant_;
      TAO_Operation_Details const * const operation_details_;
      TAO::Argument * const * const args_;
    };
  }
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:171

void POA_OpenDDS::DCPS::DataReaderRemote::remove_associations_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::OpenDDS::DCPS::WriterIdSeq>::in_arg_val _tao_writers;
  TAO::SArg_Traits< ::ACE_InputCDR::to_boolean>::in_arg_val _tao_notify_lost;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_writers,
      &_tao_notify_lost
    };
  
  static size_t const nargs = 3;

  POA_OpenDDS::DCPS::DataReaderRemote * const impl =
    dynamic_cast<POA_OpenDDS::DCPS::DataReaderRemote *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  remove_associations_DataReaderRemote command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_OpenDDS
{
  
  namespace DCPS
  {
    

    // TAO_IDL - Generated from
    // be/be_visitor_operation/upcall_command_ss.cpp:83

    class update_incompatible_qos_DataReaderRemote
      : public TAO::Upcall_Command
    {
    public:
      inline update_incompatible_qos_DataReaderRemote (
        POA_OpenDDS::DCPS::DataReaderRemote * servant,
        TAO_Operation_Details const * operation_details,
        TAO::Argument * const args[])
        : servant_ (servant)
          , operation_details_ (operation_details)
          , args_ (args)
      {
      }

      virtual void execute (void)
      {
        TAO::SArg_Traits< ::OpenDDS::DCPS::IncompatibleQosStatus>::in_arg_type arg_1 =
          TAO::Portable_Server::get_in_arg< ::OpenDDS::DCPS::IncompatibleQosStatus> (
            this->operation_details_,
            this->args_,
            1);
          
        this->servant_->update_incompatible_qos (
          arg_1);
      }
    
    private:
      POA_OpenDDS::DCPS::DataReaderRemote * const servant_;
      TAO_Operation_Details const * const operation_details_;
      TAO::Argument * const * const args_;
    };
  }
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:171

void POA_OpenDDS::DCPS::DataReaderRemote::update_incompatible_qos_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::OpenDDS::DCPS::IncompatibleQosStatus>::in_arg_val _tao_status;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_status
    };
  
  static size_t const nargs = 2;

  POA_OpenDDS::DCPS::DataReaderRemote * const impl =
    dynamic_cast<POA_OpenDDS::DCPS::DataReaderRemote *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  update_incompatible_qos_DataReaderRemote command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}



// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:166



::CORBA::Boolean POA_OpenDDS::DCPS::DataReaderRemote::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/DataReaderRemote:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_OpenDDS::DCPS::DataReaderRemote::_interface_repository_id (void) const
{
  return "IDL:OpenDDS/DCPS/DataReaderRemote:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:426

void POA_OpenDDS::DCPS::DataReaderRemote::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:373

OpenDDS::DCPS::DataReaderRemote *
POA_OpenDDS::DCPS::DataReaderRemote::_this (void)
{
  TAO_Stub *stub = this->_create_stub ();

  TAO_Stub_Auto_Ptr safe_stub (stub);
  ::CORBA::Object_ptr tmp = CORBA::Object_ptr ();

  ::CORBA::Boolean const _tao_opt_colloc =
    stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  
  ACE_NEW_RETURN (
      tmp,
      ::CORBA::Object (stub, _tao_opt_colloc, this),
      0);
  
  ::CORBA::Object_var obj = tmp;
  (void) safe_stub.release ();

  typedef ::OpenDDS::DCPS::DataReaderRemote STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

OPENDDS_END_VERSIONED_NAMESPACE_DECL



#endif /* ifndef */

