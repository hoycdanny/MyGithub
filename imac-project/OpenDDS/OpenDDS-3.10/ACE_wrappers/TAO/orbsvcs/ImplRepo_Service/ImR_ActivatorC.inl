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


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ci.cpp:62

ACE_INLINE
ImplementationRepository::Activator::Activator (
    TAO_Stub *objref,
    ::CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (objref, _tao_collocated, servant, oc)
{
}

ACE_INLINE
ImplementationRepository::Activator::Activator (
    ::IOP::IOR *ior,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (ior, oc)
{
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_ci.cpp:47

ACE_INLINE
ImplementationRepository::AMH_ActivatorExceptionHolder::AMH_ActivatorExceptionHolder (void)
  : exception (0)
{}

ACE_INLINE const char*
ImplementationRepository::AMH_ActivatorExceptionHolder::_tao_obv_static_repository_id ()
{
  return "IDL:ImplementationRepository/AMH_ActivatorExceptionHolder:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ci.cpp:62

ACE_INLINE
ImplementationRepository::AMI_ActivatorHandler::AMI_ActivatorHandler (
    TAO_Stub *objref,
    ::CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (objref, _tao_collocated, servant, oc)
{
}

ACE_INLINE
ImplementationRepository::AMI_ActivatorHandler::AMI_ActivatorHandler (
    ::IOP::IOR *ior,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (ior, oc)
{
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ci.cpp:62

ACE_INLINE
ImplementationRepository::ActivatorExt::ActivatorExt (
    TAO_Stub *objref,
    ::CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (objref, _tao_collocated, servant, oc)
{
}

ACE_INLINE
ImplementationRepository::ActivatorExt::ActivatorExt (
    ::IOP::IOR *ior,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (ior, oc)
{
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_ci.cpp:47

ACE_INLINE
ImplementationRepository::AMH_ActivatorExtExceptionHolder::AMH_ActivatorExtExceptionHolder (void)
  : exception (0)
{}

ACE_INLINE const char*
ImplementationRepository::AMH_ActivatorExtExceptionHolder::_tao_obv_static_repository_id ()
{
  return "IDL:ImplementationRepository/AMH_ActivatorExtExceptionHolder:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ci.cpp:62

ACE_INLINE
ImplementationRepository::AMI_ActivatorExtHandler::AMI_ActivatorExtHandler (
    TAO_Stub *objref,
    ::CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (objref, _tao_collocated, servant, oc)
{
}

ACE_INLINE
ImplementationRepository::AMI_ActivatorExtHandler::AMI_ActivatorExtHandler (
    ::IOP::IOR *ior,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (ior, oc)
{
}


TAO_END_VERSIONED_NAMESPACE_DECL


