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
// be/be_codegen.cpp:376


#include "AdapterActivatorC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for PortableServer::AdapterActivator.

PortableServer::AdapterActivator_ptr
TAO::Objref_Traits<PortableServer::AdapterActivator>::duplicate (
    PortableServer::AdapterActivator_ptr p)
{
  return PortableServer::AdapterActivator::_duplicate (p);
}

void
TAO::Objref_Traits<PortableServer::AdapterActivator>::release (
    PortableServer::AdapterActivator_ptr p)
{
  ::CORBA::release (p);
}

PortableServer::AdapterActivator_ptr
TAO::Objref_Traits<PortableServer::AdapterActivator>::nil (void)
{
  return PortableServer::AdapterActivator::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<PortableServer::AdapterActivator>::marshal (
    const PortableServer::AdapterActivator_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

PortableServer::AdapterActivator::AdapterActivator (void)
{}

PortableServer::AdapterActivator::~AdapterActivator (void)
{
}

PortableServer::AdapterActivator_ptr
PortableServer::AdapterActivator::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return AdapterActivator::_duplicate (
      dynamic_cast<AdapterActivator_ptr> (_tao_objref)
    );
}

PortableServer::AdapterActivator_ptr
PortableServer::AdapterActivator::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return AdapterActivator::_duplicate (
      dynamic_cast<AdapterActivator_ptr> (_tao_objref)
    );
}

PortableServer::AdapterActivator_ptr
PortableServer::AdapterActivator::_nil (void)
{
  return 0;
}

PortableServer::AdapterActivator_ptr
PortableServer::AdapterActivator::_duplicate (AdapterActivator_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
PortableServer::AdapterActivator::_tao_release (AdapterActivator_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
PortableServer::AdapterActivator::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableServer/AdapterActivator:2.3"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* PortableServer::AdapterActivator::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableServer/AdapterActivator:2.3";
}

::CORBA::Boolean
PortableServer::AdapterActivator::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}


TAO_END_VERSIONED_NAMESPACE_DECL


