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


#include "MultiTopicTestC.h"
#include "tao/CDR.h"

#if !defined (__ACE_INLINE__)
#include "MultiTopicTestC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const LocationInfo &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.flight_id1) &&
    (strm << _tao_aggregate.flight_id2) &&
    (strm << _tao_aggregate.x) &&
    (strm << _tao_aggregate.y) &&
    (strm << _tao_aggregate.z);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    LocationInfo &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.flight_id1) &&
    (strm >> _tao_aggregate.flight_id2) &&
    (strm >> _tao_aggregate.x) &&
    (strm >> _tao_aggregate.y) &&
    (strm >> _tao_aggregate.z);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const PlanInfo &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.flight_id1) &&
    (strm << _tao_aggregate.flight_id2) &&
    (strm << _tao_aggregate.flight_name.in ()) &&
    (strm << _tao_aggregate.tailno.in ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    PlanInfo &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.flight_id1) &&
    (strm >> _tao_aggregate.flight_id2) &&
    (strm >> _tao_aggregate.flight_name.out ()) &&
    (strm >> _tao_aggregate.tailno.out ());
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const MoreInfo &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.flight_id1) &&
    (strm << _tao_aggregate.more.in ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    MoreInfo &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.flight_id1) &&
    (strm >> _tao_aggregate.more.out ());
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const UnrelatedInfo &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.misc.in ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    UnrelatedInfo &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.misc.out ());
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Resulting &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.flight_id1) &&
    (strm << _tao_aggregate.flight_id2) &&
    (strm << _tao_aggregate.flight_name.in ()) &&
    (strm << _tao_aggregate.x) &&
    (strm << _tao_aggregate.y) &&
    (strm << _tao_aggregate.height) &&
    (strm << _tao_aggregate.more.in ()) &&
    (strm << _tao_aggregate.misc.in ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Resulting &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.flight_id1) &&
    (strm >> _tao_aggregate.flight_id2) &&
    (strm >> _tao_aggregate.flight_name.out ()) &&
    (strm >> _tao_aggregate.x) &&
    (strm >> _tao_aggregate.y) &&
    (strm >> _tao_aggregate.height) &&
    (strm >> _tao_aggregate.more.out ()) &&
    (strm >> _tao_aggregate.misc.out ());
}

TAO_END_VERSIONED_NAMESPACE_DECL



