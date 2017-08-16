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


#include "FooTypeTypeSupportC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "FooTypeTypeSupportC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for FooTypeSupport.

FooTypeSupport_ptr
TAO::Objref_Traits<FooTypeSupport>::duplicate (
    FooTypeSupport_ptr p)
{
  return FooTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<FooTypeSupport>::release (
    FooTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

FooTypeSupport_ptr
TAO::Objref_Traits<FooTypeSupport>::nil (void)
{
  return FooTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<FooTypeSupport>::marshal (
    const FooTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

FooTypeSupport::FooTypeSupport (void)
{}

FooTypeSupport::~FooTypeSupport (void)
{
}

FooTypeSupport_ptr
FooTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return FooTypeSupport::_duplicate (
      dynamic_cast<FooTypeSupport_ptr> (_tao_objref)
    );
}

FooTypeSupport_ptr
FooTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return FooTypeSupport::_duplicate (
      dynamic_cast<FooTypeSupport_ptr> (_tao_objref)
    );
}

FooTypeSupport_ptr
FooTypeSupport::_nil (void)
{
  return 0;
}

FooTypeSupport_ptr
FooTypeSupport::_duplicate (FooTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
FooTypeSupport::_tao_release (FooTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
FooTypeSupport::_is_a (const char *value)
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
          "IDL:FooTypeSupport:1.0"
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

const char* FooTypeSupport::_interface_repository_id (void) const
{
  return "IDL:FooTypeSupport:1.0";
}

::CORBA::Boolean
FooTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for FooDataWriter.

FooDataWriter_ptr
TAO::Objref_Traits<FooDataWriter>::duplicate (
    FooDataWriter_ptr p)
{
  return FooDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<FooDataWriter>::release (
    FooDataWriter_ptr p)
{
  ::CORBA::release (p);
}

FooDataWriter_ptr
TAO::Objref_Traits<FooDataWriter>::nil (void)
{
  return FooDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<FooDataWriter>::marshal (
    const FooDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

FooDataWriter::FooDataWriter (void)
{}

FooDataWriter::~FooDataWriter (void)
{
}

FooDataWriter_ptr
FooDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return FooDataWriter::_duplicate (
      dynamic_cast<FooDataWriter_ptr> (_tao_objref)
    );
}

FooDataWriter_ptr
FooDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return FooDataWriter::_duplicate (
      dynamic_cast<FooDataWriter_ptr> (_tao_objref)
    );
}

FooDataWriter_ptr
FooDataWriter::_nil (void)
{
  return 0;
}

FooDataWriter_ptr
FooDataWriter::_duplicate (FooDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
FooDataWriter::_tao_release (FooDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
FooDataWriter::_is_a (const char *value)
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
          "IDL:FooDataWriter:1.0"
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

const char* FooDataWriter::_interface_repository_id (void) const
{
  return "IDL:FooDataWriter:1.0";
}

::CORBA::Boolean
FooDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for FooDataReader.

FooDataReader_ptr
TAO::Objref_Traits<FooDataReader>::duplicate (
    FooDataReader_ptr p)
{
  return FooDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<FooDataReader>::release (
    FooDataReader_ptr p)
{
  ::CORBA::release (p);
}

FooDataReader_ptr
TAO::Objref_Traits<FooDataReader>::nil (void)
{
  return FooDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<FooDataReader>::marshal (
    const FooDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

FooDataReader::FooDataReader (void)
{}

FooDataReader::~FooDataReader (void)
{
}

FooDataReader_ptr
FooDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return FooDataReader::_duplicate (
      dynamic_cast<FooDataReader_ptr> (_tao_objref)
    );
}

FooDataReader_ptr
FooDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return FooDataReader::_duplicate (
      dynamic_cast<FooDataReader_ptr> (_tao_objref)
    );
}

FooDataReader_ptr
FooDataReader::_nil (void)
{
  return 0;
}

FooDataReader_ptr
FooDataReader::_duplicate (FooDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
FooDataReader::_tao_release (FooDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
FooDataReader::_is_a (const char *value)
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
          "IDL:FooDataReader:1.0"
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

const char* FooDataReader::_interface_repository_id (void) const
{
  return "IDL:FooDataReader:1.0";
}

::CORBA::Boolean
FooDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}
