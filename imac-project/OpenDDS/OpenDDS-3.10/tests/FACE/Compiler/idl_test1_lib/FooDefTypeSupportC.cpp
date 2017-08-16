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

// Traits specializations for Xyz::AStructTypeSupport.

Xyz::AStructTypeSupport_ptr
TAO::Objref_Traits<Xyz::AStructTypeSupport>::duplicate (
    Xyz::AStructTypeSupport_ptr p)
{
  return Xyz::AStructTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<Xyz::AStructTypeSupport>::release (
    Xyz::AStructTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

Xyz::AStructTypeSupport_ptr
TAO::Objref_Traits<Xyz::AStructTypeSupport>::nil (void)
{
  return Xyz::AStructTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Xyz::AStructTypeSupport>::marshal (
    const Xyz::AStructTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Xyz::AStructTypeSupport::AStructTypeSupport (void)
{}

Xyz::AStructTypeSupport::~AStructTypeSupport (void)
{
}

Xyz::AStructTypeSupport_ptr
Xyz::AStructTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return AStructTypeSupport::_duplicate (
      dynamic_cast<AStructTypeSupport_ptr> (_tao_objref)
    );
}

Xyz::AStructTypeSupport_ptr
Xyz::AStructTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return AStructTypeSupport::_duplicate (
      dynamic_cast<AStructTypeSupport_ptr> (_tao_objref)
    );
}

Xyz::AStructTypeSupport_ptr
Xyz::AStructTypeSupport::_nil (void)
{
  return 0;
}

Xyz::AStructTypeSupport_ptr
Xyz::AStructTypeSupport::_duplicate (AStructTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Xyz::AStructTypeSupport::_tao_release (AStructTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Xyz::AStructTypeSupport::_is_a (const char *value)
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
          "IDL:Xyz/AStructTypeSupport:1.0"
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

const char* Xyz::AStructTypeSupport::_interface_repository_id (void) const
{
  return "IDL:Xyz/AStructTypeSupport:1.0";
}

::CORBA::Boolean
Xyz::AStructTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Xyz::AStructDataWriter.

Xyz::AStructDataWriter_ptr
TAO::Objref_Traits<Xyz::AStructDataWriter>::duplicate (
    Xyz::AStructDataWriter_ptr p)
{
  return Xyz::AStructDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<Xyz::AStructDataWriter>::release (
    Xyz::AStructDataWriter_ptr p)
{
  ::CORBA::release (p);
}

Xyz::AStructDataWriter_ptr
TAO::Objref_Traits<Xyz::AStructDataWriter>::nil (void)
{
  return Xyz::AStructDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Xyz::AStructDataWriter>::marshal (
    const Xyz::AStructDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Xyz::AStructDataWriter::AStructDataWriter (void)
{}

Xyz::AStructDataWriter::~AStructDataWriter (void)
{
}

Xyz::AStructDataWriter_ptr
Xyz::AStructDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return AStructDataWriter::_duplicate (
      dynamic_cast<AStructDataWriter_ptr> (_tao_objref)
    );
}

Xyz::AStructDataWriter_ptr
Xyz::AStructDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return AStructDataWriter::_duplicate (
      dynamic_cast<AStructDataWriter_ptr> (_tao_objref)
    );
}

Xyz::AStructDataWriter_ptr
Xyz::AStructDataWriter::_nil (void)
{
  return 0;
}

Xyz::AStructDataWriter_ptr
Xyz::AStructDataWriter::_duplicate (AStructDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Xyz::AStructDataWriter::_tao_release (AStructDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Xyz::AStructDataWriter::_is_a (const char *value)
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
          "IDL:Xyz/AStructDataWriter:1.0"
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

const char* Xyz::AStructDataWriter::_interface_repository_id (void) const
{
  return "IDL:Xyz/AStructDataWriter:1.0";
}

::CORBA::Boolean
Xyz::AStructDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Xyz::AStructDataReader.

Xyz::AStructDataReader_ptr
TAO::Objref_Traits<Xyz::AStructDataReader>::duplicate (
    Xyz::AStructDataReader_ptr p)
{
  return Xyz::AStructDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<Xyz::AStructDataReader>::release (
    Xyz::AStructDataReader_ptr p)
{
  ::CORBA::release (p);
}

Xyz::AStructDataReader_ptr
TAO::Objref_Traits<Xyz::AStructDataReader>::nil (void)
{
  return Xyz::AStructDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Xyz::AStructDataReader>::marshal (
    const Xyz::AStructDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Xyz::AStructDataReader::AStructDataReader (void)
{}

Xyz::AStructDataReader::~AStructDataReader (void)
{
}

Xyz::AStructDataReader_ptr
Xyz::AStructDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return AStructDataReader::_duplicate (
      dynamic_cast<AStructDataReader_ptr> (_tao_objref)
    );
}

Xyz::AStructDataReader_ptr
Xyz::AStructDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return AStructDataReader::_duplicate (
      dynamic_cast<AStructDataReader_ptr> (_tao_objref)
    );
}

Xyz::AStructDataReader_ptr
Xyz::AStructDataReader::_nil (void)
{
  return 0;
}

Xyz::AStructDataReader_ptr
Xyz::AStructDataReader::_duplicate (AStructDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Xyz::AStructDataReader::_tao_release (AStructDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Xyz::AStructDataReader::_is_a (const char *value)
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
          "IDL:Xyz/AStructDataReader:1.0"
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

const char* Xyz::AStructDataReader::_interface_repository_id (void) const
{
  return "IDL:Xyz/AStructDataReader:1.0";
}

::CORBA::Boolean
Xyz::AStructDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Xyz::StructContainingArrayOfAStructSeqTypeSupport.

Xyz::StructContainingArrayOfAStructSeqTypeSupport_ptr
TAO::Objref_Traits<Xyz::StructContainingArrayOfAStructSeqTypeSupport>::duplicate (
    Xyz::StructContainingArrayOfAStructSeqTypeSupport_ptr p)
{
  return Xyz::StructContainingArrayOfAStructSeqTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<Xyz::StructContainingArrayOfAStructSeqTypeSupport>::release (
    Xyz::StructContainingArrayOfAStructSeqTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

Xyz::StructContainingArrayOfAStructSeqTypeSupport_ptr
TAO::Objref_Traits<Xyz::StructContainingArrayOfAStructSeqTypeSupport>::nil (void)
{
  return Xyz::StructContainingArrayOfAStructSeqTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Xyz::StructContainingArrayOfAStructSeqTypeSupport>::marshal (
    const Xyz::StructContainingArrayOfAStructSeqTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Xyz::StructContainingArrayOfAStructSeqTypeSupport::StructContainingArrayOfAStructSeqTypeSupport (void)
{}

Xyz::StructContainingArrayOfAStructSeqTypeSupport::~StructContainingArrayOfAStructSeqTypeSupport (void)
{
}

Xyz::StructContainingArrayOfAStructSeqTypeSupport_ptr
Xyz::StructContainingArrayOfAStructSeqTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return StructContainingArrayOfAStructSeqTypeSupport::_duplicate (
      dynamic_cast<StructContainingArrayOfAStructSeqTypeSupport_ptr> (_tao_objref)
    );
}

Xyz::StructContainingArrayOfAStructSeqTypeSupport_ptr
Xyz::StructContainingArrayOfAStructSeqTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return StructContainingArrayOfAStructSeqTypeSupport::_duplicate (
      dynamic_cast<StructContainingArrayOfAStructSeqTypeSupport_ptr> (_tao_objref)
    );
}

Xyz::StructContainingArrayOfAStructSeqTypeSupport_ptr
Xyz::StructContainingArrayOfAStructSeqTypeSupport::_nil (void)
{
  return 0;
}

Xyz::StructContainingArrayOfAStructSeqTypeSupport_ptr
Xyz::StructContainingArrayOfAStructSeqTypeSupport::_duplicate (StructContainingArrayOfAStructSeqTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Xyz::StructContainingArrayOfAStructSeqTypeSupport::_tao_release (StructContainingArrayOfAStructSeqTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Xyz::StructContainingArrayOfAStructSeqTypeSupport::_is_a (const char *value)
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
          "IDL:Xyz/StructContainingArrayOfAStructSeqTypeSupport:1.0"
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

const char* Xyz::StructContainingArrayOfAStructSeqTypeSupport::_interface_repository_id (void) const
{
  return "IDL:Xyz/StructContainingArrayOfAStructSeqTypeSupport:1.0";
}

::CORBA::Boolean
Xyz::StructContainingArrayOfAStructSeqTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Xyz::StructContainingArrayOfAStructSeqDataWriter.

Xyz::StructContainingArrayOfAStructSeqDataWriter_ptr
TAO::Objref_Traits<Xyz::StructContainingArrayOfAStructSeqDataWriter>::duplicate (
    Xyz::StructContainingArrayOfAStructSeqDataWriter_ptr p)
{
  return Xyz::StructContainingArrayOfAStructSeqDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<Xyz::StructContainingArrayOfAStructSeqDataWriter>::release (
    Xyz::StructContainingArrayOfAStructSeqDataWriter_ptr p)
{
  ::CORBA::release (p);
}

Xyz::StructContainingArrayOfAStructSeqDataWriter_ptr
TAO::Objref_Traits<Xyz::StructContainingArrayOfAStructSeqDataWriter>::nil (void)
{
  return Xyz::StructContainingArrayOfAStructSeqDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Xyz::StructContainingArrayOfAStructSeqDataWriter>::marshal (
    const Xyz::StructContainingArrayOfAStructSeqDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Xyz::StructContainingArrayOfAStructSeqDataWriter::StructContainingArrayOfAStructSeqDataWriter (void)
{}

Xyz::StructContainingArrayOfAStructSeqDataWriter::~StructContainingArrayOfAStructSeqDataWriter (void)
{
}

Xyz::StructContainingArrayOfAStructSeqDataWriter_ptr
Xyz::StructContainingArrayOfAStructSeqDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return StructContainingArrayOfAStructSeqDataWriter::_duplicate (
      dynamic_cast<StructContainingArrayOfAStructSeqDataWriter_ptr> (_tao_objref)
    );
}

Xyz::StructContainingArrayOfAStructSeqDataWriter_ptr
Xyz::StructContainingArrayOfAStructSeqDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return StructContainingArrayOfAStructSeqDataWriter::_duplicate (
      dynamic_cast<StructContainingArrayOfAStructSeqDataWriter_ptr> (_tao_objref)
    );
}

Xyz::StructContainingArrayOfAStructSeqDataWriter_ptr
Xyz::StructContainingArrayOfAStructSeqDataWriter::_nil (void)
{
  return 0;
}

Xyz::StructContainingArrayOfAStructSeqDataWriter_ptr
Xyz::StructContainingArrayOfAStructSeqDataWriter::_duplicate (StructContainingArrayOfAStructSeqDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Xyz::StructContainingArrayOfAStructSeqDataWriter::_tao_release (StructContainingArrayOfAStructSeqDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Xyz::StructContainingArrayOfAStructSeqDataWriter::_is_a (const char *value)
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
          "IDL:Xyz/StructContainingArrayOfAStructSeqDataWriter:1.0"
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

const char* Xyz::StructContainingArrayOfAStructSeqDataWriter::_interface_repository_id (void) const
{
  return "IDL:Xyz/StructContainingArrayOfAStructSeqDataWriter:1.0";
}

::CORBA::Boolean
Xyz::StructContainingArrayOfAStructSeqDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for Xyz::StructContainingArrayOfAStructSeqDataReader.

Xyz::StructContainingArrayOfAStructSeqDataReader_ptr
TAO::Objref_Traits<Xyz::StructContainingArrayOfAStructSeqDataReader>::duplicate (
    Xyz::StructContainingArrayOfAStructSeqDataReader_ptr p)
{
  return Xyz::StructContainingArrayOfAStructSeqDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<Xyz::StructContainingArrayOfAStructSeqDataReader>::release (
    Xyz::StructContainingArrayOfAStructSeqDataReader_ptr p)
{
  ::CORBA::release (p);
}

Xyz::StructContainingArrayOfAStructSeqDataReader_ptr
TAO::Objref_Traits<Xyz::StructContainingArrayOfAStructSeqDataReader>::nil (void)
{
  return Xyz::StructContainingArrayOfAStructSeqDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Xyz::StructContainingArrayOfAStructSeqDataReader>::marshal (
    const Xyz::StructContainingArrayOfAStructSeqDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Xyz::StructContainingArrayOfAStructSeqDataReader::StructContainingArrayOfAStructSeqDataReader (void)
{}

Xyz::StructContainingArrayOfAStructSeqDataReader::~StructContainingArrayOfAStructSeqDataReader (void)
{
}

Xyz::StructContainingArrayOfAStructSeqDataReader_ptr
Xyz::StructContainingArrayOfAStructSeqDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return StructContainingArrayOfAStructSeqDataReader::_duplicate (
      dynamic_cast<StructContainingArrayOfAStructSeqDataReader_ptr> (_tao_objref)
    );
}

Xyz::StructContainingArrayOfAStructSeqDataReader_ptr
Xyz::StructContainingArrayOfAStructSeqDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return StructContainingArrayOfAStructSeqDataReader::_duplicate (
      dynamic_cast<StructContainingArrayOfAStructSeqDataReader_ptr> (_tao_objref)
    );
}

Xyz::StructContainingArrayOfAStructSeqDataReader_ptr
Xyz::StructContainingArrayOfAStructSeqDataReader::_nil (void)
{
  return 0;
}

Xyz::StructContainingArrayOfAStructSeqDataReader_ptr
Xyz::StructContainingArrayOfAStructSeqDataReader::_duplicate (StructContainingArrayOfAStructSeqDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Xyz::StructContainingArrayOfAStructSeqDataReader::_tao_release (StructContainingArrayOfAStructSeqDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Xyz::StructContainingArrayOfAStructSeqDataReader::_is_a (const char *value)
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
          "IDL:Xyz/StructContainingArrayOfAStructSeqDataReader:1.0"
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

const char* Xyz::StructContainingArrayOfAStructSeqDataReader::_interface_repository_id (void) const
{
  return "IDL:Xyz/StructContainingArrayOfAStructSeqDataReader:1.0";
}

::CORBA::Boolean
Xyz::StructContainingArrayOfAStructSeqDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

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

