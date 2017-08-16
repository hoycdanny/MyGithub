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

#ifndef _TAO_IDL_MESSENGERTYPESUPPORTC_0O4DT8_H_
#define _TAO_IDL_MESSENGERTYPESUPPORTC_0O4DT8_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "LargeSample_export.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "dds/DCPS/ZeroCopyInfoSeq_T.h"
#include "dds/DCPS/ZeroCopySeq_T.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Sequence_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "MessengerC.h"
#include "dds/DdsDcpsInfrastructureC.h"
#include "dds/DdsDcpsPublicationC.h"
#include "dds/DdsDcpsSubscriptionExtC.h"
#include "dds/DdsDcpsTopicC.h"
#include "dds/DdsDcpsTypeSupportExtC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO LargeSample_Export

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace Messenger
{

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:102

  typedef ::TAO::DCPS::ZeroCopyDataSeq< Messenger::Message, DCPS_ZERO_COPY_SEQ_DEFAULT_SIZE> MessageSeq;
  

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_MESSENGER_MESSAGETYPESUPPORT__VAR_OUT_CH_)
#define _MESSENGER_MESSAGETYPESUPPORT__VAR_OUT_CH_

  class MessageTypeSupport;
  typedef MessageTypeSupport *MessageTypeSupport_ptr;

  typedef
    TAO_Objref_Var_T<
        MessageTypeSupport
      >
    MessageTypeSupport_var;
  
  typedef
    TAO_Objref_Out_T<
        MessageTypeSupport
      >
    MessageTypeSupport_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class LargeSample_Export MessageTypeSupport
    : public virtual ::OpenDDS::DCPS::TypeSupport
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef MessageTypeSupport_ptr _ptr_type;
    typedef MessageTypeSupport_var _var_type;
    typedef MessageTypeSupport_out _out_type;

    // The static operations.
    static MessageTypeSupport_ptr _duplicate (MessageTypeSupport_ptr obj);

    static void _tao_release (MessageTypeSupport_ptr obj);

    static MessageTypeSupport_ptr _narrow (::CORBA::Object_ptr obj);
    static MessageTypeSupport_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static MessageTypeSupport_ptr _nil (void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    MessageTypeSupport (void);

    

    virtual ~MessageTypeSupport (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    MessageTypeSupport (const MessageTypeSupport &);

    void operator= (const MessageTypeSupport &);
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_MESSENGER_MESSAGEDATAWRITER__VAR_OUT_CH_)
#define _MESSENGER_MESSAGEDATAWRITER__VAR_OUT_CH_

  class MessageDataWriter;
  typedef MessageDataWriter *MessageDataWriter_ptr;

  typedef
    TAO_Objref_Var_T<
        MessageDataWriter
      >
    MessageDataWriter_var;
  
  typedef
    TAO_Objref_Out_T<
        MessageDataWriter
      >
    MessageDataWriter_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class LargeSample_Export MessageDataWriter
    : public virtual ::DDS::DataWriter
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef MessageDataWriter_ptr _ptr_type;
    typedef MessageDataWriter_var _var_type;
    typedef MessageDataWriter_out _out_type;

    // The static operations.
    static MessageDataWriter_ptr _duplicate (MessageDataWriter_ptr obj);

    static void _tao_release (MessageDataWriter_ptr obj);

    static MessageDataWriter_ptr _narrow (::CORBA::Object_ptr obj);
    static MessageDataWriter_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static MessageDataWriter_ptr _nil (void);

    virtual ::DDS::InstanceHandle_t register_instance (
      const ::Messenger::Message & instance) = 0;

    virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
      const ::Messenger::Message & instance,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance (
      const ::Messenger::Message & instance,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
      const ::Messenger::Message & instance,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t write (
      const ::Messenger::Message & instance_data,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t write_w_timestamp (
      const ::Messenger::Message & instance_data,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t dispose (
      const ::Messenger::Message & instance_data,
      ::DDS::InstanceHandle_t instance_handle) = 0;

    virtual ::DDS::ReturnCode_t dispose_w_timestamp (
      const ::Messenger::Message & instance_data,
      ::DDS::InstanceHandle_t instance_handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::Messenger::Message & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::Messenger::Message & instance_data) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    MessageDataWriter (void);

    

    virtual ~MessageDataWriter (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    MessageDataWriter (const MessageDataWriter &);

    void operator= (const MessageDataWriter &);
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_MESSENGER_MESSAGEDATAREADER__VAR_OUT_CH_)
#define _MESSENGER_MESSAGEDATAREADER__VAR_OUT_CH_

  class MessageDataReader;
  typedef MessageDataReader *MessageDataReader_ptr;

  typedef
    TAO_Objref_Var_T<
        MessageDataReader
      >
    MessageDataReader_var;
  
  typedef
    TAO_Objref_Out_T<
        MessageDataReader
      >
    MessageDataReader_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class LargeSample_Export MessageDataReader
    : public virtual ::OpenDDS::DCPS::DataReaderEx
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef MessageDataReader_ptr _ptr_type;
    typedef MessageDataReader_var _var_type;
    typedef MessageDataReader_out _out_type;

    // The static operations.
    static MessageDataReader_ptr _duplicate (MessageDataReader_ptr obj);

    static void _tao_release (MessageDataReader_ptr obj);

    static MessageDataReader_ptr _narrow (::CORBA::Object_ptr obj);
    static MessageDataReader_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static MessageDataReader_ptr _nil (void);

    virtual ::DDS::ReturnCode_t read (
      ::Messenger::MessageSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take (
      ::Messenger::MessageSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_w_condition (
      ::Messenger::MessageSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_w_condition (
      ::Messenger::MessageSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t read_next_sample (
      ::Messenger::Message & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t take_next_sample (
      ::Messenger::Message & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t read_instance (
      ::Messenger::MessageSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_instance (
      ::Messenger::MessageSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_instance_w_condition (
      ::Messenger::MessageSeq & received_data,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_instance_w_condition (
      ::Messenger::MessageSeq & received_data,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance (
      ::Messenger::MessageSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance (
      ::Messenger::MessageSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
      ::Messenger::MessageSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
      ::Messenger::MessageSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t return_loan (
      ::Messenger::MessageSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::Messenger::Message & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::Messenger::Message & instance_data) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    MessageDataReader (void);

    

    virtual ~MessageDataReader (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    MessageDataReader (const MessageDataReader &);

    void operator= (const MessageDataReader &);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module Messenger

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:62

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_MESSENGER_MESSAGETYPESUPPORT__TRAITS_)
#define _MESSENGER_MESSAGETYPESUPPORT__TRAITS_

  template<>
  struct LargeSample_Export Objref_Traits< ::Messenger::MessageTypeSupport>
  {
    static ::Messenger::MessageTypeSupport_ptr duplicate (
        ::Messenger::MessageTypeSupport_ptr p);
    static void release (
        ::Messenger::MessageTypeSupport_ptr p);
    static ::Messenger::MessageTypeSupport_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Messenger::MessageTypeSupport_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_MESSENGER_MESSAGEDATAWRITER__TRAITS_)
#define _MESSENGER_MESSAGEDATAWRITER__TRAITS_

  template<>
  struct LargeSample_Export Objref_Traits< ::Messenger::MessageDataWriter>
  {
    static ::Messenger::MessageDataWriter_ptr duplicate (
        ::Messenger::MessageDataWriter_ptr p);
    static void release (
        ::Messenger::MessageDataWriter_ptr p);
    static ::Messenger::MessageDataWriter_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Messenger::MessageDataWriter_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_MESSENGER_MESSAGEDATAREADER__TRAITS_)
#define _MESSENGER_MESSAGEDATAREADER__TRAITS_

  template<>
  struct LargeSample_Export Objref_Traits< ::Messenger::MessageDataReader>
  {
    static ::Messenger::MessageDataReader_ptr duplicate (
        ::Messenger::MessageDataReader_ptr p);
    static void release (
        ::Messenger::MessageDataReader_ptr p);
    static ::Messenger::MessageDataReader_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Messenger::MessageDataReader_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "MessengerTypeSupportC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

