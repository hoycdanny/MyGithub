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

#ifndef _TAO_IDL_INFOC_CMTBAU_H_
#define _TAO_IDL_INFOC_CMTBAU_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "InfoRepoDiscovery_Export.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/UserException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "dds/DCPS/ZeroCopyInfoSeq_T.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"
#include /**/ "dds/Versioned_Namespace.h"

#include "dds/DdsDcpsInfoUtilsC.h"
#include "dds/DdsDcpsPublicationC.h"
#include "dds/DdsDcpsSubscriptionC.h"
#include "dds/DCPS/InfoRepoDiscovery/DataWriterRemoteC.h"
#include "dds/DCPS/InfoRepoDiscovery/DataReaderRemoteC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO OpenDDS_InfoRepoDiscovery_Export

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_root/root_ch.cpp:160

OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace OpenDDS
{

  // TAO_IDL - Generated from
  // be/be_visitor_module/module_ch.cpp:38

  namespace DCPS
  {

    // TAO_IDL - Generated from
    // be/be_visitor_exception/exception_ch.cpp:44

    class OpenDDS_InfoRepoDiscovery_Export Invalid_Domain : public ::CORBA::UserException
    {
    public:

      Invalid_Domain (void);
      Invalid_Domain (const Invalid_Domain &);
      ~Invalid_Domain (void);

      Invalid_Domain &operator= (const Invalid_Domain &);

      static Invalid_Domain *_downcast ( ::CORBA::Exception *);
      static const Invalid_Domain *_downcast ( ::CORBA::Exception const *);

      static ::CORBA::Exception *_alloc (void);

      virtual ::CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void) const;

      virtual void _tao_encode (TAO_OutputCDR &cdr) const;
      virtual void _tao_decode (TAO_InputCDR &cdr);
    };

    // TAO_IDL - Generated from
    // be/be_visitor_exception/exception_ch.cpp:44

    class OpenDDS_InfoRepoDiscovery_Export Invalid_Participant : public ::CORBA::UserException
    {
    public:

      Invalid_Participant (void);
      Invalid_Participant (const Invalid_Participant &);
      ~Invalid_Participant (void);

      Invalid_Participant &operator= (const Invalid_Participant &);

      static Invalid_Participant *_downcast ( ::CORBA::Exception *);
      static const Invalid_Participant *_downcast ( ::CORBA::Exception const *);

      static ::CORBA::Exception *_alloc (void);

      virtual ::CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void) const;

      virtual void _tao_encode (TAO_OutputCDR &cdr) const;
      virtual void _tao_decode (TAO_InputCDR &cdr);
    };

    // TAO_IDL - Generated from
    // be/be_visitor_exception/exception_ch.cpp:44

    class OpenDDS_InfoRepoDiscovery_Export Invalid_Publication : public ::CORBA::UserException
    {
    public:

      Invalid_Publication (void);
      Invalid_Publication (const Invalid_Publication &);
      ~Invalid_Publication (void);

      Invalid_Publication &operator= (const Invalid_Publication &);

      static Invalid_Publication *_downcast ( ::CORBA::Exception *);
      static const Invalid_Publication *_downcast ( ::CORBA::Exception const *);

      static ::CORBA::Exception *_alloc (void);

      virtual ::CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void) const;

      virtual void _tao_encode (TAO_OutputCDR &cdr) const;
      virtual void _tao_decode (TAO_InputCDR &cdr);
    };

    // TAO_IDL - Generated from
    // be/be_visitor_exception/exception_ch.cpp:44

    class OpenDDS_InfoRepoDiscovery_Export Invalid_Subscription : public ::CORBA::UserException
    {
    public:

      Invalid_Subscription (void);
      Invalid_Subscription (const Invalid_Subscription &);
      ~Invalid_Subscription (void);

      Invalid_Subscription &operator= (const Invalid_Subscription &);

      static Invalid_Subscription *_downcast ( ::CORBA::Exception *);
      static const Invalid_Subscription *_downcast ( ::CORBA::Exception const *);

      static ::CORBA::Exception *_alloc (void);

      virtual ::CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void) const;

      virtual void _tao_encode (TAO_OutputCDR &cdr) const;
      virtual void _tao_decode (TAO_InputCDR &cdr);
    };

    // TAO_IDL - Generated from
    // be/be_visitor_exception/exception_ch.cpp:44

    class OpenDDS_InfoRepoDiscovery_Export Invalid_Topic : public ::CORBA::UserException
    {
    public:

      Invalid_Topic (void);
      Invalid_Topic (const Invalid_Topic &);
      ~Invalid_Topic (void);

      Invalid_Topic &operator= (const Invalid_Topic &);

      static Invalid_Topic *_downcast ( ::CORBA::Exception *);
      static const Invalid_Topic *_downcast ( ::CORBA::Exception const *);

      static ::CORBA::Exception *_alloc (void);

      virtual ::CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void) const;

      virtual void _tao_encode (TAO_OutputCDR &cdr) const;
      virtual void _tao_decode (TAO_InputCDR &cdr);
    };

    // TAO_IDL - Generated from
    // be/be_interface.cpp:751

#if !defined (_OPENDDS_DCPS_DCPSINFO__VAR_OUT_CH_)
#define _OPENDDS_DCPS_DCPSINFO__VAR_OUT_CH_

    class DCPSInfo;
    typedef DCPSInfo *DCPSInfo_ptr;

    typedef
      TAO_Objref_Var_T<
          DCPSInfo
        >
      DCPSInfo_var;
    
    typedef
      TAO_Objref_Out_T<
          DCPSInfo
        >
      DCPSInfo_out;

#endif /* end #if !defined */

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:43

    class OpenDDS_InfoRepoDiscovery_Export DCPSInfo
      : public virtual ::CORBA::Object
    {
    public:
      friend class TAO::Narrow_Utils<DCPSInfo>;

      // TAO_IDL - Generated from
      // be/be_type.cpp:307

      typedef DCPSInfo_ptr _ptr_type;
      typedef DCPSInfo_var _var_type;
      typedef DCPSInfo_out _out_type;

      // The static operations.
      static DCPSInfo_ptr _duplicate (DCPSInfo_ptr obj);

      static void _tao_release (DCPSInfo_ptr obj);

      static DCPSInfo_ptr _narrow (::CORBA::Object_ptr obj);
      static DCPSInfo_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
      static DCPSInfo_ptr _nil (void);

      virtual ::CORBA::Boolean attach_participant (
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & participantId);

      virtual ::OpenDDS::DCPS::TopicStatus assert_topic (
        ::OpenDDS::DCPS::RepoId_out topicId,
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & participantId,
        const char * topicName,
        const char * DataTypeName,
        const ::DDS::TopicQos & qos,
        ::CORBA::Boolean hasDcpsKey);

      virtual ::OpenDDS::DCPS::TopicStatus find_topic (
        ::DDS::DomainId_t domainId,
        const char * topicName,
        ::CORBA::String_out DataTypeName,
        ::DDS::TopicQos_out qos,
        ::OpenDDS::DCPS::RepoId_out topicId);

      virtual ::OpenDDS::DCPS::TopicStatus remove_topic (
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & participantId,
        const ::OpenDDS::DCPS::RepoId & topicId);

      virtual ::OpenDDS::DCPS::RepoId add_publication (
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & participantId,
        const ::OpenDDS::DCPS::RepoId & topicId,
        ::OpenDDS::DCPS::DataWriterRemote_ptr publication,
        const ::DDS::DataWriterQos & qos,
        const ::OpenDDS::DCPS::TransportLocatorSeq & transInfo,
        const ::DDS::PublisherQos & publisherQos);

      virtual void remove_publication (
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & participantId,
        const ::OpenDDS::DCPS::RepoId & publicationId);

      virtual ::OpenDDS::DCPS::RepoId add_subscription (
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & participantId,
        const ::OpenDDS::DCPS::RepoId & topicId,
        ::OpenDDS::DCPS::DataReaderRemote_ptr subscription,
        const ::DDS::DataReaderQos & qos,
        const ::OpenDDS::DCPS::TransportLocatorSeq & transInfo,
        const ::DDS::SubscriberQos & subscriberQos,
        const char * filterClassName,
        const char * filterExpression,
        const ::DDS::StringSeq & exprParams);

      virtual void remove_subscription (
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & participantId,
        const ::OpenDDS::DCPS::RepoId & subscriptionId);

      virtual ::OpenDDS::DCPS::AddDomainStatus add_domain_participant (
        ::DDS::DomainId_t domain,
        const ::DDS::DomainParticipantQos & qos);

      virtual void remove_domain_participant (
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & participantId);

      virtual void association_complete (
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & participantId,
        const ::OpenDDS::DCPS::RepoId & localId,
        const ::OpenDDS::DCPS::RepoId & remoteId);

      virtual void disassociate_participant (
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & local_id,
        const ::OpenDDS::DCPS::RepoId & remote_id);

      virtual void disassociate_subscription (
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & participantId,
        const ::OpenDDS::DCPS::RepoId & local_id,
        const ::OpenDDS::DCPS::RepoId & remote_id);

      virtual void disassociate_publication (
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & participantId,
        const ::OpenDDS::DCPS::RepoId & local_id,
        const ::OpenDDS::DCPS::RepoId & remote_id);

      virtual void ignore_domain_participant (
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & myParticipantId,
        const ::OpenDDS::DCPS::RepoId & ignoreId);

      virtual void ignore_topic (
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & myParticipantId,
        const ::OpenDDS::DCPS::RepoId & ignoreId);

      virtual void ignore_subscription (
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & myParticipantId,
        const ::OpenDDS::DCPS::RepoId & ignoreId);

      virtual void ignore_publication (
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & myParticipantId,
        const ::OpenDDS::DCPS::RepoId & ignoreId);

      virtual ::CORBA::Boolean update_domain_participant_qos (
        ::DDS::DomainId_t domain,
        const ::OpenDDS::DCPS::RepoId & participantId,
        const ::DDS::DomainParticipantQos & qos);

      virtual ::CORBA::Boolean update_topic_qos (
        const ::OpenDDS::DCPS::RepoId & topicId,
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & participantId,
        const ::DDS::TopicQos & qos);

      virtual ::CORBA::Boolean update_publication_qos (
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & participantId,
        const ::OpenDDS::DCPS::RepoId & publicationId,
        const ::DDS::DataWriterQos & qos,
        const ::DDS::PublisherQos & publisherQos);

      virtual ::CORBA::Boolean update_subscription_qos (
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & participantId,
        const ::OpenDDS::DCPS::RepoId & subscriptionId,
        const ::DDS::DataReaderQos & qos,
        const ::DDS::SubscriberQos & subscriberQos);

      virtual ::CORBA::Boolean update_subscription_params (
        ::DDS::DomainId_t domainId,
        const ::OpenDDS::DCPS::RepoId & participantId,
        const ::OpenDDS::DCPS::RepoId & subscriptionId,
        const ::DDS::StringSeq & exprParams);

      virtual void shutdown (
        void);

      virtual char * dump_to_string (
        void);

      // TAO_IDL - Generated from
      // be/be_visitor_interface/interface_ch.cpp:140

      virtual ::CORBA::Boolean _is_a (const char *type_id);
      virtual const char* _interface_repository_id (void) const;
      virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
    
    protected:
      // Concrete interface only.
      DCPSInfo (void);

      // Concrete non-local interface only.
      DCPSInfo (
          ::IOP::IOR *ior,
          TAO_ORB_Core *orb_core);
      
      // Non-local interface only.
      DCPSInfo (
          TAO_Stub *objref,
          ::CORBA::Boolean _tao_collocated = false,
          TAO_Abstract_ServantBase *servant = 0,
          TAO_ORB_Core *orb_core = 0);

      virtual ~DCPSInfo (void);
    
    private:
      // Private and unimplemented for concrete interfaces.
      DCPSInfo (const DCPSInfo &);

      void operator= (const DCPSInfo &);
    };
  
  // TAO_IDL - Generated from
  // be/be_visitor_module/module_ch.cpp:67
  
  } // module OpenDDS::DCPS

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module OpenDDS

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68


OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:147

#if !defined (_OPENDDS_DCPS_DCPSINFO__ARG_TRAITS_)
#define _OPENDDS_DCPS_DCPSINFO__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::OpenDDS::DCPS::DCPSInfo>
    : public
        Object_Arg_Traits_T<
            ::OpenDDS::DCPS::DCPSInfo_ptr,
            ::OpenDDS::DCPS::DCPSInfo_var,
            ::OpenDDS::DCPS::DCPSInfo_out,
            TAO::Objref_Traits<OpenDDS::DCPS::DCPSInfo>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:62


OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_OPENDDS_DCPS_DCPSINFO__TRAITS_)
#define _OPENDDS_DCPS_DCPSINFO__TRAITS_

  template<>
  struct OpenDDS_InfoRepoDiscovery_Export Objref_Traits< ::OpenDDS::DCPS::DCPSInfo>
  {
    static ::OpenDDS::DCPS::DCPSInfo_ptr duplicate (
        ::OpenDDS::DCPS::DCPSInfo_ptr p);
    static void release (
        ::OpenDDS::DCPS::DCPSInfo_ptr p);
    static ::OpenDDS::DCPS::DCPSInfo_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::OpenDDS::DCPS::DCPSInfo_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:40

OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



OpenDDS_InfoRepoDiscovery_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OpenDDS::DCPS::Invalid_Domain &);
OpenDDS_InfoRepoDiscovery_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OpenDDS::DCPS::Invalid_Domain &);

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:40

OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



OpenDDS_InfoRepoDiscovery_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OpenDDS::DCPS::Invalid_Participant &);
OpenDDS_InfoRepoDiscovery_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OpenDDS::DCPS::Invalid_Participant &);

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:40

OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



OpenDDS_InfoRepoDiscovery_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OpenDDS::DCPS::Invalid_Publication &);
OpenDDS_InfoRepoDiscovery_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OpenDDS::DCPS::Invalid_Publication &);

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:40

OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



OpenDDS_InfoRepoDiscovery_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OpenDDS::DCPS::Invalid_Subscription &);
OpenDDS_InfoRepoDiscovery_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OpenDDS::DCPS::Invalid_Subscription &);

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:40

OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



OpenDDS_InfoRepoDiscovery_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OpenDDS::DCPS::Invalid_Topic &);
OpenDDS_InfoRepoDiscovery_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OpenDDS::DCPS::Invalid_Topic &);

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:44


OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

OpenDDS_InfoRepoDiscovery_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OpenDDS::DCPS::DCPSInfo_ptr );
OpenDDS_InfoRepoDiscovery_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OpenDDS::DCPS::DCPSInfo_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_codegen.cpp:1703


OPENDDS_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "InfoC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

