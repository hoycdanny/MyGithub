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
#include "tao/ORB_Core.h"

#if !defined (__ACE_INLINE__)
#include "MessengerC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_MESSENGER_OCTETSEQ_CS_)
#define _MESSENGER_OCTETSEQ_CS_

Messenger::OctetSeq::OctetSeq (void)
{}

Messenger::OctetSeq::OctetSeq (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Octet
      > (max)
{}

Messenger::OctetSeq::OctetSeq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::Octet * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Octet
      >
    (max, length, buffer, release)
{}

Messenger::OctetSeq::OctetSeq (
    const OctetSeq &seq)
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Octet
      > (seq)
{}

Messenger::OctetSeq::~OctetSeq (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_Messenger_OctetSeq_CPP_
#define _TAO_CDR_OP_Messenger_OctetSeq_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Messenger::OctetSeq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Messenger::OctetSeq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Messenger_OctetSeq_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Messenger::Message &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.process_id.in ()) &&
    (strm << _tao_aggregate.from.in ()) &&
    (strm << _tao_aggregate.participant_id) &&
    (strm << _tao_aggregate.writer_id) &&
    (strm << _tao_aggregate.text.in ()) &&
    (strm << _tao_aggregate.sample_id) &&
    (strm << _tao_aggregate.data);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Messenger::Message &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.process_id.out ()) &&
    (strm >> _tao_aggregate.from.out ()) &&
    (strm >> _tao_aggregate.participant_id) &&
    (strm >> _tao_aggregate.writer_id) &&
    (strm >> _tao_aggregate.text.out ()) &&
    (strm >> _tao_aggregate.sample_id) &&
    (strm >> _tao_aggregate.data);
}

TAO_END_VERSIONED_NAMESPACE_DECL



