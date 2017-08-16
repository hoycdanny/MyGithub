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


#include "TestTypeSupportC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "TestTypeSupportC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Ex::TestTypeSupport.

Ex::TestTypeSupport_ptr
TAO::Objref_Traits<Ex::TestTypeSupport>::duplicate (
    Ex::TestTypeSupport_ptr p)
{
  return Ex::TestTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<Ex::TestTypeSupport>::release (
    Ex::TestTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

Ex::TestTypeSupport_ptr
TAO::Objref_Traits<Ex::TestTypeSupport>::nil (void)
{
  return Ex::TestTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Ex::TestTypeSupport>::marshal (
    const Ex::TestTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Ex::TestTypeSupport::TestTypeSupport (void)
{}

Ex::TestTypeSupport::~TestTypeSupport (void)
{
}

Ex::TestTypeSupport_ptr
Ex::TestTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TestTypeSupport::_duplicate (
      dynamic_cast<TestTypeSupport_ptr> (_tao_objref)
    );
}

Ex::TestTypeSupport_ptr
Ex::TestTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TestTypeSupport::_duplicate (
      dynamic_cast<TestTypeSupport_ptr> (_tao_objref)
    );
}

Ex::TestTypeSupport_ptr
Ex::TestTypeSupport::_nil (void)
{
  return 0;
}

Ex::TestTypeSupport_ptr
Ex::TestTypeSupport::_duplicate (TestTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Ex::TestTypeSupport::_tao_release (TestTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Ex::TestTypeSupport::_is_a (const char *value)
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
          "IDL:Ex/TestTypeSupport:1.0"
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

const char* Ex::TestTypeSupport::_interface_repository_id (void) const
{
  return "IDL:Ex/TestTypeSupport:1.0";
}

::CORBA::Boolean
Ex::TestTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Ex::TestDataWriter.

Ex::TestDataWriter_ptr
TAO::Objref_Traits<Ex::TestDataWriter>::duplicate (
    Ex::TestDataWriter_ptr p)
{
  return Ex::TestDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<Ex::TestDataWriter>::release (
    Ex::TestDataWriter_ptr p)
{
  ::CORBA::release (p);
}

Ex::TestDataWriter_ptr
TAO::Objref_Traits<Ex::TestDataWriter>::nil (void)
{
  return Ex::TestDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Ex::TestDataWriter>::marshal (
    const Ex::TestDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Ex::TestDataWriter::TestDataWriter (void)
{}

Ex::TestDataWriter::~TestDataWriter (void)
{
}

Ex::TestDataWriter_ptr
Ex::TestDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TestDataWriter::_duplicate (
      dynamic_cast<TestDataWriter_ptr> (_tao_objref)
    );
}

Ex::TestDataWriter_ptr
Ex::TestDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TestDataWriter::_duplicate (
      dynamic_cast<TestDataWriter_ptr> (_tao_objref)
    );
}

Ex::TestDataWriter_ptr
Ex::TestDataWriter::_nil (void)
{
  return 0;
}

Ex::TestDataWriter_ptr
Ex::TestDataWriter::_duplicate (TestDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Ex::TestDataWriter::_tao_release (TestDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Ex::TestDataWriter::_is_a (const char *value)
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
          "IDL:Ex/TestDataWriter:1.0"
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

const char* Ex::TestDataWriter::_interface_repository_id (void) const
{
  return "IDL:Ex/TestDataWriter:1.0";
}

::CORBA::Boolean
Ex::TestDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Ex::TestDataReader.

Ex::TestDataReader_ptr
TAO::Objref_Traits<Ex::TestDataReader>::duplicate (
    Ex::TestDataReader_ptr p)
{
  return Ex::TestDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<Ex::TestDataReader>::release (
    Ex::TestDataReader_ptr p)
{
  ::CORBA::release (p);
}

Ex::TestDataReader_ptr
TAO::Objref_Traits<Ex::TestDataReader>::nil (void)
{
  return Ex::TestDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Ex::TestDataReader>::marshal (
    const Ex::TestDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Ex::TestDataReader::TestDataReader (void)
{}

Ex::TestDataReader::~TestDataReader (void)
{
}

Ex::TestDataReader_ptr
Ex::TestDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TestDataReader::_duplicate (
      dynamic_cast<TestDataReader_ptr> (_tao_objref)
    );
}

Ex::TestDataReader_ptr
Ex::TestDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TestDataReader::_duplicate (
      dynamic_cast<TestDataReader_ptr> (_tao_objref)
    );
}

Ex::TestDataReader_ptr
Ex::TestDataReader::_nil (void)
{
  return 0;
}

Ex::TestDataReader_ptr
Ex::TestDataReader::_duplicate (TestDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Ex::TestDataReader::_tao_release (TestDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Ex::TestDataReader::_is_a (const char *value)
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
          "IDL:Ex/TestDataReader:1.0"
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

const char* Ex::TestDataReader::_interface_repository_id (void) const
{
  return "IDL:Ex/TestDataReader:1.0";
}

::CORBA::Boolean
Ex::TestDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}
