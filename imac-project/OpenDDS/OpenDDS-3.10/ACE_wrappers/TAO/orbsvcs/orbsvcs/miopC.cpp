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


#include "miopC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/ORB_Core.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "tao/AnyTypeCode/Any_Array_Impl_T.h"

#if !defined (__ACE_INLINE__)
#include "miopC.inl"
#endif /* !defined INLINE */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_MIOP_UNIQUEID_CS_)
#define _MIOP_UNIQUEID_CS_

MIOP::UniqueId::UniqueId (void)
{}

MIOP::UniqueId::UniqueId (
    ::CORBA::ULong length,
    ::CORBA::Octet * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::bounded_value_sequence<
        ::CORBA::Octet,
        252
      >
    (length, buffer, release)
{}

MIOP::UniqueId::UniqueId (
    const UniqueId &seq)
  : ::TAO::bounded_value_sequence<
        ::CORBA::Octet,
        252
      > (seq)
{}

MIOP::UniqueId::~UniqueId (void)
{}

void MIOP::UniqueId::_tao_any_destructor (
    void * _tao_void_pointer)
{
  UniqueId * _tao_tmp_pointer =
    static_cast<UniqueId *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:51



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:464


#ifndef _TAO_TYPECODE_MIOP_UniqueId_GUARD
#define _TAO_TYPECODE_MIOP_UniqueId_GUARD


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        MIOP_UniqueId_252 (
          ::CORBA::tk_sequence,
          &CORBA::_tc_octet,
          252U);
        
      ::CORBA::TypeCode_ptr const tc_MIOP_UniqueId_252 =
        &MIOP_UniqueId_252;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_TYPECODE_MIOP_UniqueId_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_MIOP_UniqueId (
    ::CORBA::tk_alias,
    "IDL:omg.org/MIOP/UniqueId:1.0",
    "UniqueId",
    &TAO::TypeCode::tc_MIOP_UniqueId_252);
  

namespace MIOP
{
  ::CORBA::TypeCode_ptr const _tc_UniqueId =
    &_tao_tc_MIOP_UniqueId;
}

// TAO_IDL - Generated from
// be/be_visitor_array/array_cs.cpp:97

MIOP::char4_slice *
MIOP::char4_dup (const MIOP::char4_slice *_tao_src_array)
{
  MIOP::char4_slice *_tao_dup_array =
    MIOP::char4_alloc ();
  
  if (!_tao_dup_array)
    {
      return static_cast <MIOP::char4_slice *> (0);
    }
  
  MIOP::char4_copy (_tao_dup_array, _tao_src_array);
  return _tao_dup_array;
}

MIOP::char4_slice *
MIOP::char4_alloc (void)
{
  MIOP::char4_slice *retval = 0;
  ACE_NEW_RETURN (retval, ::CORBA::Char[4], 0);
  return retval;
}

void
MIOP::char4_free (
    MIOP::char4_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
MIOP::char4_copy (
    MIOP::char4_slice * _tao_to,
    const MIOP::char4_slice *_tao_from)
{
  // Copy each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 4; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:51



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:301


#ifndef _TAO_TYPECODE_MIOP_char4_GUARD
#define _TAO_TYPECODE_MIOP_char4_GUARD


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        MIOP_char4_4 (
          ::CORBA::tk_array,
          &CORBA::_tc_char,
          4U);
        
      ::CORBA::TypeCode_ptr const tc_MIOP_char4 =
        &MIOP_char4_4;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_TYPECODE_MIOP_char4_GUARD */
static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_MIOP_char4 (
    ::CORBA::tk_alias,
    "IDL:omg.org/MIOP/char4:1.0",
    "char4",
    &TAO::TypeCode::tc_MIOP_char4);
  

namespace MIOP
{
  ::CORBA::TypeCode_ptr const _tc_char4 =
    &_tao_tc_MIOP_char4;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:88



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:301



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:464

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_MIOP_PacketHeader_1_0[] =
      {
        { "magic", &MIOP::_tc_char4 },
        { "hdr_version", &CORBA::_tc_octet },
        { "flags", &CORBA::_tc_octet },
        { "packet_length", &CORBA::_tc_ushort },
        { "packet_number", &CORBA::_tc_ulong },
        { "number_of_packets", &CORBA::_tc_ulong },
        { "Id", &MIOP::_tc_UniqueId }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_MIOP_PacketHeader_1_0 (
  ::CORBA::tk_struct,
  "IDL:omg.org/MIOP/PacketHeader_1_0:1.0",
  "PacketHeader_1_0",
  _tao_fields_MIOP_PacketHeader_1_0,
  7);


namespace MIOP
{
  ::CORBA::TypeCode_ptr const _tc_PacketHeader_1_0 =
    &_tao_tc_MIOP_PacketHeader_1_0;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_cs.cpp:59

void
MIOP::PacketHeader_1_0::_tao_any_destructor (
    void *_tao_void_pointer)
{
  PacketHeader_1_0 *_tao_tmp_pointer =
    static_cast<PacketHeader_1_0 *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:51

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_MIOP_Version (
    ::CORBA::tk_alias,
    "IDL:omg.org/MIOP/Version:1.0",
    "Version",
    &GIOP::_tc_Version);
  

namespace MIOP
{
  ::CORBA::TypeCode_ptr const _tc_Version =
    &_tao_tc_MIOP_Version;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:51

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_MIOP_Address (
    ::CORBA::tk_alias,
    "IDL:omg.org/MIOP/Address:1.0",
    "Address",
    &CORBA::_tc_string);
  

namespace MIOP
{
  ::CORBA::TypeCode_ptr const _tc_Address =
    &_tao_tc_MIOP_Address;
}

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_MIOP_COMPONENT_SEQ_CS_)
#define _MIOP_COMPONENT_SEQ_CS_

MIOP::Component_Seq::Component_Seq (void)
{}

MIOP::Component_Seq::Component_Seq (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence<
        IOP::TaggedComponent
      > (max)
{}

MIOP::Component_Seq::Component_Seq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    IOP::TaggedComponent * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence<
        IOP::TaggedComponent
      >
    (max, length, buffer, release)
{}

MIOP::Component_Seq::Component_Seq (
    const Component_Seq &seq)
  : ::TAO::unbounded_value_sequence<
        IOP::TaggedComponent
      > (seq)
{}

MIOP::Component_Seq::~Component_Seq (void)
{}

void MIOP::Component_Seq::_tao_any_destructor (
    void * _tao_void_pointer)
{
  Component_Seq * _tao_tmp_pointer =
    static_cast<Component_Seq *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:51



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:464


#ifndef _TAO_TYPECODE_MIOP_Component_Seq_GUARD
#define _TAO_TYPECODE_MIOP_Component_Seq_GUARD


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        MIOP_Component_Seq_0 (
          ::CORBA::tk_sequence,
          &IOP::_tc_TaggedComponent,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_MIOP_Component_Seq_0 =
        &MIOP_Component_Seq_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_TYPECODE_MIOP_Component_Seq_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_MIOP_Component_Seq (
    ::CORBA::tk_alias,
    "IDL:omg.org/MIOP/Component_Seq:1.0",
    "Component_Seq",
    &TAO::TypeCode::tc_MIOP_Component_Seq_0);
  

namespace MIOP
{
  ::CORBA::TypeCode_ptr const _tc_Component_Seq =
    &_tao_tc_MIOP_Component_Seq;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:88



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:464

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_MIOP_UIPMC_ProfileBody[] =
      {
        { "miop_version", &MIOP::_tc_Version },
        { "the_address", &MIOP::_tc_Address },
        { "the_port", &CORBA::_tc_short },
        { "components", &MIOP::_tc_Component_Seq }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_MIOP_UIPMC_ProfileBody (
  ::CORBA::tk_struct,
  "IDL:omg.org/MIOP/UIPMC_ProfileBody:1.0",
  "UIPMC_ProfileBody",
  _tao_fields_MIOP_UIPMC_ProfileBody,
  4);


namespace MIOP
{
  ::CORBA::TypeCode_ptr const _tc_UIPMC_ProfileBody =
    &_tao_tc_MIOP_UIPMC_ProfileBody;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_cs.cpp:59

void
MIOP::UIPMC_ProfileBody::_tao_any_destructor (
    void *_tao_void_pointer)
{
  UIPMC_ProfileBody *_tao_tmp_pointer =
    static_cast<UIPMC_ProfileBody *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_cs.cpp:48



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace MIOP
{
  
  // Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::MIOP::UniqueId &_tao_elem
    )
  {
    TAO::Any_Dual_Impl_T< ::MIOP::UniqueId>::insert_copy (
        _tao_any,
        ::MIOP::UniqueId::_tao_any_destructor,
        ::MIOP::_tc_UniqueId,
        _tao_elem
      );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    ::MIOP::UniqueId *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::MIOP::UniqueId>::insert (
      _tao_any,
      ::MIOP::UniqueId::_tao_any_destructor,
      ::MIOP::_tc_UniqueId,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::MIOP::UniqueId *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ::MIOP::UniqueId *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::MIOP::UniqueId *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::MIOP::UniqueId>::extract (
        _tao_any,
        ::MIOP::UniqueId::_tao_any_destructor,
        ::MIOP::_tc_UniqueId,
        _tao_elem
      );
}
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const MIOP::UniqueId &_tao_elem)
{
  TAO::Any_Dual_Impl_T<MIOP::UniqueId>::insert_copy (
      _tao_any,
      MIOP::UniqueId::_tao_any_destructor,
      MIOP::_tc_UniqueId,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    MIOP::UniqueId *_tao_elem)
{
  TAO::Any_Dual_Impl_T<MIOP::UniqueId>::insert (
      _tao_any,
      MIOP::UniqueId::_tao_any_destructor,
      MIOP::_tc_UniqueId,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    MIOP::UniqueId *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const MIOP::UniqueId *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const MIOP::UniqueId *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<MIOP::UniqueId>::extract (
        _tao_any,
        MIOP::UniqueId::_tao_any_destructor,
        MIOP::_tc_UniqueId,
        _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// be/be_visitor_array/any_op_cs.cpp:40



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

void operator<<= (
    ::CORBA::Any &_tao_any,
    const MIOP::char4_forany &_tao_elem
  )
{
  TAO::Any_Array_Impl_T<
      MIOP::char4_slice,
      MIOP::char4_forany
    >::insert (
        _tao_any,
        MIOP::char4_forany::_tao_any_destructor,
        MIOP::_tc_char4,
        _tao_elem.nocopy ()
          ? _tao_elem.ptr ()
          : MIOP::char4_dup (_tao_elem.in ())
      );
}

::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    MIOP::char4_forany &_tao_elem
  )
{
  return
    TAO::Any_Array_Impl_T<
        MIOP::char4_slice,
        MIOP::char4_forany
      >::extract (
          _tao_any,
          MIOP::char4_forany::_tao_any_destructor,
          MIOP::_tc_char4,
          _tao_elem.out ()
        );
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_cs.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace MIOP
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::MIOP::PacketHeader_1_0 &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::MIOP::PacketHeader_1_0>::insert_copy (
        _tao_any,
        ::MIOP::PacketHeader_1_0::_tao_any_destructor,
        ::MIOP::_tc_PacketHeader_1_0,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    MIOP::PacketHeader_1_0 *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::MIOP::PacketHeader_1_0>::insert (
      _tao_any,
      ::MIOP::PacketHeader_1_0::_tao_any_destructor,
      ::MIOP::_tc_PacketHeader_1_0,
      _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::MIOP::PacketHeader_1_0 *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ::MIOP::PacketHeader_1_0 *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::MIOP::PacketHeader_1_0 *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::MIOP::PacketHeader_1_0>::extract (
        _tao_any,
        ::MIOP::PacketHeader_1_0::_tao_any_destructor,
        ::MIOP::_tc_PacketHeader_1_0,
        _tao_elem
      );
}
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const MIOP::PacketHeader_1_0 &_tao_elem)
{
  TAO::Any_Dual_Impl_T<MIOP::PacketHeader_1_0>::insert_copy (
    _tao_any,
    MIOP::PacketHeader_1_0::_tao_any_destructor,
    MIOP::_tc_PacketHeader_1_0,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  MIOP::PacketHeader_1_0 *_tao_elem)
{
  TAO::Any_Dual_Impl_T<MIOP::PacketHeader_1_0>::insert (
    _tao_any,
    MIOP::PacketHeader_1_0::_tao_any_destructor,
    MIOP::_tc_PacketHeader_1_0,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  MIOP::PacketHeader_1_0 *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const MIOP::PacketHeader_1_0 *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const MIOP::PacketHeader_1_0 *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<MIOP::PacketHeader_1_0>::extract (
      _tao_any,
      MIOP::PacketHeader_1_0::_tao_any_destructor,
      MIOP::_tc_PacketHeader_1_0,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_cs.cpp:48



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace MIOP
{
  
  // Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::MIOP::Component_Seq &_tao_elem
    )
  {
    TAO::Any_Dual_Impl_T< ::MIOP::Component_Seq>::insert_copy (
        _tao_any,
        ::MIOP::Component_Seq::_tao_any_destructor,
        ::MIOP::_tc_Component_Seq,
        _tao_elem
      );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    ::MIOP::Component_Seq *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::MIOP::Component_Seq>::insert (
      _tao_any,
      ::MIOP::Component_Seq::_tao_any_destructor,
      ::MIOP::_tc_Component_Seq,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::MIOP::Component_Seq *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ::MIOP::Component_Seq *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::MIOP::Component_Seq *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::MIOP::Component_Seq>::extract (
        _tao_any,
        ::MIOP::Component_Seq::_tao_any_destructor,
        ::MIOP::_tc_Component_Seq,
        _tao_elem
      );
}
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const MIOP::Component_Seq &_tao_elem)
{
  TAO::Any_Dual_Impl_T<MIOP::Component_Seq>::insert_copy (
      _tao_any,
      MIOP::Component_Seq::_tao_any_destructor,
      MIOP::_tc_Component_Seq,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    MIOP::Component_Seq *_tao_elem)
{
  TAO::Any_Dual_Impl_T<MIOP::Component_Seq>::insert (
      _tao_any,
      MIOP::Component_Seq::_tao_any_destructor,
      MIOP::_tc_Component_Seq,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    MIOP::Component_Seq *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const MIOP::Component_Seq *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const MIOP::Component_Seq *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<MIOP::Component_Seq>::extract (
        _tao_any,
        MIOP::Component_Seq::_tao_any_destructor,
        MIOP::_tc_Component_Seq,
        _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_cs.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace MIOP
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::MIOP::UIPMC_ProfileBody &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::MIOP::UIPMC_ProfileBody>::insert_copy (
        _tao_any,
        ::MIOP::UIPMC_ProfileBody::_tao_any_destructor,
        ::MIOP::_tc_UIPMC_ProfileBody,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    MIOP::UIPMC_ProfileBody *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::MIOP::UIPMC_ProfileBody>::insert (
      _tao_any,
      ::MIOP::UIPMC_ProfileBody::_tao_any_destructor,
      ::MIOP::_tc_UIPMC_ProfileBody,
      _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::MIOP::UIPMC_ProfileBody *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ::MIOP::UIPMC_ProfileBody *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::MIOP::UIPMC_ProfileBody *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::MIOP::UIPMC_ProfileBody>::extract (
        _tao_any,
        ::MIOP::UIPMC_ProfileBody::_tao_any_destructor,
        ::MIOP::_tc_UIPMC_ProfileBody,
        _tao_elem
      );
}
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const MIOP::UIPMC_ProfileBody &_tao_elem)
{
  TAO::Any_Dual_Impl_T<MIOP::UIPMC_ProfileBody>::insert_copy (
    _tao_any,
    MIOP::UIPMC_ProfileBody::_tao_any_destructor,
    MIOP::_tc_UIPMC_ProfileBody,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  MIOP::UIPMC_ProfileBody *_tao_elem)
{
  TAO::Any_Dual_Impl_T<MIOP::UIPMC_ProfileBody>::insert (
    _tao_any,
    MIOP::UIPMC_ProfileBody::_tao_any_destructor,
    MIOP::_tc_UIPMC_ProfileBody,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  MIOP::UIPMC_ProfileBody *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const MIOP::UIPMC_ProfileBody *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const MIOP::UIPMC_ProfileBody *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<MIOP::UIPMC_ProfileBody>::extract (
      _tao_any,
      MIOP::UIPMC_ProfileBody::_tao_any_destructor,
      MIOP::_tc_UIPMC_ProfileBody,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_MIOP_UniqueId_CPP_
#define _TAO_CDR_OP_MIOP_UniqueId_CPP_


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const MIOP::UniqueId &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    MIOP::UniqueId &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_CDR_OP_MIOP_UniqueId_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_cs.cpp:166



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const MIOP::char4_forany &_tao_array)
{
  return
    strm.write_char_array (
        reinterpret_cast <const ACE_CDR::Char *> (_tao_array.in ()),
        4);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    MIOP::char4_forany &_tao_array)
{
  return
    strm.read_char_array (
        reinterpret_cast <ACE_CDR::Char *> (_tao_array.out ()),
        4);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const MIOP::PacketHeader_1_0 &_tao_aggregate)
{
  MIOP::char4_forany _tao_aggregate_magic
      #if defined __IBMCPP__ && __IBMCPP__ <= 800
      ((MIOP::char4_slice*) (
      #else
      (const_cast<
          MIOP::char4_slice*> (
      #endif
          _tao_aggregate.magic
        )
    );
  return
    (strm << _tao_aggregate_magic) &&
    (strm << ::ACE_OutputCDR::from_octet (_tao_aggregate.hdr_version)) &&
    (strm << ::ACE_OutputCDR::from_octet (_tao_aggregate.flags)) &&
    (strm << _tao_aggregate.packet_length) &&
    (strm << _tao_aggregate.packet_number) &&
    (strm << _tao_aggregate.number_of_packets) &&
    (strm << _tao_aggregate.Id);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    MIOP::PacketHeader_1_0 &_tao_aggregate)
{
  MIOP::char4_forany _tao_aggregate_magic
      #if defined __IBMCPP__ && __IBMCPP__ <= 800
      ((MIOP::char4_slice*) (
      #else
      (const_cast<
          MIOP::char4_slice*> (
      #endif
          _tao_aggregate.magic
        )
    );
  return
    (strm >> _tao_aggregate_magic) &&
    (strm >> ::ACE_InputCDR::to_octet (_tao_aggregate.hdr_version)) &&
    (strm >> ::ACE_InputCDR::to_octet (_tao_aggregate.flags)) &&
    (strm >> _tao_aggregate.packet_length) &&
    (strm >> _tao_aggregate.packet_number) &&
    (strm >> _tao_aggregate.number_of_packets) &&
    (strm >> _tao_aggregate.Id);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_MIOP_Component_Seq_CPP_
#define _TAO_CDR_OP_MIOP_Component_Seq_CPP_


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const MIOP::Component_Seq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    MIOP::Component_Seq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_CDR_OP_MIOP_Component_Seq_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const MIOP::UIPMC_ProfileBody &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.miop_version) &&
    (strm << _tao_aggregate.the_address.in ()) &&
    (strm << _tao_aggregate.the_port) &&
    (strm << _tao_aggregate.components);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    MIOP::UIPMC_ProfileBody &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.miop_version) &&
    (strm >> _tao_aggregate.the_address.out ()) &&
    (strm >> _tao_aggregate.the_port) &&
    (strm >> _tao_aggregate.components);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL





TAO_END_VERSIONED_NAMESPACE_DECL


