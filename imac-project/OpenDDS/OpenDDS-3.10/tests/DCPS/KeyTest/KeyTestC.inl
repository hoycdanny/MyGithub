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
TAO::Array_Traits<Messenger5::ResponseArray_forany>::free (
    Messenger5::ResponseArray_slice * _tao_slice
  )
{
  Messenger5::ResponseArray_free (_tao_slice);
}

ACE_INLINE
Messenger5::ResponseArray_slice *
TAO::Array_Traits<Messenger5::ResponseArray_forany>::dup (
    const Messenger5::ResponseArray_slice * _tao_slice
  )
{
  return Messenger5::ResponseArray_dup (_tao_slice);
}

ACE_INLINE
void
TAO::Array_Traits<Messenger5::ResponseArray_forany>::copy (
    Messenger5::ResponseArray_slice * _tao_to,
    const Messenger5::ResponseArray_slice * _tao_from
  )
{
  Messenger5::ResponseArray_copy (_tao_to, _tao_from);
}

ACE_INLINE
void
TAO::Array_Traits<Messenger5::ResponseArray_forany>::zero (
    Messenger5::ResponseArray_slice * _tao_slice
  )
{
  // Zero each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 10; ++i0)
    {
      _tao_slice[i0] = ::CORBA::Long ();
    }
}

ACE_INLINE
Messenger5::ResponseArray_slice *
TAO::Array_Traits<Messenger5::ResponseArray_forany>::alloc (void)
{
  return Messenger5::ResponseArray_alloc ();
}


// TAO_IDL - Generated from
// be/be_visitor_array/array_ci.cpp:150

ACE_INLINE
void
TAO::Array_Traits<Messenger6::ResponseArray_forany>::free (
    Messenger6::ResponseArray_slice * _tao_slice
  )
{
  Messenger6::ResponseArray_free (_tao_slice);
}

ACE_INLINE
Messenger6::ResponseArray_slice *
TAO::Array_Traits<Messenger6::ResponseArray_forany>::dup (
    const Messenger6::ResponseArray_slice * _tao_slice
  )
{
  return Messenger6::ResponseArray_dup (_tao_slice);
}

ACE_INLINE
void
TAO::Array_Traits<Messenger6::ResponseArray_forany>::copy (
    Messenger6::ResponseArray_slice * _tao_to,
    const Messenger6::ResponseArray_slice * _tao_from
  )
{
  Messenger6::ResponseArray_copy (_tao_to, _tao_from);
}

ACE_INLINE
void
TAO::Array_Traits<Messenger6::ResponseArray_forany>::zero (
    Messenger6::ResponseArray_slice * _tao_slice
  )
{
  // Zero each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 10; ++i0)
    {
      _tao_slice[i0] = ::CORBA::Long ();
    }
}

ACE_INLINE
Messenger6::ResponseArray_slice *
TAO::Array_Traits<Messenger6::ResponseArray_forany>::alloc (void)
{
  return Messenger6::ResponseArray_alloc ();
}


