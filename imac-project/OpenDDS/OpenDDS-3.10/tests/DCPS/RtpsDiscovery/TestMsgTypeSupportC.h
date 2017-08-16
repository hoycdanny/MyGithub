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

#ifndef _TAO_IDL_TESTMSGTYPESUPPORTC_I1RMVF_H_
#define _TAO_IDL_TESTMSGTYPESUPPORTC_I1RMVF_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


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

#include "TestMsgC.h"
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
#define TAO_EXPORT_MACRO 

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_ch.cpp:102

typedef ::TAO::DCPS::ZeroCopyDataSeq< TestMsg, DCPS_ZERO_COPY_SEQ_DEFAULT_SIZE> TestMsgSeq;


// TAO_IDL - Generated from
// be/be_interface.cpp:751

#if !defined (_TESTMSGTYPESUPPORT__VAR_OUT_CH_)
#define _TESTMSGTYPESUPPORT__VAR_OUT_CH_

class TestMsgTypeSupport;
typedef TestMsgTypeSupport *TestMsgTypeSupport_ptr;

typedef
  TAO_Objref_Var_T<
      TestMsgTypeSupport
    >
  TestMsgTypeSupport_var;

typedef
  TAO_Objref_Out_T<
      TestMsgTypeSupport
    >
  TestMsgTypeSupport_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:43

class  TestMsgTypeSupport
  : public virtual ::OpenDDS::DCPS::TypeSupport

{
public:

  // TAO_IDL - Generated from
  // be/be_type.cpp:307

  typedef TestMsgTypeSupport_ptr _ptr_type;
  typedef TestMsgTypeSupport_var _var_type;
  typedef TestMsgTypeSupport_out _out_type;

  // The static operations.
  static TestMsgTypeSupport_ptr _duplicate (TestMsgTypeSupport_ptr obj);

  static void _tao_release (TestMsgTypeSupport_ptr obj);

  static TestMsgTypeSupport_ptr _narrow (::CORBA::Object_ptr obj);
  static TestMsgTypeSupport_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static TestMsgTypeSupport_ptr _nil (void);

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:140

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Abstract or local interface only.
  TestMsgTypeSupport (void);

  

  virtual ~TestMsgTypeSupport (void);

private:
  // Private and unimplemented for concrete interfaces.
  TestMsgTypeSupport (const TestMsgTypeSupport &);

  void operator= (const TestMsgTypeSupport &);
};

// TAO_IDL - Generated from
// be/be_interface.cpp:751

#if !defined (_TESTMSGDATAWRITER__VAR_OUT_CH_)
#define _TESTMSGDATAWRITER__VAR_OUT_CH_

class TestMsgDataWriter;
typedef TestMsgDataWriter *TestMsgDataWriter_ptr;

typedef
  TAO_Objref_Var_T<
      TestMsgDataWriter
    >
  TestMsgDataWriter_var;

typedef
  TAO_Objref_Out_T<
      TestMsgDataWriter
    >
  TestMsgDataWriter_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:43

class  TestMsgDataWriter
  : public virtual ::DDS::DataWriter

{
public:

  // TAO_IDL - Generated from
  // be/be_type.cpp:307

  typedef TestMsgDataWriter_ptr _ptr_type;
  typedef TestMsgDataWriter_var _var_type;
  typedef TestMsgDataWriter_out _out_type;

  // The static operations.
  static TestMsgDataWriter_ptr _duplicate (TestMsgDataWriter_ptr obj);

  static void _tao_release (TestMsgDataWriter_ptr obj);

  static TestMsgDataWriter_ptr _narrow (::CORBA::Object_ptr obj);
  static TestMsgDataWriter_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static TestMsgDataWriter_ptr _nil (void);

  virtual ::DDS::InstanceHandle_t register_instance (
    const ::TestMsg & instance) = 0;

  virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
    const ::TestMsg & instance,
    const ::DDS::Time_t & timestamp) = 0;

  virtual ::DDS::ReturnCode_t unregister_instance (
    const ::TestMsg & instance,
    ::DDS::InstanceHandle_t handle) = 0;

  virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
    const ::TestMsg & instance,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & timestamp) = 0;

  virtual ::DDS::ReturnCode_t write (
    const ::TestMsg & instance_data,
    ::DDS::InstanceHandle_t handle) = 0;

  virtual ::DDS::ReturnCode_t write_w_timestamp (
    const ::TestMsg & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) = 0;

  virtual ::DDS::ReturnCode_t dispose (
    const ::TestMsg & instance_data,
    ::DDS::InstanceHandle_t instance_handle) = 0;

  virtual ::DDS::ReturnCode_t dispose_w_timestamp (
    const ::TestMsg & instance_data,
    ::DDS::InstanceHandle_t instance_handle,
    const ::DDS::Time_t & source_timestamp) = 0;

  virtual ::DDS::ReturnCode_t get_key_value (
    ::TestMsg & key_holder,
    ::DDS::InstanceHandle_t handle) = 0;

  virtual ::DDS::InstanceHandle_t lookup_instance (
    const ::TestMsg & instance_data) = 0;

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:140

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Abstract or local interface only.
  TestMsgDataWriter (void);

  

  virtual ~TestMsgDataWriter (void);

private:
  // Private and unimplemented for concrete interfaces.
  TestMsgDataWriter (const TestMsgDataWriter &);

  void operator= (const TestMsgDataWriter &);
};

// TAO_IDL - Generated from
// be/be_interface.cpp:751

#if !defined (_TESTMSGDATAREADER__VAR_OUT_CH_)
#define _TESTMSGDATAREADER__VAR_OUT_CH_

class TestMsgDataReader;
typedef TestMsgDataReader *TestMsgDataReader_ptr;

typedef
  TAO_Objref_Var_T<
      TestMsgDataReader
    >
  TestMsgDataReader_var;

typedef
  TAO_Objref_Out_T<
      TestMsgDataReader
    >
  TestMsgDataReader_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:43

class  TestMsgDataReader
  : public virtual ::OpenDDS::DCPS::DataReaderEx

{
public:

  // TAO_IDL - Generated from
  // be/be_type.cpp:307

  typedef TestMsgDataReader_ptr _ptr_type;
  typedef TestMsgDataReader_var _var_type;
  typedef TestMsgDataReader_out _out_type;

  // The static operations.
  static TestMsgDataReader_ptr _duplicate (TestMsgDataReader_ptr obj);

  static void _tao_release (TestMsgDataReader_ptr obj);

  static TestMsgDataReader_ptr _narrow (::CORBA::Object_ptr obj);
  static TestMsgDataReader_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static TestMsgDataReader_ptr _nil (void);

  virtual ::DDS::ReturnCode_t read (
    ::TestMsgSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::CORBA::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) = 0;

  virtual ::DDS::ReturnCode_t take (
    ::TestMsgSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::CORBA::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) = 0;

  virtual ::DDS::ReturnCode_t read_w_condition (
    ::TestMsgSeq & data_values,
    ::DDS::SampleInfoSeq & sample_infos,
    ::CORBA::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) = 0;

  virtual ::DDS::ReturnCode_t take_w_condition (
    ::TestMsgSeq & data_values,
    ::DDS::SampleInfoSeq & sample_infos,
    ::CORBA::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) = 0;

  virtual ::DDS::ReturnCode_t read_next_sample (
    ::TestMsg & received_data,
    ::DDS::SampleInfo & sample_info) = 0;

  virtual ::DDS::ReturnCode_t take_next_sample (
    ::TestMsg & received_data,
    ::DDS::SampleInfo & sample_info) = 0;

  virtual ::DDS::ReturnCode_t read_instance (
    ::TestMsgSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::CORBA::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) = 0;

  virtual ::DDS::ReturnCode_t take_instance (
    ::TestMsgSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::CORBA::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) = 0;

  virtual ::DDS::ReturnCode_t read_instance_w_condition (
    ::TestMsgSeq & received_data,
    ::DDS::SampleInfoSeq & sample_infos,
    ::CORBA::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) = 0;

  virtual ::DDS::ReturnCode_t take_instance_w_condition (
    ::TestMsgSeq & received_data,
    ::DDS::SampleInfoSeq & sample_infos,
    ::CORBA::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) = 0;

  virtual ::DDS::ReturnCode_t read_next_instance (
    ::TestMsgSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::CORBA::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) = 0;

  virtual ::DDS::ReturnCode_t take_next_instance (
    ::TestMsgSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::CORBA::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) = 0;

  virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
    ::TestMsgSeq & data_values,
    ::DDS::SampleInfoSeq & sample_infos,
    ::CORBA::Long max_samples,
    ::DDS::InstanceHandle_t previous_handle,
    ::DDS::ReadCondition_ptr a_condition) = 0;

  virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
    ::TestMsgSeq & data_values,
    ::DDS::SampleInfoSeq & sample_infos,
    ::CORBA::Long max_samples,
    ::DDS::InstanceHandle_t previous_handle,
    ::DDS::ReadCondition_ptr a_condition) = 0;

  virtual ::DDS::ReturnCode_t return_loan (
    ::TestMsgSeq & received_data,
    ::DDS::SampleInfoSeq & info_seq) = 0;

  virtual ::DDS::ReturnCode_t get_key_value (
    ::TestMsg & key_holder,
    ::DDS::InstanceHandle_t handle) = 0;

  virtual ::DDS::InstanceHandle_t lookup_instance (
    const ::TestMsg & instance_data) = 0;

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:140

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Abstract or local interface only.
  TestMsgDataReader (void);

  

  virtual ~TestMsgDataReader (void);

private:
  // Private and unimplemented for concrete interfaces.
  TestMsgDataReader (const TestMsgDataReader &);

  void operator= (const TestMsgDataReader &);
};

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

#if !defined (_TESTMSGTYPESUPPORT__TRAITS_)
#define _TESTMSGTYPESUPPORT__TRAITS_

  template<>
  struct  Objref_Traits< ::TestMsgTypeSupport>
  {
    static ::TestMsgTypeSupport_ptr duplicate (
        ::TestMsgTypeSupport_ptr p);
    static void release (
        ::TestMsgTypeSupport_ptr p);
    static ::TestMsgTypeSupport_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::TestMsgTypeSupport_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_TESTMSGDATAWRITER__TRAITS_)
#define _TESTMSGDATAWRITER__TRAITS_

  template<>
  struct  Objref_Traits< ::TestMsgDataWriter>
  {
    static ::TestMsgDataWriter_ptr duplicate (
        ::TestMsgDataWriter_ptr p);
    static void release (
        ::TestMsgDataWriter_ptr p);
    static ::TestMsgDataWriter_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::TestMsgDataWriter_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_TESTMSGDATAREADER__TRAITS_)
#define _TESTMSGDATAREADER__TRAITS_

  template<>
  struct  Objref_Traits< ::TestMsgDataReader>
  {
    static ::TestMsgDataReader_ptr duplicate (
        ::TestMsgDataReader_ptr p);
    static void release (
        ::TestMsgDataReader_ptr p);
    static ::TestMsgDataReader_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::TestMsgDataReader_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "TestMsgTypeSupportC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

