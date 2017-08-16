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

#ifndef _TAO_IDL_RTPSCORES_LPPHM2_H_
#define _TAO_IDL_RTPSCORES_LPPHM2_H_

#include /**/ "ace/pre.h"

#include "RtpsCoreC.h"
#include "dds/DdsDcpsInfoUtilsS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Fixed_Array_SArgument_T.h"
#include "tao/PortableServer/Var_Array_SArgument_T.h"

// Skeleton file generation suppressed with command line option -SS

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68


OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::OctetArray2_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::OpenDDS::RTPS::OctetArray2_var,
            ::OpenDDS::RTPS::OctetArray2_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::OctetArray4_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::OpenDDS::RTPS::OctetArray4_var,
            ::OpenDDS::RTPS::OctetArray4_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::FilterSignature_t_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::OpenDDS::RTPS::FilterSignature_t_var,
            ::OpenDDS::RTPS::FilterSignature_t_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::FilterResult_t>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::FilterResult_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::FilterSignatureSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::FilterSignatureSeq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::ContentFilterInfo_t>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::ContentFilterInfo_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::Property_t>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::Property_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::PropertySeq>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::PropertySeq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::EntityName_t>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::EntityName_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::Count_t>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::Count_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::SequenceNumber_t>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::SequenceNumber_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::LongSeq8>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::LongSeq8,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::SequenceNumberSet>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::SequenceNumberSet,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::LocatorList>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::LocatorList,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::Time_t>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::Time_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::LocatorUDPv4_t>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::LocatorUDPv4_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::TopicKind_t>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::TopicKind_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::ReliabilityKind_t>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::ReliabilityKind_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::KeyHash_t>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::KeyHash_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::StatusInfo_t>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::StatusInfo_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::ProtocolVersion_t>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::ProtocolVersion_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::VendorId_t>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::VendorId_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::ParameterList>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::ParameterList,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::OriginalWriterInfo_t>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::OriginalWriterInfo_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:1058

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::Parameter>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::Parameter,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::SubmessageHeader>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::SubmessageHeader,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::FragmentNumber_t>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::FragmentNumber_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::FragmentNumberSet>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::FragmentNumberSet,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::AckNackSubmessage>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::AckNackSubmessage,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::GapSubmessage>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::GapSubmessage,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::InfoReplySubmessage>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::InfoReplySubmessage,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::NackFragSubmessage>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::NackFragSubmessage,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::ParticipantProxy_t>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::ParticipantProxy_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::SPDPdiscoveredParticipantData>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::SPDPdiscoveredParticipantData,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::ParticipantMessageData>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::ParticipantMessageData,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::Header>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::Header,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::DataSubmessage>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::DataSubmessage,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::DataFragSubmessage>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::DataFragSubmessage,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::HeartBeatSubmessage>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::HeartBeatSubmessage,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::HeartBeatFragSubmessage>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::HeartBeatFragSubmessage,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::InfoDestinationSubmessage>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::InfoDestinationSubmessage,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::InfoSourceSubmessage>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::InfoSourceSubmessage,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::InfoTimestampSubmessage>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::InfoTimestampSubmessage,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::PadSubmessage>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::PadSubmessage,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::InfoReplyIp4Submessage>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::InfoReplyIp4Submessage,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:904

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::SubmessageKind>
    : public
        Basic_SArg_Traits_T<
            ::OpenDDS::RTPS::SubmessageKind,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:1058

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::Submessage>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::Submessage,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:685

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::SubmessageSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::SubmessageSeq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:947

  template<>
  class SArg_Traits< ::OpenDDS::RTPS::DiscoveredTopicData>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::RTPS::DiscoveredTopicData,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




OPENDDS_END_VERSIONED_NAMESPACE_DECL



#include /**/ "ace/post.h"

#endif /* ifndef */

