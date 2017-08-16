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

#ifndef _TAO_IDL_FOODEFS_HYJXFV_H_
#define _TAO_IDL_FOODEFS_HYJXFV_H_

#include /**/ "ace/pre.h"

#include "FooDefC.h"
#include "tao/ShortSeqS.h"
#include "tao/StringSeqS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/BD_String_SArgument_T.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Fixed_Array_SArgument_T.h"
#include "tao/PortableServer/Var_Array_SArgument_T.h"

// Skeleton file generation suppressed with command line option -SS

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  template<>
  class SArg_Traits< ::Xyz::ArrayOfShorts_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::Xyz::ArrayOfShorts_var,
            ::Xyz::ArrayOfShorts_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class SArg_Traits< ::Xyz::ArrayOfShorts2_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::Xyz::ArrayOfShorts2_var,
            ::Xyz::ArrayOfShorts2_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class SArg_Traits< ::Xyz::MultiDimArray_tag>
    : public
        Var_Array_SArg_Traits_T<
            ::Xyz::MultiDimArray_out,
            ::Xyz::MultiDimArray_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::Xyz::StructOfMultiDimArray>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::StructOfMultiDimArray,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class SArg_Traits< ::Xyz::ArrayOfArrayOfShorts2_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::Xyz::ArrayOfArrayOfShorts2_var,
            ::Xyz::ArrayOfArrayOfShorts2_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::Xyz::StructOfArrayOfArrayOfShorts2>
    : public
        Fixed_Size_SArg_Traits_T<
            ::Xyz::StructOfArrayOfArrayOfShorts2,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:904

  template<>
  class SArg_Traits< ::Xyz::ColorX>
    : public
        Basic_SArg_Traits_T<
            ::Xyz::ColorX,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Xyz::UShortSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::UShortSeq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Xyz::ArrayOfShortsSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::ArrayOfShortsSeq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Xyz::ShortSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::ShortSeq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::Xyz::AStruct>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::AStruct,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class SArg_Traits< ::Xyz::ArrayOfAStruct_tag>
    : public
        Var_Array_SArg_Traits_T<
            ::Xyz::ArrayOfAStruct_out,
            ::Xyz::ArrayOfAStruct_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::Xyz::StructContainingArrayOfAStruct>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::StructContainingArrayOfAStruct,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:1058

  template<>
  class SArg_Traits< ::Xyz::AUnion>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::AUnion,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::Xyz::StructAUnion>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::StructAUnion,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Xyz::AUnionSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::AUnionSeq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Xyz::AcharSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::AcharSeq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Xyz::AStringSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::AStringSeq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Xyz::AcharSeqSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::AcharSeqSeq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Xyz::AMyCharSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::AMyCharSeq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#if !defined (_BOUNDEDSTRING100__SARG_TRAITS_)
#define _BOUNDEDSTRING100__SARG_TRAITS_

  template<>
  class SArg_Traits<BoundedString_100>
    : public
        BD_String_SArg_Traits_T<
            CORBA::String_var,
            100,
            TAO::Any_Insert_Policy_Noop
        >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Xyz::UnboundedSeqOfBoundedString>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::UnboundedSeqOfBoundedString,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Xyz::BoundedSeqOfBoundedString>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::BoundedSeqOfBoundedString,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Xyz::UnboundedSeqOfUnboundedString>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::UnboundedSeqOfUnboundedString,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::Xyz::AStructSeqX>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::AStructSeqX,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class SArg_Traits< ::Xyz::ArrayOfAStructSeq_tag>
    : public
        Var_Array_SArg_Traits_T<
            ::Xyz::ArrayOfAStructSeq_out,
            ::Xyz::ArrayOfAStructSeq_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::Xyz::StructContainingArrayOfAStructSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::StructContainingArrayOfAStructSeq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class SArg_Traits< ::Xyz::OctetArray_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::Xyz::OctetArray_var,
            ::Xyz::OctetArray_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::Xyz::Foo>
    : public
        Var_Size_SArg_Traits_T<
            ::Xyz::Foo,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:904

  template<>
  class SArg_Traits< ::Xyz::TestEnum>
    : public
        Basic_SArg_Traits_T<
            ::Xyz::TestEnum,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::Xyz::StructWithTypedefedEnum>
    : public
        Fixed_Size_SArg_Traits_T<
            ::Xyz::StructWithTypedefedEnum,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:1058

  template<>
  class SArg_Traits< ::Xyz::TestUnion>
    : public
        Fixed_Size_SArg_Traits_T<
            ::Xyz::TestUnion,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::N1::FwdDeclSameNamespaceStructs>
    : public
        Var_Size_SArg_Traits_T<
            ::N1::FwdDeclSameNamespaceStructs,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::N2::FwdDeclDiffNamespaceStructs>
    : public
        Var_Size_SArg_Traits_T<
            ::N2::FwdDeclDiffNamespaceStructs,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::N1::FwdDeclStruct>
    : public
        Fixed_Size_SArg_Traits_T<
            ::N1::FwdDeclStruct,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::N1::FwdDeclSameNamespaceAfterDefStructs>
    : public
        Var_Size_SArg_Traits_T<
            ::N1::FwdDeclSameNamespaceAfterDefStructs,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::Bar>
    : public
        Fixed_Size_SArg_Traits_T<
            ::Bar,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



#include /**/ "ace/post.h"

#endif /* ifndef */

