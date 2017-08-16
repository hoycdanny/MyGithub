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


#include "MessengerC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"

#if !defined (__ACE_INLINE__)
#include "MessengerC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:88

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_Messenger_Message[] =
      {
        { "from", &CORBA::_tc_string },
        { "subject", &CORBA::_tc_string },
        { "subject_id", &CORBA::_tc_long },
        { "dataee", &CORBA::_tc_string },
        { "count", &CORBA::_tc_long }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_Messenger_Message (
  ::CORBA::tk_struct,
  "IDL:Messenger/Message:1.0",
  "Message",
  _tao_fields_Messenger_Message,
  5);


namespace Messenger
{
  ::CORBA::TypeCode_ptr const _tc_Message =
    &_tao_tc_Messenger_Message;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_cs.cpp:59

void
Messenger::Message::_tao_any_destructor (
    void *_tao_void_pointer)
{
  Message *_tao_tmp_pointer =
    static_cast<Message *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_cs.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Messenger
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::Messenger::Message &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::Messenger::Message>::insert_copy (
        _tao_any,
        ::Messenger::Message::_tao_any_destructor,
        ::Messenger::_tc_Message,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    Messenger::Message *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::Messenger::Message>::insert (
      _tao_any,
      ::Messenger::Message::_tao_any_destructor,
      ::Messenger::_tc_Message,
      _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::Messenger::Message *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ::Messenger::Message *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::Messenger::Message *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::Messenger::Message>::extract (
        _tao_any,
        ::Messenger::Message::_tao_any_destructor,
        ::Messenger::_tc_Message,
        _tao_elem
      );
}
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const Messenger::Message &_tao_elem)
{
  TAO::Any_Dual_Impl_T<Messenger::Message>::insert_copy (
    _tao_any,
    Messenger::Message::_tao_any_destructor,
    Messenger::_tc_Message,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  Messenger::Message *_tao_elem)
{
  TAO::Any_Dual_Impl_T<Messenger::Message>::insert (
    _tao_any,
    Messenger::Message::_tao_any_destructor,
    Messenger::_tc_Message,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  Messenger::Message *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const Messenger::Message *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const Messenger::Message *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<Messenger::Message>::extract (
      _tao_any,
      Messenger::Message::_tao_any_destructor,
      Messenger::_tc_Message,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Messenger::Message &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.from.in ()) &&
    (strm << _tao_aggregate.subject.in ()) &&
    (strm << _tao_aggregate.subject_id) &&
    (strm << _tao_aggregate.dataee.in ()) &&
    (strm << _tao_aggregate.count);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Messenger::Message &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.from.out ()) &&
    (strm >> _tao_aggregate.subject.out ()) &&
    (strm >> _tao_aggregate.subject_id) &&
    (strm >> _tao_aggregate.dataee.out ()) &&
    (strm >> _tao_aggregate.count);
}

TAO_END_VERSIONED_NAMESPACE_DECL



