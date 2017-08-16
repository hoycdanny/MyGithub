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


#include "tao/PI/PI.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for PortableInterceptor::ORBInitializer.

PortableInterceptor::ORBInitializer_ptr
TAO::Objref_Traits<PortableInterceptor::ORBInitializer>::duplicate (
    PortableInterceptor::ORBInitializer_ptr p)
{
  return PortableInterceptor::ORBInitializer::_duplicate (p);
}

void
TAO::Objref_Traits<PortableInterceptor::ORBInitializer>::release (
    PortableInterceptor::ORBInitializer_ptr p)
{
  ::CORBA::release (p);
}

PortableInterceptor::ORBInitializer_ptr
TAO::Objref_Traits<PortableInterceptor::ORBInitializer>::nil (void)
{
  return PortableInterceptor::ORBInitializer::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<PortableInterceptor::ORBInitializer>::marshal (
    const PortableInterceptor::ORBInitializer_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

PortableInterceptor::ORBInitializer::ORBInitializer (void)
{}

PortableInterceptor::ORBInitializer::~ORBInitializer (void)
{
}

PortableInterceptor::ORBInitializer_ptr
PortableInterceptor::ORBInitializer::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return ORBInitializer::_duplicate (
      dynamic_cast<ORBInitializer_ptr> (_tao_objref)
    );
}

PortableInterceptor::ORBInitializer_ptr
PortableInterceptor::ORBInitializer::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return ORBInitializer::_duplicate (
      dynamic_cast<ORBInitializer_ptr> (_tao_objref)
    );
}

PortableInterceptor::ORBInitializer_ptr
PortableInterceptor::ORBInitializer::_nil (void)
{
  return 0;
}

PortableInterceptor::ORBInitializer_ptr
PortableInterceptor::ORBInitializer::_duplicate (ORBInitializer_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
PortableInterceptor::ORBInitializer::_tao_release (ORBInitializer_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
PortableInterceptor::ORBInitializer::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableInterceptor/ORBInitializer:1.0"
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

const char* PortableInterceptor::ORBInitializer::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableInterceptor/ORBInitializer:1.0";
}

::CORBA::Boolean
PortableInterceptor::ORBInitializer::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}


TAO_END_VERSIONED_NAMESPACE_DECL


