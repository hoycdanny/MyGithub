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
TAO::Array_Traits<ShortArray_forany>::free (
    ShortArray_slice * _tao_slice
  )
{
  ShortArray_free (_tao_slice);
}

ACE_INLINE
ShortArray_slice *
TAO::Array_Traits<ShortArray_forany>::dup (
    const ShortArray_slice * _tao_slice
  )
{
  return ShortArray_dup (_tao_slice);
}

ACE_INLINE
void
TAO::Array_Traits<ShortArray_forany>::copy (
    ShortArray_slice * _tao_to,
    const ShortArray_slice * _tao_from
  )
{
  ShortArray_copy (_tao_to, _tao_from);
}

ACE_INLINE
void
TAO::Array_Traits<ShortArray_forany>::zero (
    ShortArray_slice * _tao_slice
  )
{
  // Zero each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 3; ++i0)
    {
      _tao_slice[i0] = ::CORBA::Short ();
    }
}

ACE_INLINE
ShortArray_slice *
TAO::Array_Traits<ShortArray_forany>::alloc (void)
{
  return ShortArray_alloc ();
}


// TAO_IDL - Generated from
// be/be_visitor_array/array_ci.cpp:150

ACE_INLINE
void
TAO::Array_Traits<ArrayOfShortArray_forany>::free (
    ArrayOfShortArray_slice * _tao_slice
  )
{
  ArrayOfShortArray_free (_tao_slice);
}

ACE_INLINE
ArrayOfShortArray_slice *
TAO::Array_Traits<ArrayOfShortArray_forany>::dup (
    const ArrayOfShortArray_slice * _tao_slice
  )
{
  return ArrayOfShortArray_dup (_tao_slice);
}

ACE_INLINE
void
TAO::Array_Traits<ArrayOfShortArray_forany>::copy (
    ArrayOfShortArray_slice * _tao_to,
    const ArrayOfShortArray_slice * _tao_from
  )
{
  ArrayOfShortArray_copy (_tao_to, _tao_from);
}

ACE_INLINE
void
TAO::Array_Traits<ArrayOfShortArray_forany>::zero (
    ArrayOfShortArray_slice * _tao_slice
  )
{
  // Zero each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 4; ++i0)
    {
      // call the underlying _zero
      TAO::Array_Traits< ShortArray_forany>::zero (_tao_slice[i0]);
    }
}

ACE_INLINE
ArrayOfShortArray_slice *
TAO::Array_Traits<ArrayOfShortArray_forany>::alloc (void)
{
  return ArrayOfShortArray_alloc ();
}


// TAO_IDL - Generated from
// be/be_visitor_union/union_ci.cpp:39

// *************************************************************
// Inline operations for union MyUnion
// *************************************************************

// TAO_IDL - Generated from
// be/be_visitor_union/discriminant_ci.cpp:58

// Accessor to set the discriminant.
ACE_INLINE
void
MyUnion::_d (MyEnum discval)
{
  this->disc_ = discval;
}

// Accessor to get the discriminant.
ACE_INLINE
MyEnum
MyUnion::_d (void) const
{
  return this->disc_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:580

// Accessor to set the member.
ACE_INLINE
void
MyUnion::u_b (CORBA::Boolean val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = ::b;
  // Set the value.
  this->u_.u_b_ = val;
}

/// Retrieve the member.
ACE_INLINE
::CORBA::Boolean
MyUnion::u_b (void) const
{
  return this->u_.u_b_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:580

// Accessor to set the member.
ACE_INLINE
void
MyUnion::u_d (CORBA::Double val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = ::d;
  // Set the value.
  this->u_.u_d_ = val;
}

/// Retrieve the member.
ACE_INLINE
::CORBA::Double
MyUnion::u_d (void) const
{
  return this->u_.u_d_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:1068

/// Accessor to set the member.
ACE_INLINE
void
MyUnion::u_as (const A &val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = ::as;
  ACE_NEW (
      this->u_.u_as_,
      A (val)
    );
}

// Readonly get method.
ACE_INLINE
const A &
MyUnion::u_as (void) const
{
  return *this->u_.u_as_;
}

// Read/write get method.
ACE_INLINE
A &
MyUnion::u_as (void)
{
  return *this->u_.u_as_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:160

// Accessor to set the member.
ACE_INLINE
void
MyUnion::u_sa (ShortArray val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = ::sa;
  // Set the value.
  this->u_.u_sa_ = ShortArray_dup (val);
}

/// Retrieve the member.
ACE_INLINE
ShortArray_slice *
MyUnion::u_sa (void) const
{
  return this->u_.u_sa_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:791

/// Accessor to set the member.
ACE_INLINE
void
MyUnion::u_ss (const StructSeq &val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = ::ss;
  ACE_NEW (
      this->u_.u_ss_,
      StructSeq (val)
    );
}

/// Readonly get method.
ACE_INLINE
const StructSeq &
MyUnion::u_ss (void) const
{
  return *this->u_.u_ss_;
}

/// Read/write get method.
ACE_INLINE
StructSeq &
MyUnion::u_ss (void)
{
  return *this->u_.u_ss_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:580

// Accessor to set the member.
ACE_INLINE
void
MyUnion::u_f (CORBA::Float val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = other1;
  // Set the value.
  this->u_.u_f_ = val;
}

/// Retrieve the member.
ACE_INLINE
::CORBA::Float
MyUnion::u_f (void) const
{
  return this->u_.u_f_;
}
