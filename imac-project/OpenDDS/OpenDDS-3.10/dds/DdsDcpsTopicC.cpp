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

#include "DCPS/DdsDcps_pch.h"
#include "DdsDcpsTopicC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "DdsDcpsTopicC.inl"
#endif /* !defined INLINE */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for DDS::TopicDescription.

DDS::TopicDescription_ptr
TAO::Objref_Traits<DDS::TopicDescription>::duplicate (
    DDS::TopicDescription_ptr p)
{
  return DDS::TopicDescription::_duplicate (p);
}

void
TAO::Objref_Traits<DDS::TopicDescription>::release (
    DDS::TopicDescription_ptr p)
{
  ::CORBA::release (p);
}

DDS::TopicDescription_ptr
TAO::Objref_Traits<DDS::TopicDescription>::nil (void)
{
  return DDS::TopicDescription::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<DDS::TopicDescription>::marshal (
    const DDS::TopicDescription_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

DDS::TopicDescription::TopicDescription (void)
{}

DDS::TopicDescription::~TopicDescription (void)
{
}

DDS::TopicDescription_ptr
DDS::TopicDescription::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TopicDescription::_duplicate (
      dynamic_cast<TopicDescription_ptr> (_tao_objref)
    );
}

DDS::TopicDescription_ptr
DDS::TopicDescription::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TopicDescription::_duplicate (
      dynamic_cast<TopicDescription_ptr> (_tao_objref)
    );
}

DDS::TopicDescription_ptr
DDS::TopicDescription::_nil (void)
{
  return 0;
}

DDS::TopicDescription_ptr
DDS::TopicDescription::_duplicate (TopicDescription_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
DDS::TopicDescription::_tao_release (TopicDescription_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
DDS::TopicDescription::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TopicDescription:1.0"
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

const char* DDS::TopicDescription::_interface_repository_id (void) const
{
  return "IDL:DDS/TopicDescription:1.0";
}

::CORBA::Boolean
DDS::TopicDescription::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for DDS::TopicListener.

DDS::TopicListener_ptr
TAO::Objref_Traits<DDS::TopicListener>::duplicate (
    DDS::TopicListener_ptr p)
{
  return DDS::TopicListener::_duplicate (p);
}

void
TAO::Objref_Traits<DDS::TopicListener>::release (
    DDS::TopicListener_ptr p)
{
  ::CORBA::release (p);
}

DDS::TopicListener_ptr
TAO::Objref_Traits<DDS::TopicListener>::nil (void)
{
  return DDS::TopicListener::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<DDS::TopicListener>::marshal (
    const DDS::TopicListener_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

DDS::TopicListener::TopicListener (void)
{}

DDS::TopicListener::~TopicListener (void)
{
}

DDS::TopicListener_ptr
DDS::TopicListener::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TopicListener::_duplicate (
      dynamic_cast<TopicListener_ptr> (_tao_objref)
    );
}

DDS::TopicListener_ptr
DDS::TopicListener::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TopicListener::_duplicate (
      dynamic_cast<TopicListener_ptr> (_tao_objref)
    );
}

DDS::TopicListener_ptr
DDS::TopicListener::_nil (void)
{
  return 0;
}

DDS::TopicListener_ptr
DDS::TopicListener::_duplicate (TopicListener_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
DDS::TopicListener::_tao_release (TopicListener_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
DDS::TopicListener::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Listener:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TopicListener:1.0"
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

const char* DDS::TopicListener::_interface_repository_id (void) const
{
  return "IDL:DDS/TopicListener:1.0";
}

::CORBA::Boolean
DDS::TopicListener::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for DDS::Topic.

DDS::Topic_ptr
TAO::Objref_Traits<DDS::Topic>::duplicate (
    DDS::Topic_ptr p)
{
  return DDS::Topic::_duplicate (p);
}

void
TAO::Objref_Traits<DDS::Topic>::release (
    DDS::Topic_ptr p)
{
  ::CORBA::release (p);
}

DDS::Topic_ptr
TAO::Objref_Traits<DDS::Topic>::nil (void)
{
  return DDS::Topic::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<DDS::Topic>::marshal (
    const DDS::Topic_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

DDS::Topic::Topic (void)
{}

DDS::Topic::~Topic (void)
{
}

DDS::Topic_ptr
DDS::Topic::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Topic::_duplicate (
      dynamic_cast<Topic_ptr> (_tao_objref)
    );
}

DDS::Topic_ptr
DDS::Topic::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Topic::_duplicate (
      dynamic_cast<Topic_ptr> (_tao_objref)
    );
}

DDS::Topic_ptr
DDS::Topic::_nil (void)
{
  return 0;
}

DDS::Topic_ptr
DDS::Topic::_duplicate (Topic_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
DDS::Topic::_tao_release (Topic_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
DDS::Topic::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TopicDescription:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Topic:1.0"
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

const char* DDS::Topic::_interface_repository_id (void) const
{
  return "IDL:DDS/Topic:1.0";
}

::CORBA::Boolean
DDS::Topic::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for DDS::ContentFilteredTopic.

DDS::ContentFilteredTopic_ptr
TAO::Objref_Traits<DDS::ContentFilteredTopic>::duplicate (
    DDS::ContentFilteredTopic_ptr p)
{
  return DDS::ContentFilteredTopic::_duplicate (p);
}

void
TAO::Objref_Traits<DDS::ContentFilteredTopic>::release (
    DDS::ContentFilteredTopic_ptr p)
{
  ::CORBA::release (p);
}

DDS::ContentFilteredTopic_ptr
TAO::Objref_Traits<DDS::ContentFilteredTopic>::nil (void)
{
  return DDS::ContentFilteredTopic::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<DDS::ContentFilteredTopic>::marshal (
    const DDS::ContentFilteredTopic_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

DDS::ContentFilteredTopic::ContentFilteredTopic (void)
{}

DDS::ContentFilteredTopic::~ContentFilteredTopic (void)
{
}

DDS::ContentFilteredTopic_ptr
DDS::ContentFilteredTopic::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return ContentFilteredTopic::_duplicate (
      dynamic_cast<ContentFilteredTopic_ptr> (_tao_objref)
    );
}

DDS::ContentFilteredTopic_ptr
DDS::ContentFilteredTopic::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return ContentFilteredTopic::_duplicate (
      dynamic_cast<ContentFilteredTopic_ptr> (_tao_objref)
    );
}

DDS::ContentFilteredTopic_ptr
DDS::ContentFilteredTopic::_nil (void)
{
  return 0;
}

DDS::ContentFilteredTopic_ptr
DDS::ContentFilteredTopic::_duplicate (ContentFilteredTopic_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
DDS::ContentFilteredTopic::_tao_release (ContentFilteredTopic_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
DDS::ContentFilteredTopic::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TopicDescription:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/ContentFilteredTopic:1.0"
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

const char* DDS::ContentFilteredTopic::_interface_repository_id (void) const
{
  return "IDL:DDS/ContentFilteredTopic:1.0";
}

::CORBA::Boolean
DDS::ContentFilteredTopic::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for DDS::MultiTopic.

DDS::MultiTopic_ptr
TAO::Objref_Traits<DDS::MultiTopic>::duplicate (
    DDS::MultiTopic_ptr p)
{
  return DDS::MultiTopic::_duplicate (p);
}

void
TAO::Objref_Traits<DDS::MultiTopic>::release (
    DDS::MultiTopic_ptr p)
{
  ::CORBA::release (p);
}

DDS::MultiTopic_ptr
TAO::Objref_Traits<DDS::MultiTopic>::nil (void)
{
  return DDS::MultiTopic::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<DDS::MultiTopic>::marshal (
    const DDS::MultiTopic_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

DDS::MultiTopic::MultiTopic (void)
{}

DDS::MultiTopic::~MultiTopic (void)
{
}

DDS::MultiTopic_ptr
DDS::MultiTopic::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MultiTopic::_duplicate (
      dynamic_cast<MultiTopic_ptr> (_tao_objref)
    );
}

DDS::MultiTopic_ptr
DDS::MultiTopic::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MultiTopic::_duplicate (
      dynamic_cast<MultiTopic_ptr> (_tao_objref)
    );
}

DDS::MultiTopic_ptr
DDS::MultiTopic::_nil (void)
{
  return 0;
}

DDS::MultiTopic_ptr
DDS::MultiTopic::_duplicate (MultiTopic_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
DDS::MultiTopic::_tao_release (MultiTopic_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
DDS::MultiTopic::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TopicDescription:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/MultiTopic:1.0"
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

const char* DDS::MultiTopic::_interface_repository_id (void) const
{
  return "IDL:DDS/MultiTopic:1.0";
}

::CORBA::Boolean
DDS::MultiTopic::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for DDS::TypeSupport.

DDS::TypeSupport_ptr
TAO::Objref_Traits<DDS::TypeSupport>::duplicate (
    DDS::TypeSupport_ptr p)
{
  return DDS::TypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<DDS::TypeSupport>::release (
    DDS::TypeSupport_ptr p)
{
  ::CORBA::release (p);
}

DDS::TypeSupport_ptr
TAO::Objref_Traits<DDS::TypeSupport>::nil (void)
{
  return DDS::TypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<DDS::TypeSupport>::marshal (
    const DDS::TypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

DDS::TypeSupport::TypeSupport (void)
{}

DDS::TypeSupport::~TypeSupport (void)
{
}

DDS::TypeSupport_ptr
DDS::TypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TypeSupport::_duplicate (
      dynamic_cast<TypeSupport_ptr> (_tao_objref)
    );
}

DDS::TypeSupport_ptr
DDS::TypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TypeSupport::_duplicate (
      dynamic_cast<TypeSupport_ptr> (_tao_objref)
    );
}

DDS::TypeSupport_ptr
DDS::TypeSupport::_nil (void)
{
  return 0;
}

DDS::TypeSupport_ptr
DDS::TypeSupport::_duplicate (TypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
DDS::TypeSupport::_tao_release (TypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
DDS::TypeSupport::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TypeSupport:1.0"
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

const char* DDS::TypeSupport::_interface_repository_id (void) const
{
  return "IDL:DDS/TypeSupport:1.0";
}

::CORBA::Boolean
DDS::TypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}


OPENDDS_END_VERSIONED_NAMESPACE_DECL

