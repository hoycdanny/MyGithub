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
// be/be_codegen.cpp:461

#ifndef _TAO_IDL_FOODEF3S_14GE7K_H_
#define _TAO_IDL_FOODEF3S_14GE7K_H_

#include /**/ "ace/pre.h"

#include "FooDef3C.h"
#include "SharedTypesS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/UB_String_SArguments.h"

// Skeleton file generation suppressed with command line option -SS

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Xyz::SeqOfBoolean2>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::SeqOfBoolean2,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Xyz::SeqOfString2>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::SeqOfString2,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Xyz::SeqOfChar2>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::SeqOfChar2,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Xyz::SeqOfOctet2>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::SeqOfOctet2,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Xyz::SeqOfLong2>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::SeqOfLong2,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Xyz::SeqOfAnEnum2>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::SeqOfAnEnum2,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::Xyz::SimpleStruct>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::SimpleStruct,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::Xyz::StructOfArrayOfSeqOfBoolean>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::StructOfArrayOfSeqOfBoolean,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::Xyz::StructOfArrayOfSeqOfString>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::StructOfArrayOfSeqOfString,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::Xyz::StructOfArrayOfSeqOfChar>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::StructOfArrayOfSeqOfChar,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::Xyz::StructOfArrayOfSeqOfOctet>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::StructOfArrayOfSeqOfOctet,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::Xyz::StructOfArrayOfSeqOfLong>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::StructOfArrayOfSeqOfLong,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::Xyz::StructOfArrayOfSeqOfAnEnum>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::StructOfArrayOfSeqOfAnEnum,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



#include /**/ "ace/post.h"

#endif /* ifndef */
