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


#include "SharedTypesC.h"
#include "tao/CDR.h"
#include "tao/ORB_Core.h"

#if !defined (__ACE_INLINE__)
#include "SharedTypesC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_XYZ_SEQOFBOOLEAN_CS_)
#define _XYZ_SEQOFBOOLEAN_CS_

Xyz::SeqOfBoolean::SeqOfBoolean (void)
{}

Xyz::SeqOfBoolean::SeqOfBoolean (
    ::CORBA::ULong length,
    ::CORBA::Boolean * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::bounded_value_sequence<
        ::CORBA::Boolean,
        6
      >
    (length, buffer, release)
{}

Xyz::SeqOfBoolean::SeqOfBoolean (
    const SeqOfBoolean &seq)
  : ::TAO::bounded_value_sequence<
        ::CORBA::Boolean,
        6
      > (seq)
{}

Xyz::SeqOfBoolean::~SeqOfBoolean (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_XYZ_SEQOFSTRING_CS_)
#define _XYZ_SEQOFSTRING_CS_

Xyz::SeqOfString::SeqOfString (void)
{}

Xyz::SeqOfString::SeqOfString (
    ::CORBA::ULong length,
    ::CORBA::Char * * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::bounded_basic_string_sequence<char, 6>
    (length, buffer, release)
{}

Xyz::SeqOfString::SeqOfString (
    const SeqOfString &seq)
  : ::TAO::bounded_basic_string_sequence<char, 6> (seq)
{}

Xyz::SeqOfString::~SeqOfString (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_XYZ_SEQOFCHAR_CS_)
#define _XYZ_SEQOFCHAR_CS_

Xyz::SeqOfChar::SeqOfChar (void)
{}

Xyz::SeqOfChar::SeqOfChar (
    ::CORBA::ULong length,
    ::CORBA::Char * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::bounded_value_sequence<
        ::CORBA::Char,
        6
      >
    (length, buffer, release)
{}

Xyz::SeqOfChar::SeqOfChar (
    const SeqOfChar &seq)
  : ::TAO::bounded_value_sequence<
        ::CORBA::Char,
        6
      > (seq)
{}

Xyz::SeqOfChar::~SeqOfChar (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_XYZ_SEQOFOCTET_CS_)
#define _XYZ_SEQOFOCTET_CS_

Xyz::SeqOfOctet::SeqOfOctet (void)
{}

Xyz::SeqOfOctet::SeqOfOctet (
    ::CORBA::ULong length,
    ::CORBA::Octet * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::bounded_value_sequence<
        ::CORBA::Octet,
        6
      >
    (length, buffer, release)
{}

Xyz::SeqOfOctet::SeqOfOctet (
    const SeqOfOctet &seq)
  : ::TAO::bounded_value_sequence<
        ::CORBA::Octet,
        6
      > (seq)
{}

Xyz::SeqOfOctet::~SeqOfOctet (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_XYZ_SEQOFLONG_CS_)
#define _XYZ_SEQOFLONG_CS_

Xyz::SeqOfLong::SeqOfLong (void)
{}

Xyz::SeqOfLong::SeqOfLong (
    ::CORBA::ULong length,
    ::CORBA::Long * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::bounded_value_sequence<
        ::CORBA::Long,
        6
      >
    (length, buffer, release)
{}

Xyz::SeqOfLong::SeqOfLong (
    const SeqOfLong &seq)
  : ::TAO::bounded_value_sequence<
        ::CORBA::Long,
        6
      > (seq)
{}

Xyz::SeqOfLong::~SeqOfLong (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_XYZ_SEQOFANENUM_CS_)
#define _XYZ_SEQOFANENUM_CS_

Xyz::SeqOfAnEnum::SeqOfAnEnum (void)
{}

Xyz::SeqOfAnEnum::SeqOfAnEnum (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence<
        AnEnum
      > (max)
{}

Xyz::SeqOfAnEnum::SeqOfAnEnum (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    Xyz::AnEnum * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence<
        AnEnum
      >
    (max, length, buffer, release)
{}

Xyz::SeqOfAnEnum::SeqOfAnEnum (
    const SeqOfAnEnum &seq)
  : ::TAO::unbounded_value_sequence<
        AnEnum
      > (seq)
{}

Xyz::SeqOfAnEnum::~SeqOfAnEnum (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_array/array_cs.cpp:97

Xyz::ArrayOfBoolean_slice *
Xyz::ArrayOfBoolean_dup (const Xyz::ArrayOfBoolean_slice *_tao_src_array)
{
  Xyz::ArrayOfBoolean_slice *_tao_dup_array =
    Xyz::ArrayOfBoolean_alloc ();
  
  if (!_tao_dup_array)
    {
      return static_cast <Xyz::ArrayOfBoolean_slice *> (0);
    }
  
  Xyz::ArrayOfBoolean_copy (_tao_dup_array, _tao_src_array);
  return _tao_dup_array;
}

Xyz::ArrayOfBoolean_slice *
Xyz::ArrayOfBoolean_alloc (void)
{
  Xyz::ArrayOfBoolean_slice *retval = 0;
  ACE_NEW_RETURN (retval, ::CORBA::Boolean[5], 0);
  return retval;
}

void
Xyz::ArrayOfBoolean_free (
    Xyz::ArrayOfBoolean_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
Xyz::ArrayOfBoolean_copy (
    Xyz::ArrayOfBoolean_slice * _tao_to,
    const Xyz::ArrayOfBoolean_slice *_tao_from)
{
  // Copy each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 5; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}

// TAO_IDL - Generated from
// be/be_visitor_array/array_cs.cpp:97

Xyz::ArrayOfString_slice *
Xyz::ArrayOfString_dup (const Xyz::ArrayOfString_slice *_tao_src_array)
{
  Xyz::ArrayOfString_slice *_tao_dup_array =
    Xyz::ArrayOfString_alloc ();
  
  if (!_tao_dup_array)
    {
      return static_cast <Xyz::ArrayOfString_slice *> (0);
    }
  
  Xyz::ArrayOfString_copy (_tao_dup_array, _tao_src_array);
  return _tao_dup_array;
}

Xyz::ArrayOfString_slice *
Xyz::ArrayOfString_alloc (void)
{
  Xyz::ArrayOfString_slice *retval = 0;
  ACE_NEW_RETURN (retval, ::TAO::String_Manager[5], 0);
  return retval;
}

void
Xyz::ArrayOfString_free (
    Xyz::ArrayOfString_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
Xyz::ArrayOfString_copy (
    Xyz::ArrayOfString_slice * _tao_to,
    const Xyz::ArrayOfString_slice *_tao_from)
{
  // Copy each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 5; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}

// TAO_IDL - Generated from
// be/be_visitor_array/array_cs.cpp:97

Xyz::ArrayOfChar_slice *
Xyz::ArrayOfChar_dup (const Xyz::ArrayOfChar_slice *_tao_src_array)
{
  Xyz::ArrayOfChar_slice *_tao_dup_array =
    Xyz::ArrayOfChar_alloc ();
  
  if (!_tao_dup_array)
    {
      return static_cast <Xyz::ArrayOfChar_slice *> (0);
    }
  
  Xyz::ArrayOfChar_copy (_tao_dup_array, _tao_src_array);
  return _tao_dup_array;
}

Xyz::ArrayOfChar_slice *
Xyz::ArrayOfChar_alloc (void)
{
  Xyz::ArrayOfChar_slice *retval = 0;
  ACE_NEW_RETURN (retval, ::CORBA::Char[5], 0);
  return retval;
}

void
Xyz::ArrayOfChar_free (
    Xyz::ArrayOfChar_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
Xyz::ArrayOfChar_copy (
    Xyz::ArrayOfChar_slice * _tao_to,
    const Xyz::ArrayOfChar_slice *_tao_from)
{
  // Copy each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 5; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}

// TAO_IDL - Generated from
// be/be_visitor_array/array_cs.cpp:97

Xyz::ArrayOfOctet_slice *
Xyz::ArrayOfOctet_dup (const Xyz::ArrayOfOctet_slice *_tao_src_array)
{
  Xyz::ArrayOfOctet_slice *_tao_dup_array =
    Xyz::ArrayOfOctet_alloc ();
  
  if (!_tao_dup_array)
    {
      return static_cast <Xyz::ArrayOfOctet_slice *> (0);
    }
  
  Xyz::ArrayOfOctet_copy (_tao_dup_array, _tao_src_array);
  return _tao_dup_array;
}

Xyz::ArrayOfOctet_slice *
Xyz::ArrayOfOctet_alloc (void)
{
  Xyz::ArrayOfOctet_slice *retval = 0;
  ACE_NEW_RETURN (retval, ::CORBA::Octet[5], 0);
  return retval;
}

void
Xyz::ArrayOfOctet_free (
    Xyz::ArrayOfOctet_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
Xyz::ArrayOfOctet_copy (
    Xyz::ArrayOfOctet_slice * _tao_to,
    const Xyz::ArrayOfOctet_slice *_tao_from)
{
  // Copy each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 5; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}

// TAO_IDL - Generated from
// be/be_visitor_array/array_cs.cpp:97

Xyz::ArrayOfLong_slice *
Xyz::ArrayOfLong_dup (const Xyz::ArrayOfLong_slice *_tao_src_array)
{
  Xyz::ArrayOfLong_slice *_tao_dup_array =
    Xyz::ArrayOfLong_alloc ();
  
  if (!_tao_dup_array)
    {
      return static_cast <Xyz::ArrayOfLong_slice *> (0);
    }
  
  Xyz::ArrayOfLong_copy (_tao_dup_array, _tao_src_array);
  return _tao_dup_array;
}

Xyz::ArrayOfLong_slice *
Xyz::ArrayOfLong_alloc (void)
{
  Xyz::ArrayOfLong_slice *retval = 0;
  ACE_NEW_RETURN (retval, ::CORBA::Long[5], 0);
  return retval;
}

void
Xyz::ArrayOfLong_free (
    Xyz::ArrayOfLong_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
Xyz::ArrayOfLong_copy (
    Xyz::ArrayOfLong_slice * _tao_to,
    const Xyz::ArrayOfLong_slice *_tao_from)
{
  // Copy each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 5; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}

// TAO_IDL - Generated from
// be/be_visitor_array/array_cs.cpp:97

Xyz::ArrayOfAnEnum_slice *
Xyz::ArrayOfAnEnum_dup (const Xyz::ArrayOfAnEnum_slice *_tao_src_array)
{
  Xyz::ArrayOfAnEnum_slice *_tao_dup_array =
    Xyz::ArrayOfAnEnum_alloc ();
  
  if (!_tao_dup_array)
    {
      return static_cast <Xyz::ArrayOfAnEnum_slice *> (0);
    }
  
  Xyz::ArrayOfAnEnum_copy (_tao_dup_array, _tao_src_array);
  return _tao_dup_array;
}

Xyz::ArrayOfAnEnum_slice *
Xyz::ArrayOfAnEnum_alloc (void)
{
  Xyz::ArrayOfAnEnum_slice *retval = 0;
  ACE_NEW_RETURN (retval, Xyz::AnEnum[5], 0);
  return retval;
}

void
Xyz::ArrayOfAnEnum_free (
    Xyz::ArrayOfAnEnum_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
Xyz::ArrayOfAnEnum_copy (
    Xyz::ArrayOfAnEnum_slice * _tao_to,
    const Xyz::ArrayOfAnEnum_slice *_tao_from)
{
  // Copy each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 5; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}

// TAO_IDL - Generated from
// be/be_visitor_array/array_cs.cpp:97

Xyz::ArrayOfSeqOfBoolean_slice *
Xyz::ArrayOfSeqOfBoolean_dup (const Xyz::ArrayOfSeqOfBoolean_slice *_tao_src_array)
{
  Xyz::ArrayOfSeqOfBoolean_slice *_tao_dup_array =
    Xyz::ArrayOfSeqOfBoolean_alloc ();
  
  if (!_tao_dup_array)
    {
      return static_cast <Xyz::ArrayOfSeqOfBoolean_slice *> (0);
    }
  
  Xyz::ArrayOfSeqOfBoolean_copy (_tao_dup_array, _tao_src_array);
  return _tao_dup_array;
}

Xyz::ArrayOfSeqOfBoolean_slice *
Xyz::ArrayOfSeqOfBoolean_alloc (void)
{
  Xyz::ArrayOfSeqOfBoolean_slice *retval = 0;
  ACE_NEW_RETURN (retval, Xyz::SeqOfBoolean[6], 0);
  return retval;
}

void
Xyz::ArrayOfSeqOfBoolean_free (
    Xyz::ArrayOfSeqOfBoolean_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
Xyz::ArrayOfSeqOfBoolean_copy (
    Xyz::ArrayOfSeqOfBoolean_slice * _tao_to,
    const Xyz::ArrayOfSeqOfBoolean_slice *_tao_from)
{
  // Copy each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 6; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}

// TAO_IDL - Generated from
// be/be_visitor_array/array_cs.cpp:97

Xyz::ArrayOfSeqOfString_slice *
Xyz::ArrayOfSeqOfString_dup (const Xyz::ArrayOfSeqOfString_slice *_tao_src_array)
{
  Xyz::ArrayOfSeqOfString_slice *_tao_dup_array =
    Xyz::ArrayOfSeqOfString_alloc ();
  
  if (!_tao_dup_array)
    {
      return static_cast <Xyz::ArrayOfSeqOfString_slice *> (0);
    }
  
  Xyz::ArrayOfSeqOfString_copy (_tao_dup_array, _tao_src_array);
  return _tao_dup_array;
}

Xyz::ArrayOfSeqOfString_slice *
Xyz::ArrayOfSeqOfString_alloc (void)
{
  Xyz::ArrayOfSeqOfString_slice *retval = 0;
  ACE_NEW_RETURN (retval, Xyz::SeqOfString[6], 0);
  return retval;
}

void
Xyz::ArrayOfSeqOfString_free (
    Xyz::ArrayOfSeqOfString_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
Xyz::ArrayOfSeqOfString_copy (
    Xyz::ArrayOfSeqOfString_slice * _tao_to,
    const Xyz::ArrayOfSeqOfString_slice *_tao_from)
{
  // Copy each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 6; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}

// TAO_IDL - Generated from
// be/be_visitor_array/array_cs.cpp:97

Xyz::ArrayOfSeqOfChar_slice *
Xyz::ArrayOfSeqOfChar_dup (const Xyz::ArrayOfSeqOfChar_slice *_tao_src_array)
{
  Xyz::ArrayOfSeqOfChar_slice *_tao_dup_array =
    Xyz::ArrayOfSeqOfChar_alloc ();
  
  if (!_tao_dup_array)
    {
      return static_cast <Xyz::ArrayOfSeqOfChar_slice *> (0);
    }
  
  Xyz::ArrayOfSeqOfChar_copy (_tao_dup_array, _tao_src_array);
  return _tao_dup_array;
}

Xyz::ArrayOfSeqOfChar_slice *
Xyz::ArrayOfSeqOfChar_alloc (void)
{
  Xyz::ArrayOfSeqOfChar_slice *retval = 0;
  ACE_NEW_RETURN (retval, Xyz::SeqOfChar[6], 0);
  return retval;
}

void
Xyz::ArrayOfSeqOfChar_free (
    Xyz::ArrayOfSeqOfChar_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
Xyz::ArrayOfSeqOfChar_copy (
    Xyz::ArrayOfSeqOfChar_slice * _tao_to,
    const Xyz::ArrayOfSeqOfChar_slice *_tao_from)
{
  // Copy each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 6; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}

// TAO_IDL - Generated from
// be/be_visitor_array/array_cs.cpp:97

Xyz::ArrayOfSeqOfOctet_slice *
Xyz::ArrayOfSeqOfOctet_dup (const Xyz::ArrayOfSeqOfOctet_slice *_tao_src_array)
{
  Xyz::ArrayOfSeqOfOctet_slice *_tao_dup_array =
    Xyz::ArrayOfSeqOfOctet_alloc ();
  
  if (!_tao_dup_array)
    {
      return static_cast <Xyz::ArrayOfSeqOfOctet_slice *> (0);
    }
  
  Xyz::ArrayOfSeqOfOctet_copy (_tao_dup_array, _tao_src_array);
  return _tao_dup_array;
}

Xyz::ArrayOfSeqOfOctet_slice *
Xyz::ArrayOfSeqOfOctet_alloc (void)
{
  Xyz::ArrayOfSeqOfOctet_slice *retval = 0;
  ACE_NEW_RETURN (retval, Xyz::SeqOfOctet[6], 0);
  return retval;
}

void
Xyz::ArrayOfSeqOfOctet_free (
    Xyz::ArrayOfSeqOfOctet_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
Xyz::ArrayOfSeqOfOctet_copy (
    Xyz::ArrayOfSeqOfOctet_slice * _tao_to,
    const Xyz::ArrayOfSeqOfOctet_slice *_tao_from)
{
  // Copy each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 6; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}

// TAO_IDL - Generated from
// be/be_visitor_array/array_cs.cpp:97

Xyz::ArrayOfSeqOfLong_slice *
Xyz::ArrayOfSeqOfLong_dup (const Xyz::ArrayOfSeqOfLong_slice *_tao_src_array)
{
  Xyz::ArrayOfSeqOfLong_slice *_tao_dup_array =
    Xyz::ArrayOfSeqOfLong_alloc ();
  
  if (!_tao_dup_array)
    {
      return static_cast <Xyz::ArrayOfSeqOfLong_slice *> (0);
    }
  
  Xyz::ArrayOfSeqOfLong_copy (_tao_dup_array, _tao_src_array);
  return _tao_dup_array;
}

Xyz::ArrayOfSeqOfLong_slice *
Xyz::ArrayOfSeqOfLong_alloc (void)
{
  Xyz::ArrayOfSeqOfLong_slice *retval = 0;
  ACE_NEW_RETURN (retval, Xyz::SeqOfLong[6], 0);
  return retval;
}

void
Xyz::ArrayOfSeqOfLong_free (
    Xyz::ArrayOfSeqOfLong_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
Xyz::ArrayOfSeqOfLong_copy (
    Xyz::ArrayOfSeqOfLong_slice * _tao_to,
    const Xyz::ArrayOfSeqOfLong_slice *_tao_from)
{
  // Copy each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 6; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}

// TAO_IDL - Generated from
// be/be_visitor_array/array_cs.cpp:97

Xyz::ArrayOfSeqOfAnEnum_slice *
Xyz::ArrayOfSeqOfAnEnum_dup (const Xyz::ArrayOfSeqOfAnEnum_slice *_tao_src_array)
{
  Xyz::ArrayOfSeqOfAnEnum_slice *_tao_dup_array =
    Xyz::ArrayOfSeqOfAnEnum_alloc ();
  
  if (!_tao_dup_array)
    {
      return static_cast <Xyz::ArrayOfSeqOfAnEnum_slice *> (0);
    }
  
  Xyz::ArrayOfSeqOfAnEnum_copy (_tao_dup_array, _tao_src_array);
  return _tao_dup_array;
}

Xyz::ArrayOfSeqOfAnEnum_slice *
Xyz::ArrayOfSeqOfAnEnum_alloc (void)
{
  Xyz::ArrayOfSeqOfAnEnum_slice *retval = 0;
  ACE_NEW_RETURN (retval, Xyz::SeqOfAnEnum[6], 0);
  return retval;
}

void
Xyz::ArrayOfSeqOfAnEnum_free (
    Xyz::ArrayOfSeqOfAnEnum_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
Xyz::ArrayOfSeqOfAnEnum_copy (
    Xyz::ArrayOfSeqOfAnEnum_slice * _tao_to,
    const Xyz::ArrayOfSeqOfAnEnum_slice *_tao_from)
{
  // Copy each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 6; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}

// TAO_IDL - Generated from
// be/be_visitor_enum/cdr_op_cs.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, Xyz::AnEnum _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, Xyz::AnEnum & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;
  
  if (_tao_success)
    {
      _tao_enumerator = static_cast<Xyz::AnEnum> (_tao_temp);
    }
  
  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_Xyz_SeqOfBoolean_CPP_
#define _TAO_CDR_OP_Xyz_SeqOfBoolean_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Xyz::SeqOfBoolean &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Xyz::SeqOfBoolean &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Xyz_SeqOfBoolean_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_Xyz_SeqOfString_CPP_
#define _TAO_CDR_OP_Xyz_SeqOfString_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Xyz::SeqOfString &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Xyz::SeqOfString &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Xyz_SeqOfString_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_Xyz_SeqOfChar_CPP_
#define _TAO_CDR_OP_Xyz_SeqOfChar_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Xyz::SeqOfChar &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Xyz::SeqOfChar &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Xyz_SeqOfChar_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_Xyz_SeqOfOctet_CPP_
#define _TAO_CDR_OP_Xyz_SeqOfOctet_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Xyz::SeqOfOctet &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Xyz::SeqOfOctet &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Xyz_SeqOfOctet_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_Xyz_SeqOfLong_CPP_
#define _TAO_CDR_OP_Xyz_SeqOfLong_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Xyz::SeqOfLong &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Xyz::SeqOfLong &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Xyz_SeqOfLong_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_Xyz_SeqOfAnEnum_CPP_
#define _TAO_CDR_OP_Xyz_SeqOfAnEnum_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Xyz::SeqOfAnEnum &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Xyz::SeqOfAnEnum &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Xyz_SeqOfAnEnum_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_cs.cpp:166


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Xyz::ArrayOfBoolean_forany &_tao_array)
{
  return
    strm.write_boolean_array (
        reinterpret_cast <const ACE_CDR::Boolean *> (_tao_array.in ()),
        5);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Xyz::ArrayOfBoolean_forany &_tao_array)
{
  return
    strm.read_boolean_array (
        reinterpret_cast <ACE_CDR::Boolean *> (_tao_array.out ()),
        5);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_cs.cpp:166


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Xyz::ArrayOfString_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 5 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm << ACE_OutputCDR::from_string (_tao_array [i0].in (), 7));
    }

  return _tao_marshal_flag;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Xyz::ArrayOfString_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 5 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm >> ACE_InputCDR::to_string (_tao_array [i0].out (), 7));
    }

  return _tao_marshal_flag;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_cs.cpp:166


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Xyz::ArrayOfChar_forany &_tao_array)
{
  return
    strm.write_char_array (
        reinterpret_cast <const ACE_CDR::Char *> (_tao_array.in ()),
        5);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Xyz::ArrayOfChar_forany &_tao_array)
{
  return
    strm.read_char_array (
        reinterpret_cast <ACE_CDR::Char *> (_tao_array.out ()),
        5);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_cs.cpp:166


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Xyz::ArrayOfOctet_forany &_tao_array)
{
  return
    strm.write_octet_array (
        reinterpret_cast <const ACE_CDR::Octet *> (_tao_array.in ()),
        5);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Xyz::ArrayOfOctet_forany &_tao_array)
{
  return
    strm.read_octet_array (
        reinterpret_cast <ACE_CDR::Octet *> (_tao_array.out ()),
        5);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_cs.cpp:166


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Xyz::ArrayOfLong_forany &_tao_array)
{
  return
    strm.write_long_array (
        reinterpret_cast <const ACE_CDR::Long *> (_tao_array.in ()),
        5);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Xyz::ArrayOfLong_forany &_tao_array)
{
  return
    strm.read_long_array (
        reinterpret_cast <ACE_CDR::Long *> (_tao_array.out ()),
        5);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_cs.cpp:166


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Xyz::ArrayOfAnEnum_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 5 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm << _tao_array [i0]);
    }

  return _tao_marshal_flag;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Xyz::ArrayOfAnEnum_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 5 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm >> _tao_array [i0]);
    }

  return _tao_marshal_flag;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_cs.cpp:166


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Xyz::ArrayOfSeqOfBoolean_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 6 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm << _tao_array [i0]);
    }

  return _tao_marshal_flag;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Xyz::ArrayOfSeqOfBoolean_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 6 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm >> _tao_array [i0]);
    }

  return _tao_marshal_flag;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_cs.cpp:166


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Xyz::ArrayOfSeqOfString_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 6 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm << _tao_array [i0]);
    }

  return _tao_marshal_flag;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Xyz::ArrayOfSeqOfString_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 6 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm >> _tao_array [i0]);
    }

  return _tao_marshal_flag;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_cs.cpp:166


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Xyz::ArrayOfSeqOfChar_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 6 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm << _tao_array [i0]);
    }

  return _tao_marshal_flag;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Xyz::ArrayOfSeqOfChar_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 6 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm >> _tao_array [i0]);
    }

  return _tao_marshal_flag;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_cs.cpp:166


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Xyz::ArrayOfSeqOfOctet_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 6 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm << _tao_array [i0]);
    }

  return _tao_marshal_flag;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Xyz::ArrayOfSeqOfOctet_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 6 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm >> _tao_array [i0]);
    }

  return _tao_marshal_flag;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_cs.cpp:166


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Xyz::ArrayOfSeqOfLong_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 6 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm << _tao_array [i0]);
    }

  return _tao_marshal_flag;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Xyz::ArrayOfSeqOfLong_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 6 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm >> _tao_array [i0]);
    }

  return _tao_marshal_flag;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_cs.cpp:166


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Xyz::ArrayOfSeqOfAnEnum_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 6 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm << _tao_array [i0]);
    }

  return _tao_marshal_flag;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Xyz::ArrayOfSeqOfAnEnum_forany &_tao_array)
{
  CORBA::Boolean _tao_marshal_flag = true;
  
  for ( ::CORBA::ULong i0 = 0; i0 < 6 && _tao_marshal_flag; ++i0)
    {
      _tao_marshal_flag = (strm >> _tao_array [i0]);
    }

  return _tao_marshal_flag;
}

TAO_END_VERSIONED_NAMESPACE_DECL


