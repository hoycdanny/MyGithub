// -*- C++ -*-
// $Id: CSL_USTest_Sender_exec.h 2179 2013-05-28 22:16:51Z mesnierp $

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.8.3
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
#ifndef CIAO_CSL_USTEST_SENDER_EXEC_R1USM7_H_
#define CIAO_CSL_USTEST_SENDER_EXEC_R1USM7_H_

#include /**/ "ace/pre.h"

#include "CSL_USTest_SenderEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "Sender_exec_export.h"
#include "tao/LocalObject.h"

#include <map>

namespace CIAO_CSL_USTest_Sender_Impl
{
  typedef ACE_Atomic_Op <TAO_SYNCH_MUTEX, CORBA::Boolean > Atomic_Boolean;

  class Sender_exec_i;

  /**
   * Write action generator
   */

  class pulse_Generator :
    public ACE_Event_Handler
  {
  public:
    pulse_Generator (Sender_exec_i &callback);

    virtual int handle_timeout (const ACE_Time_Value &tv,
                                const void *arg);
  private:
    Sender_exec_i &pulse_callback_;
  };

  /**
   * Provider Executor Implementation Class: test_topic_connector_status_exec_i
   */

  class test_topic_connector_status_exec_i
    : public virtual ::CCM_DDS::CCM_ConnectorStatusListener,
      public virtual ::CORBA::LocalObject
  {
  public:
    test_topic_connector_status_exec_i (
      ::CSL_USTest::CCM_Sender_Context_ptr ctx,
      Atomic_Boolean &publication_matched_received,
      Atomic_Boolean &liveliness_lost_received,
      Atomic_Boolean &reliable_dr_activity_changed_received,
      Atomic_Boolean &reliable_writer_cache_changed_received,
      ACE_Thread_ID &thread_id_publication_matched,
      ACE_Thread_ID &thread_id_liveliness_lost,
      ACE_Thread_ID &thread_id_reliable_dr_activity_changed,
      ACE_Thread_ID &thread_id_reliable_writer_cache_changed);
    virtual ~test_topic_connector_status_exec_i (void);

    //@{
    /** Operations and attributes from CCM_DDS::ConnectorStatusListener. */

    virtual
    void on_inconsistent_topic (::DDS::Topic_ptr the_topic,
    const ::DDS::InconsistentTopicStatus & status);

    virtual
    void on_requested_incompatible_qos (::DDS::DataReader_ptr the_reader,
    const ::DDS::RequestedIncompatibleQosStatus & status);

    virtual
    void on_sample_rejected (::DDS::DataReader_ptr the_reader,
    const ::DDS::SampleRejectedStatus & status);

    virtual
    void on_offered_deadline_missed (::DDS::DataWriter_ptr the_writer,
    const ::DDS::OfferedDeadlineMissedStatus & status);

    virtual
    void on_offered_incompatible_qos (::DDS::DataWriter_ptr the_writer,
    const ::DDS::OfferedIncompatibleQosStatus & status);

    virtual
    void on_unexpected_status (::DDS::Entity_ptr the_entity,
    ::DDS::StatusKind status_kind);
    //@}

  private:
    ::CSL_USTest::CCM_Sender_Context_var ciao_context_;
    Atomic_Boolean &publication_matched_received_;
    Atomic_Boolean &liveliness_lost_received_;
    Atomic_Boolean &reliable_dr_activity_changed_received_;
    Atomic_Boolean &reliable_writer_cache_changed_received_;
    ACE_Thread_ID &thread_id_publication_matched_;
    ACE_Thread_ID &thread_id_liveliness_lost_;
    ACE_Thread_ID &thread_id_reliable_dr_activity_changed_;
    ACE_Thread_ID &thread_id_reliable_writer_cache_changed_;
  };

  /**
   * Component Executor Implementation Class: Sender_exec_i
   */

  class Sender_exec_i
    : public virtual Sender_Exec,
      public virtual ::CORBA::LocalObject
  {
  public:
    Sender_exec_i (void);
    virtual ~Sender_exec_i (void);

    //@{
    /** Supported operations and attributes. */

    //@}

    //@{
    /** Component attributes and port operations. */

    virtual ::CCM_DDS::CCM_ConnectorStatusListener_ptr
    get_test_topic_connector_status (void);
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
    void tick (void);

    //@}

  private:
    ::CSL_USTest::CCM_Sender_Context_var ciao_context_;

    //@{
    /** Component attributes. */
    ::CCM_DDS::CCM_ConnectorStatusListener_var ciao_test_topic_connector_status_;
    //@}

    //@{
    /** User defined members. */
    Atomic_Boolean publication_matched_received_;
    Atomic_Boolean liveliness_lost_received_;
    Atomic_Boolean reliable_dr_activity_changed_received_;
    Atomic_Boolean reliable_writer_cache_changed_received_;
    ACE_Thread_ID thread_id_listener_publication_matched_;
    ACE_Thread_ID thread_id_listener_liveliness_lost_;
    ACE_Thread_ID thread_id_reliable_dr_activity_changed_;
    ACE_Thread_ID thread_id_reliable_writer_cache_changed_;
    pulse_Generator * ticker_;

    TAO_SYNCH_MUTEX mutex_;
    typedef std::map<ACE_CString, TestTopic_var> CSL_SRTest_Table;
    CSL_SRTest_Table _ktests_;

    //@}

    //@{
    /** User defined private operations. */
    void add_instance_of_topic (const char *, int x);

    //@}

    /// Get the ACE_Reactor
    ACE_Reactor* reactor (void);
  };

  extern "C" SENDER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_CSL_USTest_Sender_Impl (void);
}

#include /**/ "ace/post.h"

#endif /* ifndef */
