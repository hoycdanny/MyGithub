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

#ifndef _TAO_IDL_KEYEDDATATYPESUPPORTC_UOTEUD_H_
#define _TAO_IDL_KEYEDDATATYPESUPPORTC_UOTEUD_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "instanceslib_export.h"
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
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "KeyedDataC.h"
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
#define TAO_EXPORT_MACRO InstancesLib_Export

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace Xyz
{

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:102

  typedef ::TAO::DCPS::ZeroCopyDataSeq< Xyz::KeyedData, DCPS_ZERO_COPY_SEQ_DEFAULT_SIZE> KeyedDataSeq;
  

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_XYZ_KEYEDDATATYPESUPPORT__VAR_OUT_CH_)
#define _XYZ_KEYEDDATATYPESUPPORT__VAR_OUT_CH_

  class KeyedDataTypeSupport;
  typedef KeyedDataTypeSupport *KeyedDataTypeSupport_ptr;

  typedef
    TAO_Objref_Var_T<
        KeyedDataTypeSupport
      >
    KeyedDataTypeSupport_var;
  
  typedef
    TAO_Objref_Out_T<
        KeyedDataTypeSupport
      >
    KeyedDataTypeSupport_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class InstancesLib_Export KeyedDataTypeSupport
    : public virtual ::OpenDDS::DCPS::TypeSupport
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef KeyedDataTypeSupport_ptr _ptr_type;
    typedef KeyedDataTypeSupport_var _var_type;
    typedef KeyedDataTypeSupport_out _out_type;

    // The static operations.
    static KeyedDataTypeSupport_ptr _duplicate (KeyedDataTypeSupport_ptr obj);

    static void _tao_release (KeyedDataTypeSupport_ptr obj);

    static KeyedDataTypeSupport_ptr _narrow (::CORBA::Object_ptr obj);
    static KeyedDataTypeSupport_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static KeyedDataTypeSupport_ptr _nil (void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    KeyedDataTypeSupport (void);

    

    virtual ~KeyedDataTypeSupport (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    KeyedDataTypeSupport (const KeyedDataTypeSupport &);

    void operator= (const KeyedDataTypeSupport &);
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_XYZ_KEYEDDATADATAWRITER__VAR_OUT_CH_)
#define _XYZ_KEYEDDATADATAWRITER__VAR_OUT_CH_

  class KeyedDataDataWriter;
  typedef KeyedDataDataWriter *KeyedDataDataWriter_ptr;

  typedef
    TAO_Objref_Var_T<
        KeyedDataDataWriter
      >
    KeyedDataDataWriter_var;
  
  typedef
    TAO_Objref_Out_T<
        KeyedDataDataWriter
      >
    KeyedDataDataWriter_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class InstancesLib_Export KeyedDataDataWriter
    : public virtual ::DDS::DataWriter
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef KeyedDataDataWriter_ptr _ptr_type;
    typedef KeyedDataDataWriter_var _var_type;
    typedef KeyedDataDataWriter_out _out_type;

    // The static operations.
    static KeyedDataDataWriter_ptr _duplicate (KeyedDataDataWriter_ptr obj);

    static void _tao_release (KeyedDataDataWriter_ptr obj);

    static KeyedDataDataWriter_ptr _narrow (::CORBA::Object_ptr obj);
    static KeyedDataDataWriter_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static KeyedDataDataWriter_ptr _nil (void);

    virtual ::DDS::InstanceHandle_t register_instance (
      const ::Xyz::KeyedData & instance) = 0;

    virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
      const ::Xyz::KeyedData & instance,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance (
      const ::Xyz::KeyedData & instance,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
      const ::Xyz::KeyedData & instance,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t write (
      const ::Xyz::KeyedData & instance_data,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t write_w_timestamp (
      const ::Xyz::KeyedData & instance_data,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t dispose (
      const ::Xyz::KeyedData & instance_data,
      ::DDS::InstanceHandle_t instance_handle) = 0;

    virtual ::DDS::ReturnCode_t dispose_w_timestamp (
      const ::Xyz::KeyedData & instance_data,
      ::DDS::InstanceHandle_t instance_handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::Xyz::KeyedData & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::Xyz::KeyedData & instance_data) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    KeyedDataDataWriter (void);

    

    virtual ~KeyedDataDataWriter (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    KeyedDataDataWriter (const KeyedDataDataWriter &);

    void operator= (const KeyedDataDataWriter &);
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_XYZ_KEYEDDATADATAREADER__VAR_OUT_CH_)
#define _XYZ_KEYEDDATADATAREADER__VAR_OUT_CH_

  class KeyedDataDataReader;
  typedef KeyedDataDataReader *KeyedDataDataReader_ptr;

  typedef
    TAO_Objref_Var_T<
        KeyedDataDataReader
      >
    KeyedDataDataReader_var;
  
  typedef
    TAO_Objref_Out_T<
        KeyedDataDataReader
      >
    KeyedDataDataReader_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class InstancesLib_Export KeyedDataDataReader
    : public virtual ::OpenDDS::DCPS::DataReaderEx
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef KeyedDataDataReader_ptr _ptr_type;
    typedef KeyedDataDataReader_var _var_type;
    typedef KeyedDataDataReader_out _out_type;

    // The static operations.
    static KeyedDataDataReader_ptr _duplicate (KeyedDataDataReader_ptr obj);

    static void _tao_release (KeyedDataDataReader_ptr obj);

    static KeyedDataDataReader_ptr _narrow (::CORBA::Object_ptr obj);
    static KeyedDataDataReader_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static KeyedDataDataReader_ptr _nil (void);

    virtual ::DDS::ReturnCode_t read (
      ::Xyz::KeyedDataSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take (
      ::Xyz::KeyedDataSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_w_condition (
      ::Xyz::KeyedDataSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_w_condition (
      ::Xyz::KeyedDataSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t read_next_sample (
      ::Xyz::KeyedData & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t take_next_sample (
      ::Xyz::KeyedData & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t read_instance (
      ::Xyz::KeyedDataSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_instance (
      ::Xyz::KeyedDataSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_instance_w_condition (
      ::Xyz::KeyedDataSeq & received_data,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_instance_w_condition (
      ::Xyz::KeyedDataSeq & received_data,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance (
      ::Xyz::KeyedDataSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance (
      ::Xyz::KeyedDataSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
      ::Xyz::KeyedDataSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
      ::Xyz::KeyedDataSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t return_loan (
      ::Xyz::KeyedDataSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::Xyz::KeyedData & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::Xyz::KeyedData & instance_data) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    KeyedDataDataReader (void);

    

    virtual ~KeyedDataDataReader (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    KeyedDataDataReader (const KeyedDataDataReader &);

    void operator= (const KeyedDataDataReader &);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module Xyz

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

#if !defined (_XYZ_KEYEDDATATYPESUPPORT__TRAITS_)
#define _XYZ_KEYEDDATATYPESUPPORT__TRAITS_

  template<>
  struct InstancesLib_Export Objref_Traits< ::Xyz::KeyedDataTypeSupport>
  {
    static ::Xyz::KeyedDataTypeSupport_ptr duplicate (
        ::Xyz::KeyedDataTypeSupport_ptr p);
    static void release (
        ::Xyz::KeyedDataTypeSupport_ptr p);
    static ::Xyz::KeyedDataTypeSupport_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Xyz::KeyedDataTypeSupport_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_XYZ_KEYEDDATADATAWRITER__TRAITS_)
#define _XYZ_KEYEDDATADATAWRITER__TRAITS_

  template<>
  struct InstancesLib_Export Objref_Traits< ::Xyz::KeyedDataDataWriter>
  {
    static ::Xyz::KeyedDataDataWriter_ptr duplicate (
        ::Xyz::KeyedDataDataWriter_ptr p);
    static void release (
        ::Xyz::KeyedDataDataWriter_ptr p);
    static ::Xyz::KeyedDataDataWriter_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Xyz::KeyedDataDataWriter_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_XYZ_KEYEDDATADATAREADER__TRAITS_)
#define _XYZ_KEYEDDATADATAREADER__TRAITS_

  template<>
  struct InstancesLib_Export Objref_Traits< ::Xyz::KeyedDataDataReader>
  {
    static ::Xyz::KeyedDataDataReader_ptr duplicate (
        ::Xyz::KeyedDataDataReader_ptr p);
    static void release (
        ::Xyz::KeyedDataDataReader_ptr p);
    static ::Xyz::KeyedDataDataReader_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Xyz::KeyedDataDataReader_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "KeyedDataTypeSupportC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

