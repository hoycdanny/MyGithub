// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.7.6
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
// be/be_codegen.cpp:1273

#include "CompB_exec.h"

namespace CIAO_CompB_Impl
{
  //============================================================
  // Component Executor Implementation Class: CompB_exec_i
  //============================================================

  CompB_exec_i::CompB_exec_i (void)
  {
  }

  CompB_exec_i::~CompB_exec_i (void)
  {
  }

  // Supported operations and attributes.

  // Component attributes and port operations.

  // Operations from Components::SessionComponent.

  void
  CompB_exec_i::set_session_context (
    ::Components::SessionContext_ptr ctx)
  {
    ACE_DEBUG ((LM_DEBUG, "CompB_exec_i::set_session_context\n"));

    this->context_ =
      ::CCM_CompB_Context::_narrow (ctx);

    if ( ::CORBA::is_nil (this->context_.in ()))
      {
        throw ::CORBA::INTERNAL ();
      }
  }

  void
  CompB_exec_i::configuration_complete (void)
  {
    /* Your code here. */
    ACE_DEBUG ((LM_DEBUG, "CompB_exec_i::configuration_complete\n"));
  }

  void
  CompB_exec_i::ccm_activate (void)
  {
    /* Your code here. */
    ACE_DEBUG ((LM_DEBUG, "CompB_exec_i::ccm_activate\n"));

    ::CompB::my_mooConnections_var moos = this->context_->get_connections_my_moo();

    for(CORBA::ULong i = 0; i < moos->length(); ++i)
    {
      moos[i].objref->do_something();
    }
  }

  void
  CompB_exec_i::ccm_passivate (void)
  {
    /* Your code here. */
    ACE_DEBUG ((LM_DEBUG, "CompB_exec_i::ccm_passivate\n"));
  }

  void
  CompB_exec_i::ccm_remove (void)
  {
    /* Your code here. */
    ACE_DEBUG ((LM_DEBUG, "CompB_exec_i::ccm_remove\n"));
  }

  extern "C" COMPB_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_CompB_Impl (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_NORETURN (
      retval,
      CompB_exec_i);

    return retval;
  }
}

