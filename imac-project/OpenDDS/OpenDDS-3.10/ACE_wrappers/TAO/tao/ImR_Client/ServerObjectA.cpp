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

#include "ServerObjectA.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:72

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_ImplementationRepository_ServerObject (
    ::CORBA::tk_objref,
    "IDL:ImplementationRepository/ServerObject:1.0",
    "ServerObject");
  

namespace ImplementationRepository
{
  ::CORBA::TypeCode_ptr const _tc_ServerObject =
    &_tao_tc_ImplementationRepository_ServerObject;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:41

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<ImplementationRepository::ServerObject>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace ImplementationRepository
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      ServerObject_ptr _tao_elem)
  {
    ServerObject_ptr _tao_objptr =
      ServerObject::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      ServerObject_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<ServerObject>::insert (
        _tao_any,
        ServerObject::_tao_any_destructor,
        _tc_ServerObject,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      ServerObject_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<ServerObject>::extract (
          _tao_any,
          ServerObject::_tao_any_destructor,
          _tc_ServerObject,
          _tao_elem);
  }
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    ImplementationRepository::ServerObject_ptr _tao_elem)
{
  ImplementationRepository::ServerObject_ptr _tao_objptr =
    ImplementationRepository::ServerObject::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    ImplementationRepository::ServerObject_ptr *_tao_elem)
{
  TAO::Any_Impl_T<ImplementationRepository::ServerObject>::insert (
      _tao_any,
      ImplementationRepository::ServerObject::_tao_any_destructor,
      ImplementationRepository::_tc_ServerObject,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    ImplementationRepository::ServerObject_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<ImplementationRepository::ServerObject>::extract (
        _tao_any,
        ImplementationRepository::ServerObject::_tao_any_destructor,
        ImplementationRepository::_tc_ServerObject,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL


