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


#include "SampleTypeTypeSupportC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "SampleTypeTypeSupportC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Xyz::SampleTypeTypeSupport.

Xyz::SampleTypeTypeSupport_ptr
TAO::Objref_Traits<Xyz::SampleTypeTypeSupport>::duplicate (
    Xyz::SampleTypeTypeSupport_ptr p)
{
  return Xyz::SampleTypeTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<Xyz::SampleTypeTypeSupport>::release (
    Xyz::SampleTypeTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

Xyz::SampleTypeTypeSupport_ptr
TAO::Objref_Traits<Xyz::SampleTypeTypeSupport>::nil (void)
{
  return Xyz::SampleTypeTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Xyz::SampleTypeTypeSupport>::marshal (
    const Xyz::SampleTypeTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Xyz::SampleTypeTypeSupport::SampleTypeTypeSupport (void)
{}

Xyz::SampleTypeTypeSupport::~SampleTypeTypeSupport (void)
{
}

Xyz::SampleTypeTypeSupport_ptr
Xyz::SampleTypeTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return SampleTypeTypeSupport::_duplicate (
      dynamic_cast<SampleTypeTypeSupport_ptr> (_tao_objref)
    );
}

Xyz::SampleTypeTypeSupport_ptr
Xyz::SampleTypeTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return SampleTypeTypeSupport::_duplicate (
      dynamic_cast<SampleTypeTypeSupport_ptr> (_tao_objref)
    );
}

Xyz::SampleTypeTypeSupport_ptr
Xyz::SampleTypeTypeSupport::_nil (void)
{
  return 0;
}

Xyz::SampleTypeTypeSupport_ptr
Xyz::SampleTypeTypeSupport::_duplicate (SampleTypeTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Xyz::SampleTypeTypeSupport::_tao_release (SampleTypeTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Xyz::SampleTypeTypeSupport::_is_a (const char *value)
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
          "IDL:Xyz/SampleTypeTypeSupport:1.0"
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

const char* Xyz::SampleTypeTypeSupport::_interface_repository_id (void) const
{
  return "IDL:Xyz/SampleTypeTypeSupport:1.0";
}

::CORBA::Boolean
Xyz::SampleTypeTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Xyz::SampleTypeDataWriter.

Xyz::SampleTypeDataWriter_ptr
TAO::Objref_Traits<Xyz::SampleTypeDataWriter>::duplicate (
    Xyz::SampleTypeDataWriter_ptr p)
{
  return Xyz::SampleTypeDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<Xyz::SampleTypeDataWriter>::release (
    Xyz::SampleTypeDataWriter_ptr p)
{
  ::CORBA::release (p);
}

Xyz::SampleTypeDataWriter_ptr
TAO::Objref_Traits<Xyz::SampleTypeDataWriter>::nil (void)
{
  return Xyz::SampleTypeDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Xyz::SampleTypeDataWriter>::marshal (
    const Xyz::SampleTypeDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Xyz::SampleTypeDataWriter::SampleTypeDataWriter (void)
{}

Xyz::SampleTypeDataWriter::~SampleTypeDataWriter (void)
{
}

Xyz::SampleTypeDataWriter_ptr
Xyz::SampleTypeDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return SampleTypeDataWriter::_duplicate (
      dynamic_cast<SampleTypeDataWriter_ptr> (_tao_objref)
    );
}

Xyz::SampleTypeDataWriter_ptr
Xyz::SampleTypeDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return SampleTypeDataWriter::_duplicate (
      dynamic_cast<SampleTypeDataWriter_ptr> (_tao_objref)
    );
}

Xyz::SampleTypeDataWriter_ptr
Xyz::SampleTypeDataWriter::_nil (void)
{
  return 0;
}

Xyz::SampleTypeDataWriter_ptr
Xyz::SampleTypeDataWriter::_duplicate (SampleTypeDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Xyz::SampleTypeDataWriter::_tao_release (SampleTypeDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Xyz::SampleTypeDataWriter::_is_a (const char *value)
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
          "IDL:Xyz/SampleTypeDataWriter:1.0"
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

const char* Xyz::SampleTypeDataWriter::_interface_repository_id (void) const
{
  return "IDL:Xyz/SampleTypeDataWriter:1.0";
}

::CORBA::Boolean
Xyz::SampleTypeDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Xyz::SampleTypeDataReader.

Xyz::SampleTypeDataReader_ptr
TAO::Objref_Traits<Xyz::SampleTypeDataReader>::duplicate (
    Xyz::SampleTypeDataReader_ptr p)
{
  return Xyz::SampleTypeDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<Xyz::SampleTypeDataReader>::release (
    Xyz::SampleTypeDataReader_ptr p)
{
  ::CORBA::release (p);
}

Xyz::SampleTypeDataReader_ptr
TAO::Objref_Traits<Xyz::SampleTypeDataReader>::nil (void)
{
  return Xyz::SampleTypeDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Xyz::SampleTypeDataReader>::marshal (
    const Xyz::SampleTypeDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Xyz::SampleTypeDataReader::SampleTypeDataReader (void)
{}

Xyz::SampleTypeDataReader::~SampleTypeDataReader (void)
{
}

Xyz::SampleTypeDataReader_ptr
Xyz::SampleTypeDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return SampleTypeDataReader::_duplicate (
      dynamic_cast<SampleTypeDataReader_ptr> (_tao_objref)
    );
}

Xyz::SampleTypeDataReader_ptr
Xyz::SampleTypeDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return SampleTypeDataReader::_duplicate (
      dynamic_cast<SampleTypeDataReader_ptr> (_tao_objref)
    );
}

Xyz::SampleTypeDataReader_ptr
Xyz::SampleTypeDataReader::_nil (void)
{
  return 0;
}

Xyz::SampleTypeDataReader_ptr
Xyz::SampleTypeDataReader::_duplicate (SampleTypeDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Xyz::SampleTypeDataReader::_tao_release (SampleTypeDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Xyz::SampleTypeDataReader::_is_a (const char *value)
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
          "IDL:Xyz/SampleTypeDataReader:1.0"
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

const char* Xyz::SampleTypeDataReader::_interface_repository_id (void) const
{
  return "IDL:Xyz/SampleTypeDataReader:1.0";
}

::CORBA::Boolean
Xyz::SampleTypeDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

