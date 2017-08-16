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

#ifndef _TAO_IDL_FOO3DEFC_PT3NTA_H_
#define _TAO_IDL_FOO3DEFC_PT3NTA_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "foolib_export.h"
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
#define TAO_EXPORT_MACRO FooLib_Export

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace T3
{

  // TAO_IDL - Generated from
  // be/be_type.cpp:261

  struct Foo3;

  typedef
    ::TAO_Var_Var_T<
        Foo3
      >
    Foo3_var;

  typedef
    ::TAO_Out_T<
        Foo3
      >
    Foo3_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:51

  struct FooLib_Export Foo3
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    
    typedef Foo3_var _var_type;
    typedef Foo3_out _out_type;
    
    ::CORBA::Long key;
    ::CORBA::Char c;
    ::CORBA::Short s;
    ::CORBA::Long l;
    ::TAO::String_Manager text;
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module T3

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::T3::Foo3>
    : public
        Var_Size_Arg_Traits_T<
            ::T3::Foo3,
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

FooLib_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const T3::Foo3 &);
FooLib_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, T3::Foo3 &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "Foo3DefC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */
