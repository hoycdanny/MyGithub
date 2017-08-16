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
// be/be_visitor_array/array_ci.cpp:150

ACE_INLINE
void
TAO::Array_Traits<Messenger7::ResponseArray_forany>::free (
    Messenger7::ResponseArray_slice * _tao_slice
  )
{
  Messenger7::ResponseArray_free (_tao_slice);
}

ACE_INLINE
Messenger7::ResponseArray_slice *
TAO::Array_Traits<Messenger7::ResponseArray_forany>::dup (
    const Messenger7::ResponseArray_slice * _tao_slice
  )
{
  return Messenger7::ResponseArray_dup (_tao_slice);
}

ACE_INLINE
void
TAO::Array_Traits<Messenger7::ResponseArray_forany>::copy (
    Messenger7::ResponseArray_slice * _tao_to,
    const Messenger7::ResponseArray_slice * _tao_from
  )
{
  Messenger7::ResponseArray_copy (_tao_to, _tao_from);
}

ACE_INLINE
void
TAO::Array_Traits<Messenger7::ResponseArray_forany>::zero (
    Messenger7::ResponseArray_slice * _tao_slice
  )
{
  // Zero each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 3; ++i0)
    {
      _tao_slice[i0] = ::CORBA::Long ();
    }
}

ACE_INLINE
Messenger7::ResponseArray_slice *
TAO::Array_Traits<Messenger7::ResponseArray_forany>::alloc (void)
{
  return Messenger7::ResponseArray_alloc ();
}


// TAO_IDL - Generated from
// be/be_visitor_array/array_ci.cpp:150

ACE_INLINE
void
TAO::Array_Traits<Messenger8::ResponseArray_forany>::free (
    Messenger8::ResponseArray_slice * _tao_slice
  )
{
  Messenger8::ResponseArray_free (_tao_slice);
}

ACE_INLINE
Messenger8::ResponseArray_slice *
TAO::Array_Traits<Messenger8::ResponseArray_forany>::dup (
    const Messenger8::ResponseArray_slice * _tao_slice
  )
{
  return Messenger8::ResponseArray_dup (_tao_slice);
}

ACE_INLINE
void
TAO::Array_Traits<Messenger8::ResponseArray_forany>::copy (
    Messenger8::ResponseArray_slice * _tao_to,
    const Messenger8::ResponseArray_slice * _tao_from
  )
{
  Messenger8::ResponseArray_copy (_tao_to, _tao_from);
}

ACE_INLINE
void
TAO::Array_Traits<Messenger8::ResponseArray_forany>::zero (
    Messenger8::ResponseArray_slice * _tao_slice
  )
{
  // Zero each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 10; ++i0)
    {
      _tao_slice[i0] = ::CORBA::Long ();
    }
}

ACE_INLINE
Messenger8::ResponseArray_slice *
TAO::Array_Traits<Messenger8::ResponseArray_forany>::alloc (void)
{
  return Messenger8::ResponseArray_alloc ();
}


// TAO_IDL - Generated from
// be/be_visitor_array/array_ci.cpp:150

ACE_INLINE
void
TAO::Array_Traits<Messenger9::HeaderTypeArray_forany>::free (
    Messenger9::HeaderTypeArray_slice * _tao_slice
  )
{
  Messenger9::HeaderTypeArray_free (_tao_slice);
}

ACE_INLINE
Messenger9::HeaderTypeArray_slice *
TAO::Array_Traits<Messenger9::HeaderTypeArray_forany>::dup (
    const Messenger9::HeaderTypeArray_slice * _tao_slice
  )
{
  return Messenger9::HeaderTypeArray_dup (_tao_slice);
}

ACE_INLINE
void
TAO::Array_Traits<Messenger9::HeaderTypeArray_forany>::copy (
    Messenger9::HeaderTypeArray_slice * _tao_to,
    const Messenger9::HeaderTypeArray_slice * _tao_from
  )
{
  Messenger9::HeaderTypeArray_copy (_tao_to, _tao_from);
}

ACE_INLINE
void
TAO::Array_Traits<Messenger9::HeaderTypeArray_forany>::zero (
    Messenger9::HeaderTypeArray_slice * _tao_slice
  )
{
  // Zero each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 2; ++i0)
    {
      _tao_slice[i0] = Messenger9::HeaderType ();
    }
}

ACE_INLINE
Messenger9::HeaderTypeArray_slice *
TAO::Array_Traits<Messenger9::HeaderTypeArray_forany>::alloc (void)
{
  return Messenger9::HeaderTypeArray_alloc ();
}

