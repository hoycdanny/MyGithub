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


#include "CSD_FrameworkC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for CSD_Framework::Strategy.

CSD_Framework::Strategy_ptr
TAO::Objref_Traits<CSD_Framework::Strategy>::duplicate (
    CSD_Framework::Strategy_ptr p)
{
  return CSD_Framework::Strategy::_duplicate (p);
}

void
TAO::Objref_Traits<CSD_Framework::Strategy>::release (
    CSD_Framework::Strategy_ptr p)
{
  ::CORBA::release (p);
}

CSD_Framework::Strategy_ptr
TAO::Objref_Traits<CSD_Framework::Strategy>::nil (void)
{
  return CSD_Framework::Strategy::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<CSD_Framework::Strategy>::marshal (
    const CSD_Framework::Strategy_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

CSD_Framework::Strategy::Strategy (void)
{}

CSD_Framework::Strategy::~Strategy (void)
{
}

CSD_Framework::Strategy_ptr
CSD_Framework::Strategy::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Strategy::_duplicate (
      dynamic_cast<Strategy_ptr> (_tao_objref)
    );
}

CSD_Framework::Strategy_ptr
CSD_Framework::Strategy::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Strategy::_duplicate (
      dynamic_cast<Strategy_ptr> (_tao_objref)
    );
}

CSD_Framework::Strategy_ptr
CSD_Framework::Strategy::_nil (void)
{
  return 0;
}

CSD_Framework::Strategy_ptr
CSD_Framework::Strategy::_duplicate (Strategy_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
CSD_Framework::Strategy::_tao_release (Strategy_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
CSD_Framework::Strategy::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:CSD_Framework/Strategy:2.3"
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

const char* CSD_Framework::Strategy::_interface_repository_id (void) const
{
  return "IDL:CSD_Framework/Strategy:2.3";
}

::CORBA::Boolean
CSD_Framework::Strategy::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for CSD_Framework::POA.

CSD_Framework::POA_ptr
TAO::Objref_Traits<CSD_Framework::POA>::duplicate (
    CSD_Framework::POA_ptr p)
{
  return CSD_Framework::POA::_duplicate (p);
}

void
TAO::Objref_Traits<CSD_Framework::POA>::release (
    CSD_Framework::POA_ptr p)
{
  ::CORBA::release (p);
}

CSD_Framework::POA_ptr
TAO::Objref_Traits<CSD_Framework::POA>::nil (void)
{
  return CSD_Framework::POA::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<CSD_Framework::POA>::marshal (
    const CSD_Framework::POA_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

CSD_Framework::POA::POA (void)
{}

CSD_Framework::POA::~POA (void)
{
}

CSD_Framework::POA_ptr
CSD_Framework::POA::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return POA::_duplicate (
      dynamic_cast<POA_ptr> (_tao_objref)
    );
}

CSD_Framework::POA_ptr
CSD_Framework::POA::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return POA::_duplicate (
      dynamic_cast<POA_ptr> (_tao_objref)
    );
}

CSD_Framework::POA_ptr
CSD_Framework::POA::_nil (void)
{
  return 0;
}

CSD_Framework::POA_ptr
CSD_Framework::POA::_duplicate (POA_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
CSD_Framework::POA::_tao_release (POA_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
CSD_Framework::POA::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableServer/POA:2.3"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:CSD_Framework/POA:2.3"
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

const char* CSD_Framework::POA::_interface_repository_id (void) const
{
  return "IDL:CSD_Framework/POA:2.3";
}

::CORBA::Boolean
CSD_Framework::POA::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}


TAO_END_VERSIONED_NAMESPACE_DECL


