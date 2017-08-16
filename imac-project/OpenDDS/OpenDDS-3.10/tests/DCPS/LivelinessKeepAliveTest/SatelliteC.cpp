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


#include "SatelliteC.h"
#include "tao/CDR.h"

#if !defined (__ACE_INLINE__)
#include "SatelliteC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Satellite::Vector &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.x) &&
    (strm << _tao_aggregate.y) &&
    (strm << _tao_aggregate.z);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Satellite::Vector &_tao_aggregate)
{
  return
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
    const Satellite::Telemetry &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.satellite.in ()) &&
    (strm << _tao_aggregate.message_number) &&
    (strm << _tao_aggregate.position) &&
    (strm << _tao_aggregate.velocity);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Satellite::Telemetry &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.satellite.out ()) &&
    (strm >> _tao_aggregate.message_number) &&
    (strm >> _tao_aggregate.position) &&
    (strm >> _tao_aggregate.velocity);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Satellite::Alert &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.satellite.in ()) &&
    (strm << _tao_aggregate.item.in ()) &&
    (strm << _tao_aggregate.code.in ()) &&
    (strm << _tao_aggregate.message.in ()) &&
    (strm << _tao_aggregate.index);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Satellite::Alert &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.satellite.out ()) &&
    (strm >> _tao_aggregate.item.out ()) &&
    (strm >> _tao_aggregate.code.out ()) &&
    (strm >> _tao_aggregate.message.out ()) &&
    (strm >> _tao_aggregate.index);
}

TAO_END_VERSIONED_NAMESPACE_DECL


