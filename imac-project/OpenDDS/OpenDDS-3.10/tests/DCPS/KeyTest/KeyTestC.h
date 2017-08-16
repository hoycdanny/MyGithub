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

#ifndef _TAO_IDL_KEYTESTC_QJMZKD_H_
#define _TAO_IDL_KEYTESTC_QJMZKD_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "KeyTest_export.h"
#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "tao/String_Manager_T.h"
#include "tao/VarOut_T.h"
#include "tao/Array_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Basic_Argument_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include "tao/Fixed_Array_Argument_T.h"
#include "tao/Var_Array_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO KeyTest_Export

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace Messenger1
{

  // TAO_IDL - Generated from
  // be/be_type.cpp:261

  struct Message;

  typedef
    ::TAO_Var_Var_T<
        Message
      >
    Message_var;

  typedef
    ::TAO_Out_T<
        Message
      >
    Message_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:51

  struct KeyTest_Export Message
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    
    typedef Message_var _var_type;
    typedef Message_out _out_type;
    
    ::TAO::String_Manager from;
    ::TAO::String_Manager subject;
    ::CORBA::Long subject_id;
    ::TAO::String_Manager text;
    ::CORBA::Long count;
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module Messenger1

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace Messenger2
{

  // TAO_IDL - Generated from
  // be/be_type.cpp:261

  struct Message;

  typedef
    ::TAO_Var_Var_T<
        Message
      >
    Message_var;

  typedef
    ::TAO_Out_T<
        Message
      >
    Message_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:51

  struct KeyTest_Export Message
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    
    typedef Message_var _var_type;
    typedef Message_out _out_type;
    
    ::TAO::String_Manager from;
    ::TAO::String_Manager subject;
    ::CORBA::Long subject_id;
    ::TAO::String_Manager text;
    ::CORBA::Long count;
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module Messenger2

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace Messenger3
{

  // TAO_IDL - Generated from
  // be/be_type.cpp:261

  struct Message;

  typedef
    ::TAO_Var_Var_T<
        Message
      >
    Message_var;

  typedef
    ::TAO_Out_T<
        Message
      >
    Message_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:51

  struct KeyTest_Export Message
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    
    typedef Message_var _var_type;
    typedef Message_out _out_type;
    
    ::TAO::String_Manager from;
    ::TAO::String_Manager subject;
    ::CORBA::Long subject_id;
    ::TAO::String_Manager text;
    ::CORBA::Long count;
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module Messenger3

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace Messenger4
{

  // TAO_IDL - Generated from
  // be/be_visitor_enum/enum_ch.cpp:47

  enum EnumType
  {
    FIRST,
    SECOND,
    THIRD
  };

  typedef EnumType &EnumType_out;

  // TAO_IDL - Generated from
  // be/be_type.cpp:261

  struct Message;

  typedef
    ::TAO_Var_Var_T<
        Message
      >
    Message_var;

  typedef
    ::TAO_Out_T<
        Message
      >
    Message_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:51

  struct KeyTest_Export Message
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    
    typedef Message_var _var_type;
    typedef Message_out _out_type;
    
    ::CORBA::Short short_field;
    ::CORBA::UShort unsigned_short_field;
    ::CORBA::Long long_field;
    ::CORBA::ULong unsigned_long_field;
    ::CORBA::LongLong long_long_field;
    ::CORBA::ULongLong unsigned_long_long_field;
    ::CORBA::Char char_field;
    ::CORBA::WChar wchar_field;
    ::CORBA::Float float_field;
    ::CORBA::Double double_field;
    ::CORBA::LongDouble long_double_field;
    ::CORBA::Boolean boolean_field;
    ::CORBA::Octet octet_field;
    Messenger4::EnumType enum_field;
    ::TAO::String_Manager string_field;
    ::TAO::WString_Manager wstring_field;
  };

  // TAO_IDL - Generated from
  // be/be_type.cpp:261

  struct NestedMessage;

  typedef
    ::TAO_Var_Var_T<
        NestedMessage
      >
    NestedMessage_var;

  typedef
    ::TAO_Out_T<
        NestedMessage
      >
    NestedMessage_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:51

  struct KeyTest_Export NestedMessage
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    
    typedef NestedMessage_var _var_type;
    typedef NestedMessage_out _out_type;
    
    Messenger4::Message mess;
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module Messenger4

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace Messenger5
{

  // TAO_IDL - Generated from
  // be/be_visitor_array/array_ch.cpp:54

  typedef ::CORBA::Long ResponseArray[10];
  typedef ::CORBA::Long ResponseArray_slice;
  struct ResponseArray_tag {};
  

  typedef
    TAO_FixedArray_Var_T<
        ResponseArray,
        ResponseArray_slice,
        ResponseArray_tag
      >
    ResponseArray_var;

  typedef
    ResponseArray
    ResponseArray_out;

  typedef
    TAO_Array_Forany_T<
        ResponseArray,
        ResponseArray_slice,
        ResponseArray_tag
      >
    ResponseArray_forany;

  TAO_NAMESPACE_STORAGE_CLASS ResponseArray_slice *
  ResponseArray_alloc (void);

  TAO_NAMESPACE_STORAGE_CLASS void
  ResponseArray_free (
      ResponseArray_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS ResponseArray_slice *
  ResponseArray_dup (
      const ResponseArray_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS void
  ResponseArray_copy (
      ResponseArray_slice *_tao_to,
      const ResponseArray_slice *_tao_from);

  // TAO_IDL - Generated from
  // be/be_type.cpp:261

  struct HeaderType;

  typedef
    ::TAO_Var_Var_T<
        HeaderType
      >
    HeaderType_var;

  typedef
    ::TAO_Out_T<
        HeaderType
      >
    HeaderType_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:51

  struct KeyTest_Export HeaderType
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    
    typedef HeaderType_var _var_type;
    typedef HeaderType_out _out_type;
    
    ::TAO::String_Manager from;
    ::TAO::WString_Manager wsubject;
    ::CORBA::Long subject_id;
  };

  // TAO_IDL - Generated from
  // be/be_type.cpp:261

  struct Message;

  typedef
    ::TAO_Var_Var_T<
        Message
      >
    Message_var;

  typedef
    ::TAO_Out_T<
        Message
      >
    Message_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:51

  struct KeyTest_Export Message
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    
    typedef Message_var _var_type;
    typedef Message_out _out_type;
    
    Messenger5::HeaderType header;
    ::TAO::String_Manager text;
    ::CORBA::Long count;
    Messenger5::ResponseArray responses;
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module Messenger5

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace Messenger6
{

  // TAO_IDL - Generated from
  // be/be_visitor_array/array_ch.cpp:54

  typedef ::CORBA::Long ResponseArray[10];
  typedef ::CORBA::Long ResponseArray_slice;
  struct ResponseArray_tag {};
  

  typedef
    TAO_FixedArray_Var_T<
        ResponseArray,
        ResponseArray_slice,
        ResponseArray_tag
      >
    ResponseArray_var;

  typedef
    ResponseArray
    ResponseArray_out;

  typedef
    TAO_Array_Forany_T<
        ResponseArray,
        ResponseArray_slice,
        ResponseArray_tag
      >
    ResponseArray_forany;

  TAO_NAMESPACE_STORAGE_CLASS ResponseArray_slice *
  ResponseArray_alloc (void);

  TAO_NAMESPACE_STORAGE_CLASS void
  ResponseArray_free (
      ResponseArray_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS ResponseArray_slice *
  ResponseArray_dup (
      const ResponseArray_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS void
  ResponseArray_copy (
      ResponseArray_slice *_tao_to,
      const ResponseArray_slice *_tao_from);

  // TAO_IDL - Generated from
  // be/be_type.cpp:261

  struct HeaderType;

  typedef
    ::TAO_Var_Var_T<
        HeaderType
      >
    HeaderType_var;

  typedef
    ::TAO_Out_T<
        HeaderType
      >
    HeaderType_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:51

  struct KeyTest_Export HeaderType
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    
    typedef HeaderType_var _var_type;
    typedef HeaderType_out _out_type;
    
    ::TAO::String_Manager from;
    ::TAO::String_Manager subject;
    ::CORBA::Long subject_id;
  };

  // TAO_IDL - Generated from
  // be/be_type.cpp:261

  struct PayloadType;

  typedef
    ::TAO_Var_Var_T<
        PayloadType
      >
    PayloadType_var;

  typedef
    ::TAO_Out_T<
        PayloadType
      >
    PayloadType_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:51

  struct KeyTest_Export PayloadType
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    
    typedef PayloadType_var _var_type;
    typedef PayloadType_out _out_type;
    
    Messenger6::HeaderType header;
    ::TAO::String_Manager text;
    ::CORBA::Long count;
  };

  // TAO_IDL - Generated from
  // be/be_type.cpp:261

  struct Message;

  typedef
    ::TAO_Var_Var_T<
        Message
      >
    Message_var;

  typedef
    ::TAO_Out_T<
        Message
      >
    Message_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:51

  struct KeyTest_Export Message
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    
    typedef Message_var _var_type;
    typedef Message_out _out_type;
    
    Messenger6::PayloadType payload;
    Messenger6::ResponseArray responses;
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module Messenger6

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::Messenger1::Message>
    : public
        Var_Size_Arg_Traits_T<
            ::Messenger1::Message,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::Messenger2::Message>
    : public
        Var_Size_Arg_Traits_T<
            ::Messenger2::Message,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::Messenger3::Message>
    : public
        Var_Size_Arg_Traits_T<
            ::Messenger3::Message,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:904

  template<>
  class Arg_Traits< ::Messenger4::EnumType>
    : public
        Basic_Arg_Traits_T<
            ::Messenger4::EnumType,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::Messenger4::Message>
    : public
        Var_Size_Arg_Traits_T<
            ::Messenger4::Message,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::Messenger4::NestedMessage>
    : public
        Var_Size_Arg_Traits_T<
            ::Messenger4::NestedMessage,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class Arg_Traits< ::Messenger5::ResponseArray_tag>
    : public
        Fixed_Array_Arg_Traits_T<
            ::Messenger5::ResponseArray_var,
            ::Messenger5::ResponseArray_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::Messenger5::HeaderType>
    : public
        Var_Size_Arg_Traits_T<
            ::Messenger5::HeaderType,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::Messenger5::Message>
    : public
        Var_Size_Arg_Traits_T<
            ::Messenger5::Message,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class Arg_Traits< ::Messenger6::ResponseArray_tag>
    : public
        Fixed_Array_Arg_Traits_T<
            ::Messenger6::ResponseArray_var,
            ::Messenger6::ResponseArray_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::Messenger6::HeaderType>
    : public
        Var_Size_Arg_Traits_T<
            ::Messenger6::HeaderType,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::Messenger6::PayloadType>
    : public
        Var_Size_Arg_Traits_T<
            ::Messenger6::PayloadType,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::Messenger6::Message>
    : public
        Var_Size_Arg_Traits_T<
            ::Messenger6::Message,
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
  template<>
  struct KeyTest_Export Array_Traits<
      Messenger5::ResponseArray_forany
    >
  {
    static void free (
        Messenger5::ResponseArray_slice * _tao_slice);
    static Messenger5::ResponseArray_slice * dup (
        const Messenger5::ResponseArray_slice * _tao_slice);
    static void copy (
        Messenger5::ResponseArray_slice * _tao_to,
        const Messenger5::ResponseArray_slice * _tao_from);
    static Messenger5::ResponseArray_slice * alloc (void);
    static void zero (
        Messenger5::ResponseArray_slice * _tao_slice);
  };
  template<>
  struct KeyTest_Export Array_Traits<
      Messenger6::ResponseArray_forany
    >
  {
    static void free (
        Messenger6::ResponseArray_slice * _tao_slice);
    static Messenger6::ResponseArray_slice * dup (
        const Messenger6::ResponseArray_slice * _tao_slice);
    static void copy (
        Messenger6::ResponseArray_slice * _tao_to,
        const Messenger6::ResponseArray_slice * _tao_from);
    static Messenger6::ResponseArray_slice * alloc (void);
    static void zero (
        Messenger6::ResponseArray_slice * _tao_slice);
  };
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

KeyTest_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Messenger1::Message &);
KeyTest_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Messenger1::Message &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

KeyTest_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Messenger2::Message &);
KeyTest_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Messenger2::Message &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

KeyTest_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Messenger3::Message &);
KeyTest_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Messenger3::Message &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_enum/cdr_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

KeyTest_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &strm, Messenger4::EnumType _tao_enumerator);
KeyTest_Export ::CORBA::Boolean operator>> (TAO_InputCDR &strm, Messenger4::EnumType &_tao_enumerator);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

KeyTest_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Messenger4::Message &);
KeyTest_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Messenger4::Message &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

KeyTest_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Messenger4::NestedMessage &);
KeyTest_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Messenger4::NestedMessage &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_ch.cpp:102


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

KeyTest_Export CORBA::Boolean operator<< (TAO_OutputCDR &strm, const Messenger5::ResponseArray_forany &_tao_array);
KeyTest_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Messenger5::ResponseArray_forany &_tao_array);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

KeyTest_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Messenger5::HeaderType &);
KeyTest_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Messenger5::HeaderType &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

KeyTest_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Messenger5::Message &);
KeyTest_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Messenger5::Message &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_ch.cpp:102


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

KeyTest_Export CORBA::Boolean operator<< (TAO_OutputCDR &strm, const Messenger6::ResponseArray_forany &_tao_array);
KeyTest_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Messenger6::ResponseArray_forany &_tao_array);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

KeyTest_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Messenger6::HeaderType &);
KeyTest_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Messenger6::HeaderType &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

KeyTest_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Messenger6::PayloadType &);
KeyTest_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Messenger6::PayloadType &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

KeyTest_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Messenger6::Message &);
KeyTest_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Messenger6::Message &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "KeyTestC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */
