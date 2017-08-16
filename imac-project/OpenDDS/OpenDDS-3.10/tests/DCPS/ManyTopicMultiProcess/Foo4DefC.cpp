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


#include "Foo4DefC.h"
#include "tao/CDR.h"

#if !defined (__ACE_INLINE__)
#include "Foo4DefC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_T4_FLOATSEQ_CS_)
#define _T4_FLOATSEQ_CS_

T4::FloatSeq::FloatSeq (void)
{}

T4::FloatSeq::FloatSeq (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Float
      > (max)
{}

T4::FloatSeq::FloatSeq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::Float * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Float
      >
    (max, length, buffer, release)
{}

T4::FloatSeq::FloatSeq (
    const FloatSeq &seq)
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Float
      > (seq)
{}

T4::FloatSeq::~FloatSeq (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_T4_FloatSeq_CPP_
#define _TAO_CDR_OP_T4_FloatSeq_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const T4::FloatSeq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    T4::FloatSeq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_T4_FloatSeq_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const T4::Foo4 &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.key) &&
    (strm << _tao_aggregate.values);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    T4::Foo4 &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.key) &&
    (strm >> _tao_aggregate.values);
}

TAO_END_VERSIONED_NAMESPACE_DECL


