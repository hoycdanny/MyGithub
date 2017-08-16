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

#ifndef _TAO_PIDL_TAO_EXTC_IC8OIG_H_
#define _TAO_PIDL_TAO_EXTC_IC8OIG_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/Messaging/messaging_export.h"
#include "tao/Basic_Types.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "tao/PolicyC.h"
#include "tao/TimeBaseC.h"

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

namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_constant/constant_ch.cpp:38

  const CORBA::ULong CONNECTION_TIMEOUT_POLICY_TYPE = 1413545992U;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_TAO_CONNECTIONTIMEOUTPOLICY__VAR_OUT_CH_)
#define _TAO_CONNECTIONTIMEOUTPOLICY__VAR_OUT_CH_

  class ConnectionTimeoutPolicy;
  typedef ConnectionTimeoutPolicy *ConnectionTimeoutPolicy_ptr;

  typedef
    TAO_Objref_Var_T<
        ConnectionTimeoutPolicy
      >
    ConnectionTimeoutPolicy_var;
  
  typedef
    TAO_Objref_Out_T<
        ConnectionTimeoutPolicy
      >
    ConnectionTimeoutPolicy_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class TAO_Messaging_Export ConnectionTimeoutPolicy
    : public virtual ::CORBA::Policy
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef ConnectionTimeoutPolicy_ptr _ptr_type;
    typedef ConnectionTimeoutPolicy_var _var_type;
    typedef ConnectionTimeoutPolicy_out _out_type;

    // The static operations.
    static ConnectionTimeoutPolicy_ptr _duplicate (ConnectionTimeoutPolicy_ptr obj);

    static void _tao_release (ConnectionTimeoutPolicy_ptr obj);

    static ConnectionTimeoutPolicy_ptr _narrow (::CORBA::Object_ptr obj);
    static ConnectionTimeoutPolicy_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static ConnectionTimeoutPolicy_ptr _nil (void);

    virtual ::TimeBase::TimeT relative_expiry (
      void) = 0;

    virtual ::CORBA::Policy_ptr copy (
      void) = 0;

    virtual void destroy (
      void) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    ConnectionTimeoutPolicy (void);

    

    virtual ~ConnectionTimeoutPolicy (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ConnectionTimeoutPolicy (const ConnectionTimeoutPolicy &);

    void operator= (const ConnectionTimeoutPolicy &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typedef/typedef_ch.cpp:373

  typedef ::CORBA::UShort BufferingConstraintMode;
  typedef ::CORBA::UShort_out BufferingConstraintMode_out;

  // TAO_IDL - Generated from
  // be/be_visitor_constant/constant_ch.cpp:38

  const CORBA::UShort BUFFER_FLUSH = 0U;

  // TAO_IDL - Generated from
  // be/be_visitor_constant/constant_ch.cpp:38

  const CORBA::UShort BUFFER_TIMEOUT = 1U;

  // TAO_IDL - Generated from
  // be/be_visitor_constant/constant_ch.cpp:38

  const CORBA::UShort BUFFER_MESSAGE_COUNT = 2U;

  // TAO_IDL - Generated from
  // be/be_visitor_constant/constant_ch.cpp:38

  const CORBA::UShort BUFFER_MESSAGE_BYTES = 4U;

  // TAO_IDL - Generated from
  // be/be_type.cpp:261

  struct BufferingConstraint;

  typedef
    ::TAO_Fixed_Var_T<
        BufferingConstraint
      >
    BufferingConstraint_var;

  typedef
    BufferingConstraint &
    BufferingConstraint_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:51

  struct TAO_Messaging_Export BufferingConstraint
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    
    typedef BufferingConstraint_var _var_type;
    typedef BufferingConstraint_out _out_type;

    static void _tao_any_destructor (void *);
    
    TAO::BufferingConstraintMode mode;
    TimeBase::TimeT timeout;
    ::CORBA::ULong message_count;
    ::CORBA::ULong message_bytes;
  };

  // TAO_IDL - Generated from
  // be/be_visitor_constant/constant_ch.cpp:38

  const CORBA::ULong BUFFERING_CONSTRAINT_POLICY_TYPE = 1413545985U;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_TAO_BUFFERINGCONSTRAINTPOLICY__VAR_OUT_CH_)
#define _TAO_BUFFERINGCONSTRAINTPOLICY__VAR_OUT_CH_

  class BufferingConstraintPolicy;
  typedef BufferingConstraintPolicy *BufferingConstraintPolicy_ptr;

  typedef
    TAO_Objref_Var_T<
        BufferingConstraintPolicy
      >
    BufferingConstraintPolicy_var;
  
  typedef
    TAO_Objref_Out_T<
        BufferingConstraintPolicy
      >
    BufferingConstraintPolicy_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class TAO_Messaging_Export BufferingConstraintPolicy
    : public virtual ::CORBA::Policy
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef BufferingConstraintPolicy_ptr _ptr_type;
    typedef BufferingConstraintPolicy_var _var_type;
    typedef BufferingConstraintPolicy_out _out_type;

    // The static operations.
    static BufferingConstraintPolicy_ptr _duplicate (BufferingConstraintPolicy_ptr obj);

    static void _tao_release (BufferingConstraintPolicy_ptr obj);

    static BufferingConstraintPolicy_ptr _narrow (::CORBA::Object_ptr obj);
    static BufferingConstraintPolicy_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static BufferingConstraintPolicy_ptr _nil (void);

    virtual ::TAO::BufferingConstraint buffering_constraint (
      void) = 0;

    virtual ::CORBA::Policy_ptr copy (
      void) = 0;

    virtual void destroy (
      void) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    BufferingConstraintPolicy (void);

    

    virtual ~BufferingConstraintPolicy (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    BufferingConstraintPolicy (const BufferingConstraintPolicy &);

    void operator= (const BufferingConstraintPolicy &);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module TAO

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::TAO::BufferingConstraint>
    : public
        Fixed_Size_Arg_Traits_T<
            ::TAO::BufferingConstraint,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:62


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_TAO_CONNECTIONTIMEOUTPOLICY__TRAITS_)
#define _TAO_CONNECTIONTIMEOUTPOLICY__TRAITS_

  template<>
  struct TAO_Messaging_Export Objref_Traits< ::TAO::ConnectionTimeoutPolicy>
  {
    static ::TAO::ConnectionTimeoutPolicy_ptr duplicate (
        ::TAO::ConnectionTimeoutPolicy_ptr p);
    static void release (
        ::TAO::ConnectionTimeoutPolicy_ptr p);
    static ::TAO::ConnectionTimeoutPolicy_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::TAO::ConnectionTimeoutPolicy_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_TAO_BUFFERINGCONSTRAINTPOLICY__TRAITS_)
#define _TAO_BUFFERINGCONSTRAINTPOLICY__TRAITS_

  template<>
  struct TAO_Messaging_Export Objref_Traits< ::TAO::BufferingConstraintPolicy>
  {
    static ::TAO::BufferingConstraintPolicy_ptr duplicate (
        ::TAO::BufferingConstraintPolicy_ptr p);
    static void release (
        ::TAO::BufferingConstraintPolicy_ptr p);
    static ::TAO::BufferingConstraintPolicy_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::TAO::BufferingConstraintPolicy_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:46



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Messaging_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const TAO::BufferingConstraint &);
TAO_Messaging_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, TAO::BufferingConstraint &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_codegen.cpp:1703


TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */

