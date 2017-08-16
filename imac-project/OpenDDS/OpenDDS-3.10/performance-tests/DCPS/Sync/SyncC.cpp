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


#include "SyncC.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "SyncC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Sync::Server.

Sync::Server_ptr
TAO::Objref_Traits<Sync::Server>::duplicate (
    Sync::Server_ptr p)
{
  return Sync::Server::_duplicate (p);
}

void
TAO::Objref_Traits<Sync::Server>::release (
    Sync::Server_ptr p)
{
  ::CORBA::release (p);
}

Sync::Server_ptr
TAO::Objref_Traits<Sync::Server>::nil (void)
{
  return Sync::Server::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Sync::Server>::marshal (
    const Sync::Server_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:91

void
Sync::Server::register_me (
  ::Sync::Role rol,
  ::Sync::Client_ptr callback,
  ::Sync::Id_out ide)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Sync::Role>::in_arg_val _tao_rol (rol);
  TAO::Arg_Traits< ::Sync::Client>::in_arg_val _tao_callback (callback);
  TAO::Arg_Traits< ::CORBA::Long>::out_arg_val _tao_ide (ide);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_rol,
      &_tao_callback,
      &_tao_ide
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      4,
      "register_me",
      11,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:91

void
Sync::Server::unregister (
  ::Sync::Id ide)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_ide (ide);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_ide
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "unregister",
      10,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:91

void
Sync::Server::way_point_reached (
  ::Sync::Id ide,
  ::Sync::WayPoint way_point)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_ide (ide);
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_way_point (way_point);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_ide,
      &_tao_way_point
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      3,
      "way_point_reached",
      17,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (0, 0);
}

Sync::Server::Server (void)
{
}

Sync::Server::~Server (void)
{
}

Sync::Server_ptr
Sync::Server::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Server>::narrow (
        _tao_objref,
        "IDL:Sync/Server:1.0");
}

Sync::Server_ptr
Sync::Server::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Server>::unchecked_narrow (
        _tao_objref);
}

Sync::Server_ptr
Sync::Server::_nil (void)
{
  return 0;
}

Sync::Server_ptr
Sync::Server::_duplicate (Server_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Sync::Server::_tao_release (Server_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Sync::Server::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Sync/Server:1.0"
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

const char* Sync::Server::_interface_repository_id (void) const
{
  return "IDL:Sync/Server:1.0";
}

::CORBA::Boolean
Sync::Server::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Sync::Client.

Sync::Client_ptr
TAO::Objref_Traits<Sync::Client>::duplicate (
    Sync::Client_ptr p)
{
  return Sync::Client::_duplicate (p);
}

void
TAO::Objref_Traits<Sync::Client>::release (
    Sync::Client_ptr p)
{
  ::CORBA::release (p);
}

Sync::Client_ptr
TAO::Objref_Traits<Sync::Client>::nil (void)
{
  return Sync::Client::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Sync::Client>::marshal (
    const Sync::Client_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:91

void
Sync::Client::proceed (
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

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "proceed",
      7,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);
}

Sync::Client::Client (void)
{
}

Sync::Client::~Client (void)
{
}

Sync::Client_ptr
Sync::Client::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Client>::narrow (
        _tao_objref,
        "IDL:Sync/Client:1.0");
}

Sync::Client_ptr
Sync::Client::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Client>::unchecked_narrow (
        _tao_objref);
}

Sync::Client_ptr
Sync::Client::_nil (void)
{
  return 0;
}

Sync::Client_ptr
Sync::Client::_duplicate (Client_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Sync::Client::_tao_release (Client_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Sync::Client::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Sync/Client:1.0"
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

const char* Sync::Client::_interface_repository_id (void) const
{
  return "IDL:Sync/Client:1.0";
}

::CORBA::Boolean
Sync::Client::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_enum/cdr_op_cs.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, Sync::Role _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, Sync::Role & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;
  
  if (_tao_success)
    {
      _tao_enumerator = static_cast<Sync::Role> (_tao_temp);
    }
  
  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:54

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Sync::Server_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Sync::Server_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::Sync::Server RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:54

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Sync::Client_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Sync::Client_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::Sync::Client RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL


