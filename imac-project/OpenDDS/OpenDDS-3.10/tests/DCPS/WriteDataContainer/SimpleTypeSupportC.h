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

#ifndef _TAO_IDL_SIMPLETYPESUPPORTC_0HTLPW_H_
#define _TAO_IDL_SIMPLETYPESUPPORTC_0HTLPW_H_

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

#include "SimpleC.h"
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
// be/be_visitor_module/module_ch.cpp:38

namespace Test
{

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:102

  typedef ::TAO::DCPS::ZeroCopyDataSeq< Test::Simple, DCPS_ZERO_COPY_SEQ_DEFAULT_SIZE> SimpleSeq;
  

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_TEST_SIMPLETYPESUPPORT__VAR_OUT_CH_)
#define _TEST_SIMPLETYPESUPPORT__VAR_OUT_CH_

  class SimpleTypeSupport;
  typedef SimpleTypeSupport *SimpleTypeSupport_ptr;

  typedef
    TAO_Objref_Var_T<
        SimpleTypeSupport
      >
    SimpleTypeSupport_var;
  
  typedef
    TAO_Objref_Out_T<
        SimpleTypeSupport
      >
    SimpleTypeSupport_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class  SimpleTypeSupport
    : public virtual ::OpenDDS::DCPS::TypeSupport
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef SimpleTypeSupport_ptr _ptr_type;
    typedef SimpleTypeSupport_var _var_type;
    typedef SimpleTypeSupport_out _out_type;

    // The static operations.
    static SimpleTypeSupport_ptr _duplicate (SimpleTypeSupport_ptr obj);

    static void _tao_release (SimpleTypeSupport_ptr obj);

    static SimpleTypeSupport_ptr _narrow (::CORBA::Object_ptr obj);
    static SimpleTypeSupport_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static SimpleTypeSupport_ptr _nil (void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    SimpleTypeSupport (void);

    

    virtual ~SimpleTypeSupport (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    SimpleTypeSupport (const SimpleTypeSupport &);

    void operator= (const SimpleTypeSupport &);
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_TEST_SIMPLEDATAWRITER__VAR_OUT_CH_)
#define _TEST_SIMPLEDATAWRITER__VAR_OUT_CH_

  class SimpleDataWriter;
  typedef SimpleDataWriter *SimpleDataWriter_ptr;

  typedef
    TAO_Objref_Var_T<
        SimpleDataWriter
      >
    SimpleDataWriter_var;
  
  typedef
    TAO_Objref_Out_T<
        SimpleDataWriter
      >
    SimpleDataWriter_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class  SimpleDataWriter
    : public virtual ::DDS::DataWriter
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef SimpleDataWriter_ptr _ptr_type;
    typedef SimpleDataWriter_var _var_type;
    typedef SimpleDataWriter_out _out_type;

    // The static operations.
    static SimpleDataWriter_ptr _duplicate (SimpleDataWriter_ptr obj);

    static void _tao_release (SimpleDataWriter_ptr obj);

    static SimpleDataWriter_ptr _narrow (::CORBA::Object_ptr obj);
    static SimpleDataWriter_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static SimpleDataWriter_ptr _nil (void);

    virtual ::DDS::InstanceHandle_t register_instance (
      const ::Test::Simple & instance) = 0;

    virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
      const ::Test::Simple & instance,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance (
      const ::Test::Simple & instance,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
      const ::Test::Simple & instance,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t write (
      const ::Test::Simple & instance_data,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t write_w_timestamp (
      const ::Test::Simple & instance_data,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t dispose (
      const ::Test::Simple & instance_data,
      ::DDS::InstanceHandle_t instance_handle) = 0;

    virtual ::DDS::ReturnCode_t dispose_w_timestamp (
      const ::Test::Simple & instance_data,
      ::DDS::InstanceHandle_t instance_handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::Test::Simple & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::Test::Simple & instance_data) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    SimpleDataWriter (void);

    

    virtual ~SimpleDataWriter (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    SimpleDataWriter (const SimpleDataWriter &);

    void operator= (const SimpleDataWriter &);
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_TEST_SIMPLEDATAREADER__VAR_OUT_CH_)
#define _TEST_SIMPLEDATAREADER__VAR_OUT_CH_

  class SimpleDataReader;
  typedef SimpleDataReader *SimpleDataReader_ptr;

  typedef
    TAO_Objref_Var_T<
        SimpleDataReader
      >
    SimpleDataReader_var;
  
  typedef
    TAO_Objref_Out_T<
        SimpleDataReader
      >
    SimpleDataReader_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class  SimpleDataReader
    : public virtual ::OpenDDS::DCPS::DataReaderEx
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef SimpleDataReader_ptr _ptr_type;
    typedef SimpleDataReader_var _var_type;
    typedef SimpleDataReader_out _out_type;

    // The static operations.
    static SimpleDataReader_ptr _duplicate (SimpleDataReader_ptr obj);

    static void _tao_release (SimpleDataReader_ptr obj);

    static SimpleDataReader_ptr _narrow (::CORBA::Object_ptr obj);
    static SimpleDataReader_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static SimpleDataReader_ptr _nil (void);

    virtual ::DDS::ReturnCode_t read (
      ::Test::SimpleSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take (
      ::Test::SimpleSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_w_condition (
      ::Test::SimpleSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_w_condition (
      ::Test::SimpleSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t read_next_sample (
      ::Test::Simple & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t take_next_sample (
      ::Test::Simple & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t read_instance (
      ::Test::SimpleSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_instance (
      ::Test::SimpleSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_instance_w_condition (
      ::Test::SimpleSeq & received_data,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_instance_w_condition (
      ::Test::SimpleSeq & received_data,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance (
      ::Test::SimpleSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance (
      ::Test::SimpleSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
      ::Test::SimpleSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
      ::Test::SimpleSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t return_loan (
      ::Test::SimpleSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::Test::Simple & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::Test::Simple & instance_data) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    SimpleDataReader (void);

    

    virtual ~SimpleDataReader (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    SimpleDataReader (const SimpleDataReader &);

    void operator= (const SimpleDataReader &);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module Test

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

#if !defined (_TEST_SIMPLETYPESUPPORT__TRAITS_)
#define _TEST_SIMPLETYPESUPPORT__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::SimpleTypeSupport>
  {
    static ::Test::SimpleTypeSupport_ptr duplicate (
        ::Test::SimpleTypeSupport_ptr p);
    static void release (
        ::Test::SimpleTypeSupport_ptr p);
    static ::Test::SimpleTypeSupport_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::SimpleTypeSupport_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_TEST_SIMPLEDATAWRITER__TRAITS_)
#define _TEST_SIMPLEDATAWRITER__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::SimpleDataWriter>
  {
    static ::Test::SimpleDataWriter_ptr duplicate (
        ::Test::SimpleDataWriter_ptr p);
    static void release (
        ::Test::SimpleDataWriter_ptr p);
    static ::Test::SimpleDataWriter_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::SimpleDataWriter_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_TEST_SIMPLEDATAREADER__TRAITS_)
#define _TEST_SIMPLEDATAREADER__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::SimpleDataReader>
  {
    static ::Test::SimpleDataReader_ptr duplicate (
        ::Test::SimpleDataReader_ptr p);
    static void release (
        ::Test::SimpleDataReader_ptr p);
    static ::Test::SimpleDataReader_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::SimpleDataReader_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "SimpleTypeSupportC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

