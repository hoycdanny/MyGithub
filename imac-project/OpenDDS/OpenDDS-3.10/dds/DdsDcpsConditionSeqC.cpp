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

#include "DCPS/DdsDcps_pch.h"
#include "DdsDcpsConditionSeqC.h"
#include "tao/CDR.h"

#if !defined (__ACE_INLINE__)
#include "DdsDcpsConditionSeqC.inl"
#endif /* !defined INLINE */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_DDS_CONDITIONSEQ_CS_)
#define _DDS_CONDITIONSEQ_CS_

DDS::ConditionSeq::ConditionSeq (void)
{}

DDS::ConditionSeq::ConditionSeq (
    ::CORBA::ULong max)
  : ::TAO::unbounded_object_reference_sequence<
        Condition,
        Condition_var
      > (max)
{}

DDS::ConditionSeq::ConditionSeq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    DDS::Condition_ptr * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_object_reference_sequence<
        Condition,
        Condition_var
      >
    (max, length, buffer, release)
{}

DDS::ConditionSeq::ConditionSeq (
    const ConditionSeq &seq)
  : ::TAO::unbounded_object_reference_sequence<
        Condition,
        Condition_var
      > (seq)
{}

DDS::ConditionSeq::~ConditionSeq (void)
{}

#endif /* end #if !defined */


OPENDDS_END_VERSIONED_NAMESPACE_DECL


