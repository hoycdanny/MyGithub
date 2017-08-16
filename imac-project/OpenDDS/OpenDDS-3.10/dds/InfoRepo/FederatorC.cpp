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
// be/be_codegen.cpp:376

#include "DcpsInfo_pch.h"
#include "FederatorC.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/SystemException.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "FederatorC.inl"
#endif /* !defined INLINE */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_exception/exception_cs.cpp:101

OpenDDS::Federator::Incomplete::Incomplete (void)
  : ::CORBA::UserException (
        "IDL:OpenDDS/Federator/Incomplete:1.0",
        "Incomplete"
      )
{
}

OpenDDS::Federator::Incomplete::~Incomplete (void)
{
}

OpenDDS::Federator::Incomplete::Incomplete (const ::OpenDDS::Federator::Incomplete &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

OpenDDS::Federator::Incomplete&
OpenDDS::Federator::Incomplete::operator= (const ::OpenDDS::Federator::Incomplete &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  return *this;
}

OpenDDS::Federator::Incomplete *
OpenDDS::Federator::Incomplete::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<Incomplete *> (_tao_excp);
}

const OpenDDS::Federator::Incomplete *
OpenDDS::Federator::Incomplete::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const Incomplete *> (_tao_excp);
}

::CORBA::Exception *OpenDDS::Federator::Incomplete::_alloc (void)
{
  ::CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::OpenDDS::Federator::Incomplete, 0);
  return retval;
}

::CORBA::Exception *
OpenDDS::Federator::Incomplete::_tao_duplicate (void) const
{
  ::CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::OpenDDS::Federator::Incomplete (*this),
      0
    );
  return result;
}

void OpenDDS::Federator::Incomplete::_raise (void) const
{
  throw *this;
}

void OpenDDS::Federator::Incomplete::_tao_encode (TAO_OutputCDR &cdr) const
{
  if (!(cdr << *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

void OpenDDS::Federator::Incomplete::_tao_decode (TAO_InputCDR &cdr)
{
  if (!(cdr >> *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}



// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for OpenDDS::Federator::Manager.

OpenDDS::Federator::Manager_ptr
TAO::Objref_Traits<OpenDDS::Federator::Manager>::duplicate (
    OpenDDS::Federator::Manager_ptr p)
{
  return OpenDDS::Federator::Manager::_duplicate (p);
}

void
TAO::Objref_Traits<OpenDDS::Federator::Manager>::release (
    OpenDDS::Federator::Manager_ptr p)
{
  ::CORBA::release (p);
}

OpenDDS::Federator::Manager_ptr
TAO::Objref_Traits<OpenDDS::Federator::Manager>::nil (void)
{
  return OpenDDS::Federator::Manager::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<OpenDDS::Federator::Manager>::marshal (
    const OpenDDS::Federator::Manager_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:91

::CORBA::Boolean
OpenDDS::Federator::Manager::discover_federation (
  const char * ior)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< ::ACE_InputCDR::to_boolean>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_ior (ior);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_ior
    };

  static TAO::Exception_Data
  _tao_OpenDDS_Federator_Manager_discover_federation_exceptiondata [] = 
    {
      {
        "IDL:OpenDDS/Federator/Incomplete:1.0",
        OpenDDS::Federator::Incomplete::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , 0
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "discover_federation",
      19,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (
      _tao_OpenDDS_Federator_Manager_discover_federation_exceptiondata,
      1
    );

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:91

::OpenDDS::Federator::Manager_ptr
OpenDDS::Federator::Manager::join_federation (
  ::OpenDDS::Federator::Manager_ptr peer,
  ::OpenDDS::Federator::FederationDomain federation)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< ::OpenDDS::Federator::Manager>::ret_val _tao_retval;
  TAO::Arg_Traits< ::OpenDDS::Federator::Manager>::in_arg_val _tao_peer (peer);
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_federation (federation);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_peer,
      &_tao_federation
    };

  static TAO::Exception_Data
  _tao_OpenDDS_Federator_Manager_join_federation_exceptiondata [] = 
    {
      {
        "IDL:OpenDDS/Federator/Incomplete:1.0",
        OpenDDS::Federator::Incomplete::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , 0
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      3,
      "join_federation",
      15,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (
      _tao_OpenDDS_Federator_Manager_join_federation_exceptiondata,
      1
    );

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:91

void
OpenDDS::Federator::Manager::leave_federation (
  ::OpenDDS::Federator::RepoKey id)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_id (id);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_id
    };

  static TAO::Exception_Data
  _tao_OpenDDS_Federator_Manager_leave_federation_exceptiondata [] = 
    {
      {
        "IDL:OpenDDS/Federator/Incomplete:1.0",
        OpenDDS::Federator::Incomplete::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , 0
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "leave_federation",
      16,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (
      _tao_OpenDDS_Federator_Manager_leave_federation_exceptiondata,
      1
    );
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:91

::OpenDDS::Federator::RepoKey
OpenDDS::Federator::Manager::federation_id (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< ::CORBA::Long>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "federation_id",
      13,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:91

::OpenDDS::DCPS::DCPSInfo_ptr
OpenDDS::Federator::Manager::repository (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< ::OpenDDS::DCPS::DCPSInfo>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "repository",
      10,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:91

void
OpenDDS::Federator::Manager::initializeOwner (
  const ::OpenDDS::Federator::OwnerUpdate & data)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::OpenDDS::Federator::OwnerUpdate>::in_arg_val _tao_data (data);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_data
    };

  static TAO::Exception_Data
  _tao_OpenDDS_Federator_Manager_initializeOwner_exceptiondata [] = 
    {
      {
        "IDL:OpenDDS/Federator/Incomplete:1.0",
        OpenDDS::Federator::Incomplete::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , 0
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "initializeOwner",
      15,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (
      _tao_OpenDDS_Federator_Manager_initializeOwner_exceptiondata,
      1
    );
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:91

void
OpenDDS::Federator::Manager::initializeTopic (
  const ::OpenDDS::Federator::TopicUpdate & data)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::OpenDDS::Federator::TopicUpdate>::in_arg_val _tao_data (data);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_data
    };

  static TAO::Exception_Data
  _tao_OpenDDS_Federator_Manager_initializeTopic_exceptiondata [] = 
    {
      {
        "IDL:OpenDDS/Federator/Incomplete:1.0",
        OpenDDS::Federator::Incomplete::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , 0
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "initializeTopic",
      15,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (
      _tao_OpenDDS_Federator_Manager_initializeTopic_exceptiondata,
      1
    );
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:91

void
OpenDDS::Federator::Manager::initializeParticipant (
  const ::OpenDDS::Federator::ParticipantUpdate & data)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::OpenDDS::Federator::ParticipantUpdate>::in_arg_val _tao_data (data);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_data
    };

  static TAO::Exception_Data
  _tao_OpenDDS_Federator_Manager_initializeParticipant_exceptiondata [] = 
    {
      {
        "IDL:OpenDDS/Federator/Incomplete:1.0",
        OpenDDS::Federator::Incomplete::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , 0
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "initializeParticipant",
      21,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (
      _tao_OpenDDS_Federator_Manager_initializeParticipant_exceptiondata,
      1
    );
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:91

void
OpenDDS::Federator::Manager::initializePublication (
  const ::OpenDDS::Federator::PublicationUpdate & data)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::OpenDDS::Federator::PublicationUpdate>::in_arg_val _tao_data (data);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_data
    };

  static TAO::Exception_Data
  _tao_OpenDDS_Federator_Manager_initializePublication_exceptiondata [] = 
    {
      {
        "IDL:OpenDDS/Federator/Incomplete:1.0",
        OpenDDS::Federator::Incomplete::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , 0
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "initializePublication",
      21,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (
      _tao_OpenDDS_Federator_Manager_initializePublication_exceptiondata,
      1
    );
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:91

void
OpenDDS::Federator::Manager::initializeSubscription (
  const ::OpenDDS::Federator::SubscriptionUpdate & data)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::OpenDDS::Federator::SubscriptionUpdate>::in_arg_val _tao_data (data);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_data
    };

  static TAO::Exception_Data
  _tao_OpenDDS_Federator_Manager_initializeSubscription_exceptiondata [] = 
    {
      {
        "IDL:OpenDDS/Federator/Incomplete:1.0",
        OpenDDS::Federator::Incomplete::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , 0
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "initializeSubscription",
      22,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (
      _tao_OpenDDS_Federator_Manager_initializeSubscription_exceptiondata,
      1
    );
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:91

void
OpenDDS::Federator::Manager::leave_and_shutdown (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  static TAO::Exception_Data
  _tao_OpenDDS_Federator_Manager_leave_and_shutdown_exceptiondata [] = 
    {
      {
        "IDL:OpenDDS/Federator/Incomplete:1.0",
        OpenDDS::Federator::Incomplete::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , 0
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "leave_and_shutdown",
      18,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (
      _tao_OpenDDS_Federator_Manager_leave_and_shutdown_exceptiondata,
      1
    );
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:91

void
OpenDDS::Federator::Manager::shutdown (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  static TAO::Exception_Data
  _tao_OpenDDS_Federator_Manager_shutdown_exceptiondata [] = 
    {
      {
        "IDL:OpenDDS/Federator/Incomplete:1.0",
        OpenDDS::Federator::Incomplete::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , 0
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "shutdown",
      8,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (
      _tao_OpenDDS_Federator_Manager_shutdown_exceptiondata,
      1
    );
}

OpenDDS::Federator::Manager::Manager (void)
{
}

OpenDDS::Federator::Manager::~Manager (void)
{
}

OpenDDS::Federator::Manager_ptr
OpenDDS::Federator::Manager::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Manager>::narrow (
        _tao_objref,
        "IDL:OpenDDS/Federator/Manager:1.0");
}

OpenDDS::Federator::Manager_ptr
OpenDDS::Federator::Manager::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Manager>::unchecked_narrow (
        _tao_objref);
}

OpenDDS::Federator::Manager_ptr
OpenDDS::Federator::Manager::_nil (void)
{
  return 0;
}

OpenDDS::Federator::Manager_ptr
OpenDDS::Federator::Manager::_duplicate (Manager_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
OpenDDS::Federator::Manager::_tao_release (Manager_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
OpenDDS::Federator::Manager::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/Federator/Manager:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* OpenDDS::Federator::Manager::_interface_repository_id (void) const
{
  return "IDL:OpenDDS/Federator/Manager:1.0";
}

::CORBA::Boolean
OpenDDS::Federator::Manager::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_enum/cdr_op_cs.cpp:37



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, OpenDDS::Federator::UpdateType _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, OpenDDS::Federator::UpdateType & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;
  
  if (_tao_success)
    {
      _tao_enumerator = static_cast<OpenDDS::Federator::UpdateType> (_tao_temp);
    }
  
  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52


OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::Federator::OwnerUpdate &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.sender) &&
    (strm << _tao_aggregate.owner) &&
    (strm << _tao_aggregate.participant) &&
    (strm << _tao_aggregate.domain) &&
    (strm << _tao_aggregate.action);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::Federator::OwnerUpdate &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.sender) &&
    (strm >> _tao_aggregate.owner) &&
    (strm >> _tao_aggregate.participant) &&
    (strm >> _tao_aggregate.domain) &&
    (strm >> _tao_aggregate.action);
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52


OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::Federator::TopicUpdate &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.id) &&
    (strm << _tao_aggregate.sender) &&
    (strm << _tao_aggregate.participant) &&
    (strm << _tao_aggregate.domain) &&
    (strm << _tao_aggregate.action) &&
    (strm << _tao_aggregate.topic.in ()) &&
    (strm << _tao_aggregate.datatype.in ()) &&
    (strm << _tao_aggregate.qos);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::Federator::TopicUpdate &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.id) &&
    (strm >> _tao_aggregate.sender) &&
    (strm >> _tao_aggregate.participant) &&
    (strm >> _tao_aggregate.domain) &&
    (strm >> _tao_aggregate.action) &&
    (strm >> _tao_aggregate.topic.out ()) &&
    (strm >> _tao_aggregate.datatype.out ()) &&
    (strm >> _tao_aggregate.qos);
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52


OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::Federator::ParticipantUpdate &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.id) &&
    (strm << _tao_aggregate.sender) &&
    (strm << _tao_aggregate.owner) &&
    (strm << _tao_aggregate.domain) &&
    (strm << _tao_aggregate.action) &&
    (strm << _tao_aggregate.qos);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::Federator::ParticipantUpdate &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.id) &&
    (strm >> _tao_aggregate.sender) &&
    (strm >> _tao_aggregate.owner) &&
    (strm >> _tao_aggregate.domain) &&
    (strm >> _tao_aggregate.action) &&
    (strm >> _tao_aggregate.qos);
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52


OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::Federator::PublicationUpdate &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.id) &&
    (strm << _tao_aggregate.sender) &&
    (strm << _tao_aggregate.topic) &&
    (strm << _tao_aggregate.participant) &&
    (strm << _tao_aggregate.domain) &&
    (strm << _tao_aggregate.action) &&
    (strm << _tao_aggregate.callback.in ()) &&
    (strm << _tao_aggregate.publisher_qos) &&
    (strm << _tao_aggregate.datawriter_qos) &&
    (strm << _tao_aggregate.transport_info);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::Federator::PublicationUpdate &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.id) &&
    (strm >> _tao_aggregate.sender) &&
    (strm >> _tao_aggregate.topic) &&
    (strm >> _tao_aggregate.participant) &&
    (strm >> _tao_aggregate.domain) &&
    (strm >> _tao_aggregate.action) &&
    (strm >> _tao_aggregate.callback.out ()) &&
    (strm >> _tao_aggregate.publisher_qos) &&
    (strm >> _tao_aggregate.datawriter_qos) &&
    (strm >> _tao_aggregate.transport_info);
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52


OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::Federator::SubscriptionUpdate &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.id) &&
    (strm << _tao_aggregate.sender) &&
    (strm << _tao_aggregate.topic) &&
    (strm << _tao_aggregate.participant) &&
    (strm << _tao_aggregate.domain) &&
    (strm << _tao_aggregate.action) &&
    (strm << _tao_aggregate.callback.in ()) &&
    (strm << _tao_aggregate.subscriber_qos) &&
    (strm << _tao_aggregate.datareader_qos) &&
    (strm << _tao_aggregate.transport_info) &&
    (strm << _tao_aggregate.filter_class_name.in ()) &&
    (strm << _tao_aggregate.filter_expression.in ()) &&
    (strm << _tao_aggregate.expression_params);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::Federator::SubscriptionUpdate &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.id) &&
    (strm >> _tao_aggregate.sender) &&
    (strm >> _tao_aggregate.topic) &&
    (strm >> _tao_aggregate.participant) &&
    (strm >> _tao_aggregate.domain) &&
    (strm >> _tao_aggregate.action) &&
    (strm >> _tao_aggregate.callback.out ()) &&
    (strm >> _tao_aggregate.subscriber_qos) &&
    (strm >> _tao_aggregate.datareader_qos) &&
    (strm >> _tao_aggregate.transport_info) &&
    (strm >> _tao_aggregate.filter_class_name.out ()) &&
    (strm >> _tao_aggregate.filter_expression.out ()) &&
    (strm >> _tao_aggregate.expression_params);
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_cs.cpp:51

OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::Federator::Incomplete &_tao_aggregate
  )
{
  // Marshal the repository ID.
  return (strm << _tao_aggregate._rep_id ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &,
    OpenDDS::Federator::Incomplete&
  )
{
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:54


OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::Federator::Manager_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::Federator::Manager_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::OpenDDS::Federator::Manager RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL





OPENDDS_END_VERSIONED_NAMESPACE_DECL


