// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.8.2
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
#ifndef CIAO_WU_LATEBINDING_RECEIVER_EXEC_KKU0OW_H_
#define CIAO_WU_LATEBINDING_RECEIVER_EXEC_KKU0OW_H_

#include /**/ "ace/pre.h"

#include "WU_LateBinding_ReceiverEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "Receiver_exec_export.h"
#include "tao/LocalObject.h"

namespace CIAO_WU_LateBinding_Receiver_Impl
{

  /**
   * Provider Executor Implementation Class: info_out_event_data_listener_exec_i
   */

  class info_out_event_data_listener_exec_i
    : public virtual ::WU_LateBinding::WU_LateBindingTestConnector::CCM_Listener,
      public virtual ::CORBA::LocalObject
  {
  public:
    info_out_event_data_listener_exec_i (
      ::WU_LateBinding::CCM_Receiver_Context_ptr ctx);
    virtual ~info_out_event_data_listener_exec_i (void);

    //@{
    /** Operations and attributes from WU_LateBinding::WU_LateBindingTestConnector::Listener. */

    virtual
    void on_one_data (const ::WU_LateBindingTest & datum,
    const ::CCM_DDS::ReadInfo & info);

    virtual
    void on_many_data (const ::WU_LateBindingTestSeq & data,
    const ::CCM_DDS::ReadInfoSeq & infos);
    //@}

  private:
    ::WU_LateBinding::CCM_Receiver_Context_var ciao_context_;
  };

  /**
   * Provider Executor Implementation Class: info_out_event_status_exec_i
   */

  class info_out_event_status_exec_i
    : public virtual ::CCM_DDS::CCM_PortStatusListener,
      public virtual ::CORBA::LocalObject
  {
  public:
    info_out_event_status_exec_i (
      ::WU_LateBinding::CCM_Receiver_Context_ptr ctx);
    virtual ~info_out_event_status_exec_i (void);

    //@{
    /** Operations and attributes from CCM_DDS::PortStatusListener. */

    virtual
    void on_requested_deadline_missed (::DDS::DataReader_ptr the_reader,
    const ::DDS::RequestedDeadlineMissedStatus & status);

    virtual
    void on_sample_lost (::DDS::DataReader_ptr the_reader,
    const ::DDS::SampleLostStatus & status);
    //@}

  private:
    ::WU_LateBinding::CCM_Receiver_Context_var ciao_context_;
  };

  /**
   * Provider Executor Implementation Class: info_out_state_data_listener_exec_i
   */

  class info_out_state_data_listener_exec_i
    : public virtual ::WU_LateBinding::WU_LateBindingTestConnector::CCM_StateListener,
      public virtual ::CORBA::LocalObject
  {
  public:
    info_out_state_data_listener_exec_i (
      ::WU_LateBinding::CCM_Receiver_Context_ptr ctx);
    virtual ~info_out_state_data_listener_exec_i (void);

    //@{
    /** Operations and attributes from WU_LateBinding::WU_LateBindingTestConnector::StateListener. */

    virtual
    void on_creation (const ::WU_LateBindingTest & datum,
    const ::CCM_DDS::ReadInfo & info);

    virtual
    void on_one_update (const ::WU_LateBindingTest & datum,
    const ::CCM_DDS::ReadInfo & info);

    virtual
    void on_many_updates (const ::WU_LateBindingTestSeq & data,
    const ::CCM_DDS::ReadInfoSeq & infos);

    virtual
    void on_deletion (const ::WU_LateBindingTest & datum,
    const ::CCM_DDS::ReadInfo & info);
    //@}

  private:
    ::WU_LateBinding::CCM_Receiver_Context_var ciao_context_;
  };

  /**
   * Provider Executor Implementation Class: info_out_state_status_exec_i
   */

  class info_out_state_status_exec_i
    : public virtual ::CCM_DDS::CCM_PortStatusListener,
      public virtual ::CORBA::LocalObject
  {
  public:
    info_out_state_status_exec_i (
      ::WU_LateBinding::CCM_Receiver_Context_ptr ctx);
    virtual ~info_out_state_status_exec_i (void);

    //@{
    /** Operations and attributes from CCM_DDS::PortStatusListener. */

    virtual
    void on_requested_deadline_missed (::DDS::DataReader_ptr the_reader,
    const ::DDS::RequestedDeadlineMissedStatus & status);

    virtual
    void on_sample_lost (::DDS::DataReader_ptr the_reader,
    const ::DDS::SampleLostStatus & status);
    //@}

  private:
    ::WU_LateBinding::CCM_Receiver_Context_var ciao_context_;
  };

  /**
   * Component Executor Implementation Class: Receiver_exec_i
   */

  class Receiver_exec_i
    : public virtual Receiver_Exec,
      public virtual ::CORBA::LocalObject
  {
  public:
    Receiver_exec_i (void);
    virtual ~Receiver_exec_i (void);

    //@{
    /** Supported operations and attributes. */

    //@}

    //@{
    /** Component attributes and port operations. */

    virtual ::WU_LateBinding::WU_LateBindingTestConnector::CCM_Listener_ptr
    get_info_out_event_data_listener (void);

    virtual ::CCM_DDS::CCM_PortStatusListener_ptr
    get_info_out_event_status (void);

    virtual ::WU_LateBinding::WU_LateBindingTestConnector::CCM_StateListener_ptr
    get_info_out_state_data_listener (void);

    virtual ::CCM_DDS::CCM_PortStatusListener_ptr
    get_info_out_state_status (void);

    virtual ::CORBA::UShort iterations (void);

    virtual void iterations (::CORBA::UShort iterations);
    //@}

    //@{
    /** Operations from Components::SessionComponent. */
    virtual void set_session_context (::Components::SessionContext_ptr ctx);
    virtual void configuration_complete (void);
    virtual void ccm_activate (void);
    virtual void ccm_passivate (void);
    virtual void ccm_remove (void);
    //@}

    //@{
    /** User defined public operations. */

    //@}

  private:
    ::WU_LateBinding::CCM_Receiver_Context_var ciao_context_;

    //@{
    /** Component attributes. */
    ::WU_LateBinding::WU_LateBindingTestConnector::CCM_Listener_var ciao_info_out_event_data_listener_;
    ::CCM_DDS::CCM_PortStatusListener_var ciao_info_out_event_status_;
    ::WU_LateBinding::WU_LateBindingTestConnector::CCM_StateListener_var ciao_info_out_state_data_listener_;
    ::CCM_DDS::CCM_PortStatusListener_var ciao_info_out_state_status_;

    ::CORBA::UShort iterations_;
    //@}

    //@{
    /** User defined members. */

    //@}

    //@{
    /** User defined private operations. */

    //@}
  };

  extern "C" RECEIVER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_WU_LateBinding_Receiver_Impl (void);
}

#include /**/ "ace/post.h"

#endif /* ifndef */
