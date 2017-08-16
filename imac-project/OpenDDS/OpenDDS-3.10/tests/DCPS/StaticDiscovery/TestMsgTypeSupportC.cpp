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


#include "TestMsgTypeSupportC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "TestMsgTypeSupportC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for TestMsgTypeSupport.

TestMsgTypeSupport_ptr
TAO::Objref_Traits<TestMsgTypeSupport>::duplicate (
    TestMsgTypeSupport_ptr p)
{
  return TestMsgTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<TestMsgTypeSupport>::release (
    TestMsgTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

TestMsgTypeSupport_ptr
TAO::Objref_Traits<TestMsgTypeSupport>::nil (void)
{
  return TestMsgTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<TestMsgTypeSupport>::marshal (
    const TestMsgTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TestMsgTypeSupport::TestMsgTypeSupport (void)
{}

TestMsgTypeSupport::~TestMsgTypeSupport (void)
{
}

TestMsgTypeSupport_ptr
TestMsgTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TestMsgTypeSupport::_duplicate (
      dynamic_cast<TestMsgTypeSupport_ptr> (_tao_objref)
    );
}

TestMsgTypeSupport_ptr
TestMsgTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TestMsgTypeSupport::_duplicate (
      dynamic_cast<TestMsgTypeSupport_ptr> (_tao_objref)
    );
}

TestMsgTypeSupport_ptr
TestMsgTypeSupport::_nil (void)
{
  return 0;
}

TestMsgTypeSupport_ptr
TestMsgTypeSupport::_duplicate (TestMsgTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
TestMsgTypeSupport::_tao_release (TestMsgTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
TestMsgTypeSupport::_is_a (const char *value)
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
          "IDL:TestMsgTypeSupport:1.0"
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

const char* TestMsgTypeSupport::_interface_repository_id (void) const
{
  return "IDL:TestMsgTypeSupport:1.0";
}

::CORBA::Boolean
TestMsgTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for TestMsgDataWriter.

TestMsgDataWriter_ptr
TAO::Objref_Traits<TestMsgDataWriter>::duplicate (
    TestMsgDataWriter_ptr p)
{
  return TestMsgDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<TestMsgDataWriter>::release (
    TestMsgDataWriter_ptr p)
{
  ::CORBA::release (p);
}

TestMsgDataWriter_ptr
TAO::Objref_Traits<TestMsgDataWriter>::nil (void)
{
  return TestMsgDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<TestMsgDataWriter>::marshal (
    const TestMsgDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TestMsgDataWriter::TestMsgDataWriter (void)
{}

TestMsgDataWriter::~TestMsgDataWriter (void)
{
}

TestMsgDataWriter_ptr
TestMsgDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TestMsgDataWriter::_duplicate (
      dynamic_cast<TestMsgDataWriter_ptr> (_tao_objref)
    );
}

TestMsgDataWriter_ptr
TestMsgDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TestMsgDataWriter::_duplicate (
      dynamic_cast<TestMsgDataWriter_ptr> (_tao_objref)
    );
}

TestMsgDataWriter_ptr
TestMsgDataWriter::_nil (void)
{
  return 0;
}

TestMsgDataWriter_ptr
TestMsgDataWriter::_duplicate (TestMsgDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
TestMsgDataWriter::_tao_release (TestMsgDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
TestMsgDataWriter::_is_a (const char *value)
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
          "IDL:TestMsgDataWriter:1.0"
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

const char* TestMsgDataWriter::_interface_repository_id (void) const
{
  return "IDL:TestMsgDataWriter:1.0";
}

::CORBA::Boolean
TestMsgDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for TestMsgDataReader.

TestMsgDataReader_ptr
TAO::Objref_Traits<TestMsgDataReader>::duplicate (
    TestMsgDataReader_ptr p)
{
  return TestMsgDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<TestMsgDataReader>::release (
    TestMsgDataReader_ptr p)
{
  ::CORBA::release (p);
}

TestMsgDataReader_ptr
TAO::Objref_Traits<TestMsgDataReader>::nil (void)
{
  return TestMsgDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<TestMsgDataReader>::marshal (
    const TestMsgDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TestMsgDataReader::TestMsgDataReader (void)
{}

TestMsgDataReader::~TestMsgDataReader (void)
{
}

TestMsgDataReader_ptr
TestMsgDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TestMsgDataReader::_duplicate (
      dynamic_cast<TestMsgDataReader_ptr> (_tao_objref)
    );
}

TestMsgDataReader_ptr
TestMsgDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TestMsgDataReader::_duplicate (
      dynamic_cast<TestMsgDataReader_ptr> (_tao_objref)
    );
}

TestMsgDataReader_ptr
TestMsgDataReader::_nil (void)
{
  return 0;
}

TestMsgDataReader_ptr
TestMsgDataReader::_duplicate (TestMsgDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
TestMsgDataReader::_tao_release (TestMsgDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
TestMsgDataReader::_is_a (const char *value)
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
          "IDL:TestMsgDataReader:1.0"
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

const char* TestMsgDataReader::_interface_repository_id (void) const
{
  return "IDL:TestMsgDataReader:1.0";
}

::CORBA::Boolean
TestMsgDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

