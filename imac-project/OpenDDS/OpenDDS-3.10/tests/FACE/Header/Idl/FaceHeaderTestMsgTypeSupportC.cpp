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


#include "FaceHeaderTestMsgTypeSupportC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "FaceHeaderTestMsgTypeSupportC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for HeaderTest::MessageTypeSupport.

HeaderTest::MessageTypeSupport_ptr
TAO::Objref_Traits<HeaderTest::MessageTypeSupport>::duplicate (
    HeaderTest::MessageTypeSupport_ptr p)
{
  return HeaderTest::MessageTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<HeaderTest::MessageTypeSupport>::release (
    HeaderTest::MessageTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

HeaderTest::MessageTypeSupport_ptr
TAO::Objref_Traits<HeaderTest::MessageTypeSupport>::nil (void)
{
  return HeaderTest::MessageTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<HeaderTest::MessageTypeSupport>::marshal (
    const HeaderTest::MessageTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

HeaderTest::MessageTypeSupport::MessageTypeSupport (void)
{}

HeaderTest::MessageTypeSupport::~MessageTypeSupport (void)
{
}

HeaderTest::MessageTypeSupport_ptr
HeaderTest::MessageTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageTypeSupport::_duplicate (
      dynamic_cast<MessageTypeSupport_ptr> (_tao_objref)
    );
}

HeaderTest::MessageTypeSupport_ptr
HeaderTest::MessageTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageTypeSupport::_duplicate (
      dynamic_cast<MessageTypeSupport_ptr> (_tao_objref)
    );
}

HeaderTest::MessageTypeSupport_ptr
HeaderTest::MessageTypeSupport::_nil (void)
{
  return 0;
}

HeaderTest::MessageTypeSupport_ptr
HeaderTest::MessageTypeSupport::_duplicate (MessageTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
HeaderTest::MessageTypeSupport::_tao_release (MessageTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
HeaderTest::MessageTypeSupport::_is_a (const char *value)
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
          "IDL:HeaderTest/MessageTypeSupport:1.0"
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

const char* HeaderTest::MessageTypeSupport::_interface_repository_id (void) const
{
  return "IDL:HeaderTest/MessageTypeSupport:1.0";
}

::CORBA::Boolean
HeaderTest::MessageTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for HeaderTest::MessageDataWriter.

HeaderTest::MessageDataWriter_ptr
TAO::Objref_Traits<HeaderTest::MessageDataWriter>::duplicate (
    HeaderTest::MessageDataWriter_ptr p)
{
  return HeaderTest::MessageDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<HeaderTest::MessageDataWriter>::release (
    HeaderTest::MessageDataWriter_ptr p)
{
  ::CORBA::release (p);
}

HeaderTest::MessageDataWriter_ptr
TAO::Objref_Traits<HeaderTest::MessageDataWriter>::nil (void)
{
  return HeaderTest::MessageDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<HeaderTest::MessageDataWriter>::marshal (
    const HeaderTest::MessageDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

HeaderTest::MessageDataWriter::MessageDataWriter (void)
{}

HeaderTest::MessageDataWriter::~MessageDataWriter (void)
{
}

HeaderTest::MessageDataWriter_ptr
HeaderTest::MessageDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageDataWriter::_duplicate (
      dynamic_cast<MessageDataWriter_ptr> (_tao_objref)
    );
}

HeaderTest::MessageDataWriter_ptr
HeaderTest::MessageDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageDataWriter::_duplicate (
      dynamic_cast<MessageDataWriter_ptr> (_tao_objref)
    );
}

HeaderTest::MessageDataWriter_ptr
HeaderTest::MessageDataWriter::_nil (void)
{
  return 0;
}

HeaderTest::MessageDataWriter_ptr
HeaderTest::MessageDataWriter::_duplicate (MessageDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
HeaderTest::MessageDataWriter::_tao_release (MessageDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
HeaderTest::MessageDataWriter::_is_a (const char *value)
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
          "IDL:HeaderTest/MessageDataWriter:1.0"
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

const char* HeaderTest::MessageDataWriter::_interface_repository_id (void) const
{
  return "IDL:HeaderTest/MessageDataWriter:1.0";
}

::CORBA::Boolean
HeaderTest::MessageDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for HeaderTest::MessageDataReader.

HeaderTest::MessageDataReader_ptr
TAO::Objref_Traits<HeaderTest::MessageDataReader>::duplicate (
    HeaderTest::MessageDataReader_ptr p)
{
  return HeaderTest::MessageDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<HeaderTest::MessageDataReader>::release (
    HeaderTest::MessageDataReader_ptr p)
{
  ::CORBA::release (p);
}

HeaderTest::MessageDataReader_ptr
TAO::Objref_Traits<HeaderTest::MessageDataReader>::nil (void)
{
  return HeaderTest::MessageDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<HeaderTest::MessageDataReader>::marshal (
    const HeaderTest::MessageDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

HeaderTest::MessageDataReader::MessageDataReader (void)
{}

HeaderTest::MessageDataReader::~MessageDataReader (void)
{
}

HeaderTest::MessageDataReader_ptr
HeaderTest::MessageDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageDataReader::_duplicate (
      dynamic_cast<MessageDataReader_ptr> (_tao_objref)
    );
}

HeaderTest::MessageDataReader_ptr
HeaderTest::MessageDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageDataReader::_duplicate (
      dynamic_cast<MessageDataReader_ptr> (_tao_objref)
    );
}

HeaderTest::MessageDataReader_ptr
HeaderTest::MessageDataReader::_nil (void)
{
  return 0;
}

HeaderTest::MessageDataReader_ptr
HeaderTest::MessageDataReader::_duplicate (MessageDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
HeaderTest::MessageDataReader::_tao_release (MessageDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
HeaderTest::MessageDataReader::_is_a (const char *value)
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
          "IDL:HeaderTest/MessageDataReader:1.0"
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

const char* HeaderTest::MessageDataReader::_interface_repository_id (void) const
{
  return "IDL:HeaderTest/MessageDataReader:1.0";
}

::CORBA::Boolean
HeaderTest::MessageDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

