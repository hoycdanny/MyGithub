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

#ifndef _TAO_IDL_MESSENGER2C_XOBW7G_H_
#define _TAO_IDL_MESSENGER2C_XOBW7G_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "CorbaSeq_export.h"
#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "tao/String_Manager_T.h"
#include "tao/Sequence_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
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

#include "tao/BooleanSeqC.h"
#include "tao/LongDoubleSeqC.h"
#include "tao/ShortSeqC.h"
#include "tao/UShortSeqC.h"
#include "tao/CharSeqC.h"
#include "tao/LongLongSeqC.h"
#include "tao/StringSeqC.h"
#include "tao/WCharSeqC.h"
#include "tao/DoubleSeqC.h"
#include "tao/LongSeqC.h"
#include "tao/ULongLongSeqC.h"
#include "tao/WStringSeqC.h"
#include "tao/FloatSeqC.h"
#include "tao/OctetSeqC.h"
#include "tao/ULongSeqC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO CorbaSeq_Export

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace Messenger2
{

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:102

#if !defined (_MESSENGER2_LONGSEQ_CH_)
#define _MESSENGER2_LONGSEQ_CH_

  class LongSeq;

  typedef
    ::TAO_FixedSeq_Var_T<
        LongSeq
      >
    LongSeq_var;

  typedef
    ::TAO_Seq_Out_T<
        LongSeq
      >
    LongSeq_out;

  class CorbaSeq_Export LongSeq
    : public
        ::TAO::unbounded_value_sequence<
            ::CORBA::Long
          >
  {
  public:
    LongSeq (void);
    LongSeq ( ::CORBA::ULong max);
    LongSeq (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::Long* buffer,
      ::CORBA::Boolean release = false);
    LongSeq (const LongSeq &);
    virtual ~LongSeq (void);
    

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    
    typedef LongSeq_var _var_type;
    typedef LongSeq_out _out_type;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_type.cpp:261

  struct Message2;

  typedef
    ::TAO_Var_Var_T<
        Message2
      >
    Message2_var;

  typedef
    ::TAO_Out_T<
        Message2
      >
    Message2_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:51

  struct CorbaSeq_Export Message2
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    
    typedef Message2_var _var_type;
    typedef Message2_out _out_type;
    
    ::TAO::String_Manager from;
    ::TAO::String_Manager subject;
    ::CORBA::Long subject_id;
    ::TAO::String_Manager text;
    ::CORBA::Long count;
    CORBA::BooleanSeq bool_seq;
    CORBA::LongDoubleSeq longdouble_seq;
    CORBA::ShortSeq short_seq;
    CORBA::UShortSeq ushort_seq;
    CORBA::CharSeq char_seq;
    CORBA::LongLongSeq longlong_seq;
    CORBA::StringSeq string_seq;
    CORBA::WCharSeq wchar_seq;
    CORBA::DoubleSeq double_seq;
    CORBA::LongSeq long_seq;
    CORBA::ULongLongSeq ulonglong_seq;
    CORBA::WStringSeq wstring_seq;
    CORBA::FloatSeq float_seq;
    CORBA::OctetSeq octet_seq;
    CORBA::ULongSeq ulong_seq;
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module Messenger2

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class Arg_Traits< ::Messenger2::LongSeq>
    : public
        Var_Size_Arg_Traits_T<
            ::Messenger2::LongSeq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::Messenger2::Message2>
    : public
        Var_Size_Arg_Traits_T<
            ::Messenger2::Message2,
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
// be/be_visitor_sequence/cdr_op_ch.cpp:68

#if !defined _TAO_CDR_OP_Messenger2_LongSeq_H_
#define _TAO_CDR_OP_Messenger2_LongSeq_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


CorbaSeq_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Messenger2::LongSeq &_tao_sequence);
CorbaSeq_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Messenger2::LongSeq &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Messenger2_LongSeq_H_ */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

CorbaSeq_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Messenger2::Message2 &);
CorbaSeq_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Messenger2::Message2 &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "Messenger2C.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */
