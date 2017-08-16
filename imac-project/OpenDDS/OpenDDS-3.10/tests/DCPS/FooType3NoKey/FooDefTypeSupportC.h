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

#ifndef _TAO_IDL_FOODEFTYPESUPPORTC_SUWB2S_H_
#define _TAO_IDL_FOODEFTYPESUPPORTC_SUWB2S_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "foolib_export.h"
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

#include "FooDefC.h"
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
#define TAO_EXPORT_MACRO FooLib_Export

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace Xyz
{

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:102

  typedef ::TAO::DCPS::ZeroCopyDataSeq< Xyz::Foo, DCPS_ZERO_COPY_SEQ_DEFAULT_SIZE> FooSeq;
  

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_XYZ_FOOTYPESUPPORT__VAR_OUT_CH_)
#define _XYZ_FOOTYPESUPPORT__VAR_OUT_CH_

  class FooTypeSupport;
  typedef FooTypeSupport *FooTypeSupport_ptr;

  typedef
    TAO_Objref_Var_T<
        FooTypeSupport
      >
    FooTypeSupport_var;
  
  typedef
    TAO_Objref_Out_T<
        FooTypeSupport
      >
    FooTypeSupport_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class FooLib_Export FooTypeSupport
    : public virtual ::OpenDDS::DCPS::TypeSupport
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef FooTypeSupport_ptr _ptr_type;
    typedef FooTypeSupport_var _var_type;
    typedef FooTypeSupport_out _out_type;

    // The static operations.
    static FooTypeSupport_ptr _duplicate (FooTypeSupport_ptr obj);

    static void _tao_release (FooTypeSupport_ptr obj);

    static FooTypeSupport_ptr _narrow (::CORBA::Object_ptr obj);
    static FooTypeSupport_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static FooTypeSupport_ptr _nil (void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    FooTypeSupport (void);

    

    virtual ~FooTypeSupport (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    FooTypeSupport (const FooTypeSupport &);

    void operator= (const FooTypeSupport &);
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_XYZ_FOODATAWRITER__VAR_OUT_CH_)
#define _XYZ_FOODATAWRITER__VAR_OUT_CH_

  class FooDataWriter;
  typedef FooDataWriter *FooDataWriter_ptr;

  typedef
    TAO_Objref_Var_T<
        FooDataWriter
      >
    FooDataWriter_var;
  
  typedef
    TAO_Objref_Out_T<
        FooDataWriter
      >
    FooDataWriter_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class FooLib_Export FooDataWriter
    : public virtual ::DDS::DataWriter
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef FooDataWriter_ptr _ptr_type;
    typedef FooDataWriter_var _var_type;
    typedef FooDataWriter_out _out_type;

    // The static operations.
    static FooDataWriter_ptr _duplicate (FooDataWriter_ptr obj);

    static void _tao_release (FooDataWriter_ptr obj);

    static FooDataWriter_ptr _narrow (::CORBA::Object_ptr obj);
    static FooDataWriter_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static FooDataWriter_ptr _nil (void);

    virtual ::DDS::InstanceHandle_t register_instance (
      const ::Xyz::Foo & instance) = 0;

    virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
      const ::Xyz::Foo & instance,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance (
      const ::Xyz::Foo & instance,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
      const ::Xyz::Foo & instance,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t write (
      const ::Xyz::Foo & instance_data,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t write_w_timestamp (
      const ::Xyz::Foo & instance_data,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t dispose (
      const ::Xyz::Foo & instance_data,
      ::DDS::InstanceHandle_t instance_handle) = 0;

    virtual ::DDS::ReturnCode_t dispose_w_timestamp (
      const ::Xyz::Foo & instance_data,
      ::DDS::InstanceHandle_t instance_handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::Xyz::Foo & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::Xyz::Foo & instance_data) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    FooDataWriter (void);

    

    virtual ~FooDataWriter (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    FooDataWriter (const FooDataWriter &);

    void operator= (const FooDataWriter &);
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_XYZ_FOODATAREADER__VAR_OUT_CH_)
#define _XYZ_FOODATAREADER__VAR_OUT_CH_

  class FooDataReader;
  typedef FooDataReader *FooDataReader_ptr;

  typedef
    TAO_Objref_Var_T<
        FooDataReader
      >
    FooDataReader_var;
  
  typedef
    TAO_Objref_Out_T<
        FooDataReader
      >
    FooDataReader_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class FooLib_Export FooDataReader
    : public virtual ::OpenDDS::DCPS::DataReaderEx
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef FooDataReader_ptr _ptr_type;
    typedef FooDataReader_var _var_type;
    typedef FooDataReader_out _out_type;

    // The static operations.
    static FooDataReader_ptr _duplicate (FooDataReader_ptr obj);

    static void _tao_release (FooDataReader_ptr obj);

    static FooDataReader_ptr _narrow (::CORBA::Object_ptr obj);
    static FooDataReader_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static FooDataReader_ptr _nil (void);

    virtual ::DDS::ReturnCode_t read (
      ::Xyz::FooSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take (
      ::Xyz::FooSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_w_condition (
      ::Xyz::FooSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_w_condition (
      ::Xyz::FooSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t read_next_sample (
      ::Xyz::Foo & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t take_next_sample (
      ::Xyz::Foo & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t read_instance (
      ::Xyz::FooSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_instance (
      ::Xyz::FooSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_instance_w_condition (
      ::Xyz::FooSeq & received_data,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_instance_w_condition (
      ::Xyz::FooSeq & received_data,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance (
      ::Xyz::FooSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance (
      ::Xyz::FooSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
      ::Xyz::FooSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
      ::Xyz::FooSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t return_loan (
      ::Xyz::FooSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::Xyz::Foo & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::Xyz::Foo & instance_data) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    FooDataReader (void);

    

    virtual ~FooDataReader (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    FooDataReader (const FooDataReader &);

    void operator= (const FooDataReader &);
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

#if !defined (_XYZ_FOOTYPESUPPORT__TRAITS_)
#define _XYZ_FOOTYPESUPPORT__TRAITS_

  template<>
  struct FooLib_Export Objref_Traits< ::Xyz::FooTypeSupport>
  {
    static ::Xyz::FooTypeSupport_ptr duplicate (
        ::Xyz::FooTypeSupport_ptr p);
    static void release (
        ::Xyz::FooTypeSupport_ptr p);
    static ::Xyz::FooTypeSupport_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Xyz::FooTypeSupport_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_XYZ_FOODATAWRITER__TRAITS_)
#define _XYZ_FOODATAWRITER__TRAITS_

  template<>
  struct FooLib_Export Objref_Traits< ::Xyz::FooDataWriter>
  {
    static ::Xyz::FooDataWriter_ptr duplicate (
        ::Xyz::FooDataWriter_ptr p);
    static void release (
        ::Xyz::FooDataWriter_ptr p);
    static ::Xyz::FooDataWriter_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Xyz::FooDataWriter_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_XYZ_FOODATAREADER__TRAITS_)
#define _XYZ_FOODATAREADER__TRAITS_

  template<>
  struct FooLib_Export Objref_Traits< ::Xyz::FooDataReader>
  {
    static ::Xyz::FooDataReader_ptr duplicate (
        ::Xyz::FooDataReader_ptr p);
    static void release (
        ::Xyz::FooDataReader_ptr p);
    static ::Xyz::FooDataReader_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Xyz::FooDataReader_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "FooDefTypeSupportC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

