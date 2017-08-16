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
// be/be_codegen.cpp:152

#ifndef _TAO_IDL_SATELLITEC_O8QVX5_H_
#define _TAO_IDL_SATELLITEC_O8QVX5_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "LivelinessKeepAliveTest_export.h"
#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "tao/String_Manager_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO LivelinessKeepAliveTest_Export

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace Satellite
{

  // TAO_IDL - Generated from
  // be/be_type.cpp:261

  struct Vector;

  typedef
    ::TAO_Fixed_Var_T<
        Vector
      >
    Vector_var;

  typedef
    Vector &
    Vector_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:51

  struct LivelinessKeepAliveTest_Export Vector
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    
    typedef Vector_var _var_type;
    typedef Vector_out _out_type;
    
    ::CORBA::LongLong x;
    ::CORBA::LongLong y;
    ::CORBA::LongLong z;
  };

  // TAO_IDL - Generated from
  // be/be_type.cpp:261

  struct Telemetry;

  typedef
    ::TAO_Var_Var_T<
        Telemetry
      >
    Telemetry_var;

  typedef
    ::TAO_Out_T<
        Telemetry
      >
    Telemetry_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:51

  struct LivelinessKeepAliveTest_Export Telemetry
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    
    typedef Telemetry_var _var_type;
    typedef Telemetry_out _out_type;
    
    ::TAO::String_Manager satellite;
    ::CORBA::Long message_number;
    Satellite::Vector position;
    Satellite::Vector velocity;
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typedef/typedef_ch.cpp:407

  typedef char * ItemCode;
  typedef ::CORBA::String_var ItemCode_var;
  typedef ::CORBA::String_out ItemCode_out;

  // TAO_IDL - Generated from
  // be/be_visitor_constant/constant_ch.cpp:38

  const char *const FUEL = "Fuel";

  // TAO_IDL - Generated from
  // be/be_visitor_constant/constant_ch.cpp:38

  const char *const BATTERY = "Battery";

  // TAO_IDL - Generated from
  // be/be_visitor_constant/constant_ch.cpp:38

  const char *const SYSTEM = "System";

  // TAO_IDL - Generated from
  // be/be_visitor_typedef/typedef_ch.cpp:407

  typedef char * AlertCode;
  typedef ::CORBA::String_var AlertCode_var;
  typedef ::CORBA::String_out AlertCode_out;

  // TAO_IDL - Generated from
  // be/be_visitor_constant/constant_ch.cpp:38

  const char *const LOW = "Low";

  // TAO_IDL - Generated from
  // be/be_visitor_constant/constant_ch.cpp:38

  const char *const DEAD = "Dead";

  // TAO_IDL - Generated from
  // be/be_visitor_constant/constant_ch.cpp:38

  const char *const SYSTEM_SHUTDOWN = "System Shutdown";

  // TAO_IDL - Generated from
  // be/be_type.cpp:261

  struct Alert;

  typedef
    ::TAO_Var_Var_T<
        Alert
      >
    Alert_var;

  typedef
    ::TAO_Out_T<
        Alert
      >
    Alert_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:51

  struct LivelinessKeepAliveTest_Export Alert
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    
    typedef Alert_var _var_type;
    typedef Alert_out _out_type;
    
    ::TAO::String_Manager satellite;
    ::TAO::String_Manager item;
    ::TAO::String_Manager code;
    ::TAO::String_Manager message;
    ::CORBA::Long index;
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module Satellite

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::Satellite::Vector>
    : public
        Fixed_Size_Arg_Traits_T<
            ::Satellite::Vector,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::Satellite::Telemetry>
    : public
        Var_Size_Arg_Traits_T<
            ::Satellite::Telemetry,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::Satellite::Alert>
    : public
        Var_Size_Arg_Traits_T<
            ::Satellite::Alert,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:62

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

LivelinessKeepAliveTest_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Satellite::Vector &);
LivelinessKeepAliveTest_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Satellite::Vector &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

LivelinessKeepAliveTest_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Satellite::Telemetry &);
LivelinessKeepAliveTest_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Satellite::Telemetry &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

LivelinessKeepAliveTest_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Satellite::Alert &);
LivelinessKeepAliveTest_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Satellite::Alert &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "SatelliteC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

