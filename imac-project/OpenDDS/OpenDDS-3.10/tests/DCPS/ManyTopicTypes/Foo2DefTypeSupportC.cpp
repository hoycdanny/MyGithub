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


#include "Foo2DefTypeSupportC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "Foo2DefTypeSupportC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for T2::Foo2TypeSupport.

T2::Foo2TypeSupport_ptr
TAO::Objref_Traits<T2::Foo2TypeSupport>::duplicate (
    T2::Foo2TypeSupport_ptr p)
{
  return T2::Foo2TypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<T2::Foo2TypeSupport>::release (
    T2::Foo2TypeSupport_ptr p)
{
  ::CORBA::release (p);
}

T2::Foo2TypeSupport_ptr
TAO::Objref_Traits<T2::Foo2TypeSupport>::nil (void)
{
  return T2::Foo2TypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<T2::Foo2TypeSupport>::marshal (
    const T2::Foo2TypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

T2::Foo2TypeSupport::Foo2TypeSupport (void)
{}

T2::Foo2TypeSupport::~Foo2TypeSupport (void)
{
}

T2::Foo2TypeSupport_ptr
T2::Foo2TypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Foo2TypeSupport::_duplicate (
      dynamic_cast<Foo2TypeSupport_ptr> (_tao_objref)
    );
}

T2::Foo2TypeSupport_ptr
T2::Foo2TypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Foo2TypeSupport::_duplicate (
      dynamic_cast<Foo2TypeSupport_ptr> (_tao_objref)
    );
}

T2::Foo2TypeSupport_ptr
T2::Foo2TypeSupport::_nil (void)
{
  return 0;
}

T2::Foo2TypeSupport_ptr
T2::Foo2TypeSupport::_duplicate (Foo2TypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
T2::Foo2TypeSupport::_tao_release (Foo2TypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
T2::Foo2TypeSupport::_is_a (const char *value)
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
          "IDL:T2/Foo2TypeSupport:1.0"
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

const char* T2::Foo2TypeSupport::_interface_repository_id (void) const
{
  return "IDL:T2/Foo2TypeSupport:1.0";
}

::CORBA::Boolean
T2::Foo2TypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for T2::Foo2DataWriter.

T2::Foo2DataWriter_ptr
TAO::Objref_Traits<T2::Foo2DataWriter>::duplicate (
    T2::Foo2DataWriter_ptr p)
{
  return T2::Foo2DataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<T2::Foo2DataWriter>::release (
    T2::Foo2DataWriter_ptr p)
{
  ::CORBA::release (p);
}

T2::Foo2DataWriter_ptr
TAO::Objref_Traits<T2::Foo2DataWriter>::nil (void)
{
  return T2::Foo2DataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<T2::Foo2DataWriter>::marshal (
    const T2::Foo2DataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

T2::Foo2DataWriter::Foo2DataWriter (void)
{}

T2::Foo2DataWriter::~Foo2DataWriter (void)
{
}

T2::Foo2DataWriter_ptr
T2::Foo2DataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Foo2DataWriter::_duplicate (
      dynamic_cast<Foo2DataWriter_ptr> (_tao_objref)
    );
}

T2::Foo2DataWriter_ptr
T2::Foo2DataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Foo2DataWriter::_duplicate (
      dynamic_cast<Foo2DataWriter_ptr> (_tao_objref)
    );
}

T2::Foo2DataWriter_ptr
T2::Foo2DataWriter::_nil (void)
{
  return 0;
}

T2::Foo2DataWriter_ptr
T2::Foo2DataWriter::_duplicate (Foo2DataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
T2::Foo2DataWriter::_tao_release (Foo2DataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
T2::Foo2DataWriter::_is_a (const char *value)
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
          "IDL:T2/Foo2DataWriter:1.0"
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

const char* T2::Foo2DataWriter::_interface_repository_id (void) const
{
  return "IDL:T2/Foo2DataWriter:1.0";
}

::CORBA::Boolean
T2::Foo2DataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for T2::Foo2DataReader.

T2::Foo2DataReader_ptr
TAO::Objref_Traits<T2::Foo2DataReader>::duplicate (
    T2::Foo2DataReader_ptr p)
{
  return T2::Foo2DataReader::_duplicate (p);
}

void
TAO::Objref_Traits<T2::Foo2DataReader>::release (
    T2::Foo2DataReader_ptr p)
{
  ::CORBA::release (p);
}

T2::Foo2DataReader_ptr
TAO::Objref_Traits<T2::Foo2DataReader>::nil (void)
{
  return T2::Foo2DataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<T2::Foo2DataReader>::marshal (
    const T2::Foo2DataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

T2::Foo2DataReader::Foo2DataReader (void)
{}

T2::Foo2DataReader::~Foo2DataReader (void)
{
}

T2::Foo2DataReader_ptr
T2::Foo2DataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Foo2DataReader::_duplicate (
      dynamic_cast<Foo2DataReader_ptr> (_tao_objref)
    );
}

T2::Foo2DataReader_ptr
T2::Foo2DataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Foo2DataReader::_duplicate (
      dynamic_cast<Foo2DataReader_ptr> (_tao_objref)
    );
}

T2::Foo2DataReader_ptr
T2::Foo2DataReader::_nil (void)
{
  return 0;
}

T2::Foo2DataReader_ptr
T2::Foo2DataReader::_duplicate (Foo2DataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
T2::Foo2DataReader::_tao_release (Foo2DataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
T2::Foo2DataReader::_is_a (const char *value)
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
          "IDL:T2/Foo2DataReader:1.0"
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

const char* T2::Foo2DataReader::_interface_repository_id (void) const
{
  return "IDL:T2/Foo2DataReader:1.0";
}

::CORBA::Boolean
T2::Foo2DataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

