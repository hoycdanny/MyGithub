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

#ifndef _TAO_PIDL_EXCEPTIONHOLDERC_INIOYF_H_
#define _TAO_PIDL_EXCEPTIONHOLDERC_INIOYF_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/Messaging/messaging_export.h"
#include "tao/Valuetype/ValueBase.h"
#include "tao/Valuetype/Valuetype_Adapter_Factory_Impl.h"
#include "tao/SystemException.h"
#include "tao/UserException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/Valuetype/Value_VarOut_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "tao/OctetSeqC.h"
#include "tao/AnyTypeCode/DynamicC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Messaging_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace Messaging
{

  // TAO_IDL - Generated from
  // be/be_visitor_native/native_ch.cpp:46

  

  // TAO_IDL - Generated from
  // be/be_valuetype.cpp:567

  

#if !defined (_MESSAGING_EXCEPTIONHOLDER__VAR_OUT_CH_)
#define _MESSAGING_EXCEPTIONHOLDER__VAR_OUT_CH_

  class ExceptionHolder;
  typedef
    TAO_Value_Var_T<
        ExceptionHolder
      >
    ExceptionHolder_var;
  
  typedef
    TAO_Value_Out_T<
        ExceptionHolder
      >
    ExceptionHolder_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/valuetype_ch.cpp:53

  class TAO_Messaging_Export ExceptionHolder
    : public virtual ::CORBA::ValueBase
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef ExceptionHolder * _ptr_type;
    typedef ExceptionHolder_var _var_type;
    typedef ExceptionHolder_out _out_type;

    static void _tao_any_destructor (void *);

    static ExceptionHolder* _downcast ( ::CORBA::ValueBase *v);
    
    /// TAO extensions or internals
    static ::CORBA::Boolean _tao_unmarshal (
        TAO_InputCDR &strm,
        ExceptionHolder *&new_object);
    
    virtual const char* _tao_obv_repository_id (void) const;

    virtual void _tao_obv_truncatable_repo_ids (Repository_Id_List &) const;

    static const char* _tao_obv_static_repository_id (void);

    virtual ::CORBA::TypeCode_ptr _tao_type (void) const;
  
  public:

    // TAO_IDL - Generated from
    // be/be_visitor_valuetype/valuetype_ch.cpp:399
    
  public:
    virtual void raise_exception (void) = 0;

public:

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/valuetype_ch.cpp:399
  
public:
  virtual void raise_exception_with_list (
      const ::Dynamic::ExceptionList &
    ) = 0;

protected:

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/field_ch.cpp:462

  virtual void is_system_exception (const ::CORBA::Boolean) = 0;
  virtual ::CORBA::Boolean is_system_exception (void) const = 0;

protected:

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/field_ch.cpp:462

  virtual void byte_order (const ::CORBA::Boolean) = 0;
  virtual ::CORBA::Boolean byte_order (void) const = 0;

protected:

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/field_ch.cpp:536

  virtual void marshaled_exception (const CORBA::OctetSeq &) = 0;
  virtual const CORBA::OctetSeq &marshaled_exception (void) const = 0;
  virtual CORBA::OctetSeq &marshaled_exception (void) = 0;

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/valuetype_ch.cpp:241

protected:
  ExceptionHolder (void);
  virtual ~ExceptionHolder (void);

  virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
  virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
  virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t ) const;
  
private:
  ExceptionHolder (const ExceptionHolder &);
  void operator= (const ExceptionHolder &);
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__Messaging_ExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const = 0;

  virtual ::CORBA::Boolean
  _tao_unmarshal__Messaging_ExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &) = 0;
};

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module Messaging

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:308

#if !defined (_MESSAGING_EXCEPTIONHOLDER__ARG_TRAITS_)
#define _MESSAGING_EXCEPTIONHOLDER__ARG_TRAITS_

  template<>
  class Arg_Traits< ::Messaging::ExceptionHolder>
    : public
        Object_Arg_Traits_T<
            ::Messaging::ExceptionHolder *,
            ::Messaging::ExceptionHolder_var,
            ::Messaging::ExceptionHolder_out,
            TAO::Value_Traits<Messaging::ExceptionHolder>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_valuetype/obv_module.cpp:47

namespace OBV_Messaging
{

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/valuetype_obv_ch.cpp:47

  // OBV_ class
  class TAO_Messaging_Export ExceptionHolder
    : public virtual Messaging::ExceptionHolder
  {

protected:

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/field_ch.cpp:462

  virtual void is_system_exception (const ::CORBA::Boolean);
  virtual ::CORBA::Boolean is_system_exception (void) const;

protected:

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/field_ch.cpp:462

  virtual void byte_order (const ::CORBA::Boolean);
  virtual ::CORBA::Boolean byte_order (void) const;

protected:

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/field_ch.cpp:536

  virtual void marshaled_exception (const CORBA::OctetSeq &);
  virtual const CORBA::OctetSeq &marshaled_exception (void) const;
  virtual CORBA::OctetSeq &marshaled_exception (void);

protected:
  ExceptionHolder (void);
  ExceptionHolder (
      ::CORBA::Boolean _tao_init_is_system_exception,
      ::CORBA::Boolean _tao_init_byte_order,
      const ::CORBA::OctetSeq & _tao_init_marshaled_exception
    );
  virtual ~ExceptionHolder (void);
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__Messaging_ExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__Messaging_ExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);

  ::CORBA::Boolean _tao_marshal_state (TAO_OutputCDR &, TAO_ChunkInfo &) const;
  ::CORBA::Boolean _tao_unmarshal_state (TAO_InputCDR &, TAO_ChunkInfo &);
  virtual void truncation_hook (void);

private:
  ::CORBA::Boolean _pd_is_system_exception;
  ::CORBA::Boolean _pd_byte_order;
  CORBA::OctetSeq _pd_marshaled_exception;
  CORBA::Boolean require_truncation_;
};
}

// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:62


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_MESSAGING_EXCEPTIONHOLDER__TRAITS_)
#define _MESSAGING_EXCEPTIONHOLDER__TRAITS_

  template<>
  struct TAO_Messaging_Export Value_Traits<Messaging::ExceptionHolder>
  {
    static void add_ref (Messaging::ExceptionHolder *);
    static void remove_ref (Messaging::ExceptionHolder *);
    static void release (Messaging::ExceptionHolder *);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_valuetype.cpp:459



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  extern TAO_Messaging_Export void add_ref (Messaging::ExceptionHolder *);
  extern TAO_Messaging_Export void remove_ref (Messaging::ExceptionHolder *);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_valuetype/cdr_op_ch.cpp:52



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Messaging_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Messaging::ExceptionHolder *);
TAO_Messaging_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Messaging::ExceptionHolder *&);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_codegen.cpp:1703


TAO_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "ExceptionHolderC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

