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

#ifndef _TAO_IDL_SERVEROBJECTC_H508SG_H_
#define _TAO_IDL_SERVEROBJECTC_H508SG_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "async_imr_client_export.h"
#include "tao/Valuetype/ValueBase.h"
#include "tao/Valuetype/Valuetype_Adapter_Factory_Impl.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/Messaging/Messaging.h"
#include "tao/Valuetype/Value_VarOut_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO Async_IMR_Client_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_root/root_ch.cpp:160

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace ImplementationRepository
{

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_IMPLEMENTATIONREPOSITORY_SERVEROBJECT__VAR_OUT_CH_)
#define _IMPLEMENTATIONREPOSITORY_SERVEROBJECT__VAR_OUT_CH_

  class AMI_ServerObjectHandler;
  typedef AMI_ServerObjectHandler *AMI_ServerObjectHandler_ptr;

  class ServerObject;
  typedef ServerObject *ServerObject_ptr;

  typedef
    TAO_Objref_Var_T<
        ServerObject
      >
    ServerObject_var;
  
  typedef
    TAO_Objref_Out_T<
        ServerObject
      >
    ServerObject_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class Async_IMR_Client_Export ServerObject
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<ServerObject>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef ServerObject_ptr _ptr_type;
    typedef ServerObject_var _var_type;
    typedef ServerObject_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static ServerObject_ptr _duplicate (ServerObject_ptr obj);

    static void _tao_release (ServerObject_ptr obj);

    static ServerObject_ptr _narrow (::CORBA::Object_ptr obj);
    static ServerObject_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static ServerObject_ptr _nil (void);

    virtual void ping (
      void);

    virtual void shutdown (
      void);

    virtual void sendc_ping (
      ::ImplementationRepository::AMI_ServerObjectHandler_ptr ami_handler);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    ServerObject (void);

    // Concrete non-local interface only.
    ServerObject (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    ServerObject (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~ServerObject (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ServerObject (const ServerObject &);

    void operator= (const ServerObject &);
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_IMPLEMENTATIONREPOSITORY_AMI_SERVEROBJECTHANDLER__VAR_OUT_CH_)
#define _IMPLEMENTATIONREPOSITORY_AMI_SERVEROBJECTHANDLER__VAR_OUT_CH_

  class AMI_ServerObjectHandler;
  typedef AMI_ServerObjectHandler *AMI_ServerObjectHandler_ptr;

  typedef
    TAO_Objref_Var_T<
        AMI_ServerObjectHandler
      >
    AMI_ServerObjectHandler_var;
  
  typedef
    TAO_Objref_Out_T<
        AMI_ServerObjectHandler
      >
    AMI_ServerObjectHandler_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class Async_IMR_Client_Export AMI_ServerObjectHandler
    : public virtual ::Messaging::ReplyHandler
  
  {
  public:
    friend class TAO::Narrow_Utils<AMI_ServerObjectHandler>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef AMI_ServerObjectHandler_ptr _ptr_type;
    typedef AMI_ServerObjectHandler_var _var_type;
    typedef AMI_ServerObjectHandler_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static AMI_ServerObjectHandler_ptr _duplicate (AMI_ServerObjectHandler_ptr obj);

    static void _tao_release (AMI_ServerObjectHandler_ptr obj);

    static AMI_ServerObjectHandler_ptr _narrow (::CORBA::Object_ptr obj);
    static AMI_ServerObjectHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static AMI_ServerObjectHandler_ptr _nil (void);

    virtual void ping (
      void);

    static void
    ping_reply_stub (
      TAO_InputCDR &_tao_reply_cdr,
      ::Messaging::ReplyHandler_ptr _tao_reply_handler,
      ::CORBA::ULong reply_status);

    virtual void ping_excep (
      ::Messaging::ExceptionHolder * excep_holder);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    AMI_ServerObjectHandler (void);

    // Concrete non-local interface only.
    AMI_ServerObjectHandler (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    AMI_ServerObjectHandler (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~AMI_ServerObjectHandler (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    AMI_ServerObjectHandler (const AMI_ServerObjectHandler &);

    void operator= (const AMI_ServerObjectHandler &);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module ImplementationRepository

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

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:147

#if !defined (_IMPLEMENTATIONREPOSITORY_SERVEROBJECT__ARG_TRAITS_)
#define _IMPLEMENTATIONREPOSITORY_SERVEROBJECT__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::ImplementationRepository::ServerObject>
    : public
        Object_Arg_Traits_T<
            ::ImplementationRepository::ServerObject_ptr,
            ::ImplementationRepository::ServerObject_var,
            ::ImplementationRepository::ServerObject_out,
            TAO::Objref_Traits<ImplementationRepository::ServerObject>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:147

#if !defined (_IMPLEMENTATIONREPOSITORY_AMI_SERVEROBJECTHANDLER__ARG_TRAITS_)
#define _IMPLEMENTATIONREPOSITORY_AMI_SERVEROBJECTHANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::ImplementationRepository::AMI_ServerObjectHandler>
    : public
        Object_Arg_Traits_T<
            ::ImplementationRepository::AMI_ServerObjectHandler_ptr,
            ::ImplementationRepository::AMI_ServerObjectHandler_var,
            ::ImplementationRepository::AMI_ServerObjectHandler_out,
            TAO::Objref_Traits<ImplementationRepository::AMI_ServerObjectHandler>,
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

namespace OBV_ImplementationRepository
{
}

// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:62


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_IMPLEMENTATIONREPOSITORY_SERVEROBJECT__TRAITS_)
#define _IMPLEMENTATIONREPOSITORY_SERVEROBJECT__TRAITS_

  template<>
  struct Async_IMR_Client_Export Objref_Traits< ::ImplementationRepository::ServerObject>
  {
    static ::ImplementationRepository::ServerObject_ptr duplicate (
        ::ImplementationRepository::ServerObject_ptr p);
    static void release (
        ::ImplementationRepository::ServerObject_ptr p);
    static ::ImplementationRepository::ServerObject_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::ImplementationRepository::ServerObject_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_IMPLEMENTATIONREPOSITORY_AMI_SERVEROBJECTHANDLER__TRAITS_)
#define _IMPLEMENTATIONREPOSITORY_AMI_SERVEROBJECTHANDLER__TRAITS_

  template<>
  struct Async_IMR_Client_Export Objref_Traits< ::ImplementationRepository::AMI_ServerObjectHandler>
  {
    static ::ImplementationRepository::AMI_ServerObjectHandler_ptr duplicate (
        ::ImplementationRepository::AMI_ServerObjectHandler_ptr p);
    static void release (
        ::ImplementationRepository::AMI_ServerObjectHandler_ptr p);
    static ::ImplementationRepository::AMI_ServerObjectHandler_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::ImplementationRepository::AMI_ServerObjectHandler_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:44


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

Async_IMR_Client_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const ImplementationRepository::ServerObject_ptr );
Async_IMR_Client_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, ImplementationRepository::ServerObject_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:44


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

Async_IMR_Client_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const ImplementationRepository::AMI_ServerObjectHandler_ptr );
Async_IMR_Client_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, ImplementationRepository::AMI_ServerObjectHandler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_codegen.cpp:1703


TAO_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "ServerObjectC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */
