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


#include "ReliabilityTypeSupportC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "ReliabilityTypeSupportC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Reliability::MessageTypeSupport.

Reliability::MessageTypeSupport_ptr
TAO::Objref_Traits<Reliability::MessageTypeSupport>::duplicate (
    Reliability::MessageTypeSupport_ptr p)
{
  return Reliability::MessageTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<Reliability::MessageTypeSupport>::release (
    Reliability::MessageTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

Reliability::MessageTypeSupport_ptr
TAO::Objref_Traits<Reliability::MessageTypeSupport>::nil (void)
{
  return Reliability::MessageTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Reliability::MessageTypeSupport>::marshal (
    const Reliability::MessageTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Reliability::MessageTypeSupport::MessageTypeSupport (void)
{}

Reliability::MessageTypeSupport::~MessageTypeSupport (void)
{
}

Reliability::MessageTypeSupport_ptr
Reliability::MessageTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageTypeSupport::_duplicate (
      dynamic_cast<MessageTypeSupport_ptr> (_tao_objref)
    );
}

Reliability::MessageTypeSupport_ptr
Reliability::MessageTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageTypeSupport::_duplicate (
      dynamic_cast<MessageTypeSupport_ptr> (_tao_objref)
    );
}

Reliability::MessageTypeSupport_ptr
Reliability::MessageTypeSupport::_nil (void)
{
  return 0;
}

Reliability::MessageTypeSupport_ptr
Reliability::MessageTypeSupport::_duplicate (MessageTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Reliability::MessageTypeSupport::_tao_release (MessageTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Reliability::MessageTypeSupport::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Reliability/MessageTypeSupport:1.0"
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

const char* Reliability::MessageTypeSupport::_interface_repository_id (void) const
{
  return "IDL:Reliability/MessageTypeSupport:1.0";
}

::CORBA::Boolean
Reliability::MessageTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Reliability::MessageDataWriter.

Reliability::MessageDataWriter_ptr
TAO::Objref_Traits<Reliability::MessageDataWriter>::duplicate (
    Reliability::MessageDataWriter_ptr p)
{
  return Reliability::MessageDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<Reliability::MessageDataWriter>::release (
    Reliability::MessageDataWriter_ptr p)
{
  ::CORBA::release (p);
}

Reliability::MessageDataWriter_ptr
TAO::Objref_Traits<Reliability::MessageDataWriter>::nil (void)
{
  return Reliability::MessageDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Reliability::MessageDataWriter>::marshal (
    const Reliability::MessageDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Reliability::MessageDataWriter::MessageDataWriter (void)
{}

Reliability::MessageDataWriter::~MessageDataWriter (void)
{
}

Reliability::MessageDataWriter_ptr
Reliability::MessageDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageDataWriter::_duplicate (
      dynamic_cast<MessageDataWriter_ptr> (_tao_objref)
    );
}

Reliability::MessageDataWriter_ptr
Reliability::MessageDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageDataWriter::_duplicate (
      dynamic_cast<MessageDataWriter_ptr> (_tao_objref)
    );
}

Reliability::MessageDataWriter_ptr
Reliability::MessageDataWriter::_nil (void)
{
  return 0;
}

Reliability::MessageDataWriter_ptr
Reliability::MessageDataWriter::_duplicate (MessageDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Reliability::MessageDataWriter::_tao_release (MessageDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Reliability::MessageDataWriter::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Reliability/MessageDataWriter:1.0"
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

const char* Reliability::MessageDataWriter::_interface_repository_id (void) const
{
  return "IDL:Reliability/MessageDataWriter:1.0";
}

::CORBA::Boolean
Reliability::MessageDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Reliability::MessageDataReader.

Reliability::MessageDataReader_ptr
TAO::Objref_Traits<Reliability::MessageDataReader>::duplicate (
    Reliability::MessageDataReader_ptr p)
{
  return Reliability::MessageDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<Reliability::MessageDataReader>::release (
    Reliability::MessageDataReader_ptr p)
{
  ::CORBA::release (p);
}

Reliability::MessageDataReader_ptr
TAO::Objref_Traits<Reliability::MessageDataReader>::nil (void)
{
  return Reliability::MessageDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Reliability::MessageDataReader>::marshal (
    const Reliability::MessageDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Reliability::MessageDataReader::MessageDataReader (void)
{}

Reliability::MessageDataReader::~MessageDataReader (void)
{
}

Reliability::MessageDataReader_ptr
Reliability::MessageDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageDataReader::_duplicate (
      dynamic_cast<MessageDataReader_ptr> (_tao_objref)
    );
}

Reliability::MessageDataReader_ptr
Reliability::MessageDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageDataReader::_duplicate (
      dynamic_cast<MessageDataReader_ptr> (_tao_objref)
    );
}

Reliability::MessageDataReader_ptr
Reliability::MessageDataReader::_nil (void)
{
  return 0;
}

Reliability::MessageDataReader_ptr
Reliability::MessageDataReader::_duplicate (MessageDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Reliability::MessageDataReader::_tao_release (MessageDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Reliability::MessageDataReader::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/DataReaderEx:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Reliability/MessageDataReader:1.0"
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

const char* Reliability::MessageDataReader::_interface_repository_id (void) const
{
  return "IDL:Reliability/MessageDataReader:1.0";
}

::CORBA::Boolean
Reliability::MessageDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

