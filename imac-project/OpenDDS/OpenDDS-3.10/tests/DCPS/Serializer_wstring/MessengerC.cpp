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
#include "tao/CDR.h"

#if !defined (__ACE_INLINE__)
#include "MessengerC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_MESSENGER_BOUNDEDCHARSEQ_CS_)
#define _MESSENGER_BOUNDEDCHARSEQ_CS_

Messenger::BoundedCharSeq::BoundedCharSeq (void)
{}

Messenger::BoundedCharSeq::BoundedCharSeq (
    ::CORBA::ULong length,
    ::CORBA::Char * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::bounded_value_sequence<
        ::CORBA::Char,
        15
      >
    (length, buffer, release)
{}

Messenger::BoundedCharSeq::BoundedCharSeq (
    const BoundedCharSeq &seq)
  : ::TAO::bounded_value_sequence<
        ::CORBA::Char,
        15
      > (seq)
{}

Messenger::BoundedCharSeq::~BoundedCharSeq (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_MESSENGER_BOUNDEDWCHARSEQ_CS_)
#define _MESSENGER_BOUNDEDWCHARSEQ_CS_

Messenger::BoundedWCharSeq::BoundedWCharSeq (void)
{}

Messenger::BoundedWCharSeq::BoundedWCharSeq (
    ::CORBA::ULong length,
    ::CORBA::WChar * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::bounded_value_sequence<
        ::CORBA::WChar,
        15
      >
    (length, buffer, release)
{}

Messenger::BoundedWCharSeq::BoundedWCharSeq (
    const BoundedWCharSeq &seq)
  : ::TAO::bounded_value_sequence<
        ::CORBA::WChar,
        15
      > (seq)
{}

Messenger::BoundedWCharSeq::~BoundedWCharSeq (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_Messenger_BoundedCharSeq_CPP_
#define _TAO_CDR_OP_Messenger_BoundedCharSeq_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Messenger::BoundedCharSeq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Messenger::BoundedCharSeq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Messenger_BoundedCharSeq_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_Messenger_BoundedWCharSeq_CPP_
#define _TAO_CDR_OP_Messenger_BoundedWCharSeq_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Messenger::BoundedWCharSeq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Messenger::BoundedWCharSeq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Messenger_BoundedWCharSeq_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Messenger::Message &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.subject_id) &&
    (strm << _tao_aggregate.count) &&
    (strm << ::ACE_OutputCDR::from_char (_tao_aggregate.ch)) &&
    (strm << ::ACE_OutputCDR::from_wchar (_tao_aggregate.wch)) &&
    (strm << _tao_aggregate.str.in ()) &&
    (strm << _tao_aggregate.wstr.in ()) &&
    (strm << _tao_aggregate.char_seq) &&
    (strm << _tao_aggregate.wchar_seq) &&
    (strm << _tao_aggregate.string_seq) &&
    (strm << _tao_aggregate.wstring_seq) &&
    (strm << _tao_aggregate.bounded_char_seq) &&
    (strm << _tao_aggregate.bounded_wchar_seq);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Messenger::Message &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.subject_id) &&
    (strm >> _tao_aggregate.count) &&
    (strm >> ::ACE_InputCDR::to_char (_tao_aggregate.ch)) &&
    (strm >> ::ACE_InputCDR::to_wchar (_tao_aggregate.wch)) &&
    (strm >> _tao_aggregate.str.out ()) &&
    (strm >> _tao_aggregate.wstr.out ()) &&
    (strm >> _tao_aggregate.char_seq) &&
    (strm >> _tao_aggregate.wchar_seq) &&
    (strm >> _tao_aggregate.string_seq) &&
    (strm >> _tao_aggregate.wstring_seq) &&
    (strm >> _tao_aggregate.bounded_char_seq) &&
    (strm >> _tao_aggregate.bounded_wchar_seq);
}

TAO_END_VERSIONED_NAMESPACE_DECL



