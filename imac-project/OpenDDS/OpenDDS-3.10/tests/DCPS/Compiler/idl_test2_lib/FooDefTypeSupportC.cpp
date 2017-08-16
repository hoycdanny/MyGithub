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


#include "FooDefTypeSupportC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "FooDefTypeSupportC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Xyz::FooTypeSupport.

Xyz::FooTypeSupport_ptr
TAO::Objref_Traits<Xyz::FooTypeSupport>::duplicate (
    Xyz::FooTypeSupport_ptr p)
{
  return Xyz::FooTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<Xyz::FooTypeSupport>::release (
    Xyz::FooTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

Xyz::FooTypeSupport_ptr
TAO::Objref_Traits<Xyz::FooTypeSupport>::nil (void)
{
  return Xyz::FooTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Xyz::FooTypeSupport>::marshal (
    const Xyz::FooTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Xyz::FooTypeSupport::FooTypeSupport (void)
{}

Xyz::FooTypeSupport::~FooTypeSupport (void)
{
}

Xyz::FooTypeSupport_ptr
Xyz::FooTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return FooTypeSupport::_duplicate (
      dynamic_cast<FooTypeSupport_ptr> (_tao_objref)
    );
}

Xyz::FooTypeSupport_ptr
Xyz::FooTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return FooTypeSupport::_duplicate (
      dynamic_cast<FooTypeSupport_ptr> (_tao_objref)
    );
}

Xyz::FooTypeSupport_ptr
Xyz::FooTypeSupport::_nil (void)
{
  return 0;
}

Xyz::FooTypeSupport_ptr
Xyz::FooTypeSupport::_duplicate (FooTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Xyz::FooTypeSupport::_tao_release (FooTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Xyz::FooTypeSupport::_is_a (const char *value)
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
          "IDL:Xyz/FooTypeSupport:1.0"
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

const char* Xyz::FooTypeSupport::_interface_repository_id (void) const
{
  return "IDL:Xyz/FooTypeSupport:1.0";
}

::CORBA::Boolean
Xyz::FooTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Xyz::FooDataWriter.

Xyz::FooDataWriter_ptr
TAO::Objref_Traits<Xyz::FooDataWriter>::duplicate (
    Xyz::FooDataWriter_ptr p)
{
  return Xyz::FooDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<Xyz::FooDataWriter>::release (
    Xyz::FooDataWriter_ptr p)
{
  ::CORBA::release (p);
}

Xyz::FooDataWriter_ptr
TAO::Objref_Traits<Xyz::FooDataWriter>::nil (void)
{
  return Xyz::FooDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Xyz::FooDataWriter>::marshal (
    const Xyz::FooDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Xyz::FooDataWriter::FooDataWriter (void)
{}

Xyz::FooDataWriter::~FooDataWriter (void)
{
}

Xyz::FooDataWriter_ptr
Xyz::FooDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return FooDataWriter::_duplicate (
      dynamic_cast<FooDataWriter_ptr> (_tao_objref)
    );
}

Xyz::FooDataWriter_ptr
Xyz::FooDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return FooDataWriter::_duplicate (
      dynamic_cast<FooDataWriter_ptr> (_tao_objref)
    );
}

Xyz::FooDataWriter_ptr
Xyz::FooDataWriter::_nil (void)
{
  return 0;
}

Xyz::FooDataWriter_ptr
Xyz::FooDataWriter::_duplicate (FooDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Xyz::FooDataWriter::_tao_release (FooDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Xyz::FooDataWriter::_is_a (const char *value)
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
          "IDL:Xyz/FooDataWriter:1.0"
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

const char* Xyz::FooDataWriter::_interface_repository_id (void) const
{
  return "IDL:Xyz/FooDataWriter:1.0";
}

::CORBA::Boolean
Xyz::FooDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Xyz::FooDataReader.

Xyz::FooDataReader_ptr
TAO::Objref_Traits<Xyz::FooDataReader>::duplicate (
    Xyz::FooDataReader_ptr p)
{
  return Xyz::FooDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<Xyz::FooDataReader>::release (
    Xyz::FooDataReader_ptr p)
{
  ::CORBA::release (p);
}

Xyz::FooDataReader_ptr
TAO::Objref_Traits<Xyz::FooDataReader>::nil (void)
{
  return Xyz::FooDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Xyz::FooDataReader>::marshal (
    const Xyz::FooDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Xyz::FooDataReader::FooDataReader (void)
{}

Xyz::FooDataReader::~FooDataReader (void)
{
}

Xyz::FooDataReader_ptr
Xyz::FooDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return FooDataReader::_duplicate (
      dynamic_cast<FooDataReader_ptr> (_tao_objref)
    );
}

Xyz::FooDataReader_ptr
Xyz::FooDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return FooDataReader::_duplicate (
      dynamic_cast<FooDataReader_ptr> (_tao_objref)
    );
}

Xyz::FooDataReader_ptr
Xyz::FooDataReader::_nil (void)
{
  return 0;
}

Xyz::FooDataReader_ptr
Xyz::FooDataReader::_duplicate (FooDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Xyz::FooDataReader::_tao_release (FooDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Xyz::FooDataReader::_is_a (const char *value)
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
          "IDL:Xyz/FooDataReader:1.0"
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

const char* Xyz::FooDataReader::_interface_repository_id (void) const
{
  return "IDL:Xyz/FooDataReader:1.0";
}

::CORBA::Boolean
Xyz::FooDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for BarTypeSupport.

BarTypeSupport_ptr
TAO::Objref_Traits<BarTypeSupport>::duplicate (
    BarTypeSupport_ptr p)
{
  return BarTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<BarTypeSupport>::release (
    BarTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

BarTypeSupport_ptr
TAO::Objref_Traits<BarTypeSupport>::nil (void)
{
  return BarTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<BarTypeSupport>::marshal (
    const BarTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

BarTypeSupport::BarTypeSupport (void)
{}

BarTypeSupport::~BarTypeSupport (void)
{
}

BarTypeSupport_ptr
BarTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return BarTypeSupport::_duplicate (
      dynamic_cast<BarTypeSupport_ptr> (_tao_objref)
    );
}

BarTypeSupport_ptr
BarTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return BarTypeSupport::_duplicate (
      dynamic_cast<BarTypeSupport_ptr> (_tao_objref)
    );
}

BarTypeSupport_ptr
BarTypeSupport::_nil (void)
{
  return 0;
}

BarTypeSupport_ptr
BarTypeSupport::_duplicate (BarTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
BarTypeSupport::_tao_release (BarTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
BarTypeSupport::_is_a (const char *value)
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
          "IDL:BarTypeSupport:1.0"
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

const char* BarTypeSupport::_interface_repository_id (void) const
{
  return "IDL:BarTypeSupport:1.0";
}

::CORBA::Boolean
BarTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for BarDataWriter.

BarDataWriter_ptr
TAO::Objref_Traits<BarDataWriter>::duplicate (
    BarDataWriter_ptr p)
{
  return BarDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<BarDataWriter>::release (
    BarDataWriter_ptr p)
{
  ::CORBA::release (p);
}

BarDataWriter_ptr
TAO::Objref_Traits<BarDataWriter>::nil (void)
{
  return BarDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<BarDataWriter>::marshal (
    const BarDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

BarDataWriter::BarDataWriter (void)
{}

BarDataWriter::~BarDataWriter (void)
{
}

BarDataWriter_ptr
BarDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return BarDataWriter::_duplicate (
      dynamic_cast<BarDataWriter_ptr> (_tao_objref)
    );
}

BarDataWriter_ptr
BarDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return BarDataWriter::_duplicate (
      dynamic_cast<BarDataWriter_ptr> (_tao_objref)
    );
}

BarDataWriter_ptr
BarDataWriter::_nil (void)
{
  return 0;
}

BarDataWriter_ptr
BarDataWriter::_duplicate (BarDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
BarDataWriter::_tao_release (BarDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
BarDataWriter::_is_a (const char *value)
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
          "IDL:BarDataWriter:1.0"
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

const char* BarDataWriter::_interface_repository_id (void) const
{
  return "IDL:BarDataWriter:1.0";
}

::CORBA::Boolean
BarDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for BarDataReader.

BarDataReader_ptr
TAO::Objref_Traits<BarDataReader>::duplicate (
    BarDataReader_ptr p)
{
  return BarDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<BarDataReader>::release (
    BarDataReader_ptr p)
{
  ::CORBA::release (p);
}

BarDataReader_ptr
TAO::Objref_Traits<BarDataReader>::nil (void)
{
  return BarDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<BarDataReader>::marshal (
    const BarDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

BarDataReader::BarDataReader (void)
{}

BarDataReader::~BarDataReader (void)
{
}

BarDataReader_ptr
BarDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return BarDataReader::_duplicate (
      dynamic_cast<BarDataReader_ptr> (_tao_objref)
    );
}

BarDataReader_ptr
BarDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return BarDataReader::_duplicate (
      dynamic_cast<BarDataReader_ptr> (_tao_objref)
    );
}

BarDataReader_ptr
BarDataReader::_nil (void)
{
  return 0;
}

BarDataReader_ptr
BarDataReader::_duplicate (BarDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
BarDataReader::_tao_release (BarDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
BarDataReader::_is_a (const char *value)
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
          "IDL:BarDataReader:1.0"
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

const char* BarDataReader::_interface_repository_id (void) const
{
  return "IDL:BarDataReader:1.0";
}

::CORBA::Boolean
BarDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}
