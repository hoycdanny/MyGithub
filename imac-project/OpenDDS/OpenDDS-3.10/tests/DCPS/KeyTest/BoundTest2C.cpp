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


#include "BoundTest2C.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "BoundTest2C.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_BOUND_BOUNDEDFLOATSEQ_CS_)
#define _BOUND_BOUNDEDFLOATSEQ_CS_

Bound::BoundedFloatSeq::BoundedFloatSeq (void)
{}

Bound::BoundedFloatSeq::BoundedFloatSeq (
    ::CORBA::ULong length,
    ::CORBA::Float * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::bounded_value_sequence<
        ::CORBA::Float,
        20
      >
    (length, buffer, release)
{}

Bound::BoundedFloatSeq::BoundedFloatSeq (
    const BoundedFloatSeq &seq)
  : ::TAO::bounded_value_sequence<
        ::CORBA::Float,
        20
      > (seq)
{}

Bound::BoundedFloatSeq::~BoundedFloatSeq (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_BOUND_UNBOUNDEDFLOATSEQ_CS_)
#define _BOUND_UNBOUNDEDFLOATSEQ_CS_

Bound::UnboundedFloatSeq::UnboundedFloatSeq (void)
{}

Bound::UnboundedFloatSeq::UnboundedFloatSeq (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Float
      > (max)
{}

Bound::UnboundedFloatSeq::UnboundedFloatSeq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::Float * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Float
      >
    (max, length, buffer, release)
{}

Bound::UnboundedFloatSeq::UnboundedFloatSeq (
    const UnboundedFloatSeq &seq)
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Float
      > (seq)
{}

Bound::UnboundedFloatSeq::~UnboundedFloatSeq (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_BOUND_BOUNDEDSTRINGSEQ_CS_)
#define _BOUND_BOUNDEDSTRINGSEQ_CS_

Bound::BoundedStringSeq::BoundedStringSeq (void)
{}

Bound::BoundedStringSeq::BoundedStringSeq (
    ::CORBA::ULong length,
    ::CORBA::Char * * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::bounded_basic_string_sequence<char, 20>
    (length, buffer, release)
{}

Bound::BoundedStringSeq::BoundedStringSeq (
    const BoundedStringSeq &seq)
  : ::TAO::bounded_basic_string_sequence<char, 20> (seq)
{}

Bound::BoundedStringSeq::~BoundedStringSeq (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_BOUND_UNBOUNDEDSTRINGSEQ_CS_)
#define _BOUND_UNBOUNDEDSTRINGSEQ_CS_

Bound::UnboundedStringSeq::UnboundedStringSeq (void)
{}

Bound::UnboundedStringSeq::UnboundedStringSeq (
    ::CORBA::ULong max)
  : ::TAO::unbounded_basic_string_sequence<char> (max)
{}

Bound::UnboundedStringSeq::UnboundedStringSeq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::Char * * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_basic_string_sequence<char>
    (max, length, buffer, release)
{}

Bound::UnboundedStringSeq::UnboundedStringSeq (
    const UnboundedStringSeq &seq)
  : ::TAO::unbounded_basic_string_sequence<char> (seq)
{}

Bound::UnboundedStringSeq::~UnboundedStringSeq (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_union/union_cs.cpp:79

Bound::BoundedUnion::BoundedUnion (void)
{
  ACE_OS::memset (&this->u_, 0, sizeof (this->u_));
  this->disc_ = -32768;
}

Bound::BoundedUnion::BoundedUnion (const ::Bound::BoundedUnion &u)
{
  this->disc_ = u.disc_;
  switch (this->disc_)
  {
    case 1:
    {
      this->u_.float_field_ = u.u_.float_field_;
    }
    break;
    case 2:
    {
      this->u_.long_field_ = u.u_.long_field_;
    }
    break;
    default:
    {
      this->u_.short_field_ = u.u_.short_field_;
    }
    break;
  }
}

Bound::BoundedUnion::~BoundedUnion (void)
{
  // Finalize.
  this->_reset ();
}

Bound::BoundedUnion &
Bound::BoundedUnion::operator= (const ::Bound::BoundedUnion &u)
{
  if (&u == this)
    {
      return *this;
    }
  
  this->_reset ();
  this->disc_ = u.disc_;

  switch (this->disc_)
  {
    case 1:
    {
      this->u_.float_field_ = u.u_.float_field_;
    }
    break;
    case 2:
    {
      this->u_.long_field_ = u.u_.long_field_;
    }
    break;
    default:
    {
      this->u_.short_field_ = u.u_.short_field_;
    }
    break;
  }
  
  return *this;
}

/// Reset method to reset old values of a union.
void Bound::BoundedUnion::_reset (void)
{
  switch (this->disc_)
  {
    
    case 1:
      
    break;
    
    case 2:
      
    break;
    
    default:
      
    break;
    
  }
}

// TAO_IDL - Generated from
// be/be_visitor_union/union_cs.cpp:79

Bound::UnboundedUnion::UnboundedUnion (void)
{
  ACE_OS::memset (&this->u_, 0, sizeof (this->u_));
  this->disc_ = -32768;
}

Bound::UnboundedUnion::UnboundedUnion (const ::Bound::UnboundedUnion &u)
{
  this->disc_ = u.disc_;
  switch (this->disc_)
  {
    case 1:
    {
      this->u_.string_field_ = ::CORBA::string_dup (u.u_.string_field_);
    }
    break;
    case 2:
    {
      this->u_.long_field_ = u.u_.long_field_;
    }
    break;
    default:
    {
      this->u_.short_field_ = u.u_.short_field_;
    }
    break;
  }
}

Bound::UnboundedUnion::~UnboundedUnion (void)
{
  // Finalize.
  this->_reset ();
}

Bound::UnboundedUnion &
Bound::UnboundedUnion::operator= (const ::Bound::UnboundedUnion &u)
{
  if (&u == this)
    {
      return *this;
    }
  
  this->_reset ();
  this->disc_ = u.disc_;

  switch (this->disc_)
  {
    case 1:
    {
      this->u_.string_field_ = ::CORBA::string_dup (u.u_.string_field_);
    }
    break;
    case 2:
    {
      this->u_.long_field_ = u.u_.long_field_;
    }
    break;
    default:
    {
      this->u_.short_field_ = u.u_.short_field_;
    }
    break;
  }
  
  return *this;
}

/// Reset method to reset old values of a union.
void Bound::UnboundedUnion::_reset (void)
{
  switch (this->disc_)
  {
    
    case 1:
      ::CORBA::string_free (this->u_.string_field_);
      this->u_.string_field_ = 0;
      
    break;
    
    case 2:
      
    break;
    
    default:
      
    break;
    
  }
}

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_BOUND_SINGLEMESSAGESEQ_CS_)
#define _BOUND_SINGLEMESSAGESEQ_CS_

Bound::SingleMessageSeq::SingleMessageSeq (void)
{}

Bound::SingleMessageSeq::SingleMessageSeq (
    ::CORBA::ULong length,
    Bound::RecursiveMessage * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::bounded_value_sequence<
        RecursiveMessage,
        1
      >
    (length, buffer, release)
{}

Bound::SingleMessageSeq::SingleMessageSeq (
    const SingleMessageSeq &seq)
  : ::TAO::bounded_value_sequence<
        RecursiveMessage,
        1
      > (seq)
{}

Bound::SingleMessageSeq::~SingleMessageSeq (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_union/union_cs.cpp:79

Bound::NestedMessageUnion::NestedMessageUnion (void)
{
  ACE_OS::memset (&this->u_, 0, sizeof (this->u_));
  this->disc_ = -32768;
}

Bound::NestedMessageUnion::NestedMessageUnion (const ::Bound::NestedMessageUnion &u)
{
  this->disc_ = u.disc_;
  switch (this->disc_)
  {
    case 1:
    {
      if (u.u_.message_ == 0)
        {
          this->u_.message_ = 0;
        }
      else
        {
          ACE_NEW (
              this->u_.message_,
              Bound::SingleMessageSeq (*u.u_.message_)
            );
        }
    }
    break;
    case 2:
    {
      this->u_.long_field_ = u.u_.long_field_;
    }
    break;
    default:
    {
      this->u_.short_field_ = u.u_.short_field_;
    }
    break;
  }
}

Bound::NestedMessageUnion::~NestedMessageUnion (void)
{
  // Finalize.
  this->_reset ();
}

Bound::NestedMessageUnion &
Bound::NestedMessageUnion::operator= (const ::Bound::NestedMessageUnion &u)
{
  if (&u == this)
    {
      return *this;
    }
  
  this->_reset ();
  this->disc_ = u.disc_;

  switch (this->disc_)
  {
    case 1:
    {
      if (u.u_.message_ == 0)
        {
          this->u_.message_ = 0;
        }
      else
        {
          ACE_NEW_RETURN (
              this->u_.message_,
              Bound::SingleMessageSeq (*u.u_.message_),
              *this
            );
        }
    }
    break;
    case 2:
    {
      this->u_.long_field_ = u.u_.long_field_;
    }
    break;
    default:
    {
      this->u_.short_field_ = u.u_.short_field_;
    }
    break;
  }
  
  return *this;
}

/// Reset method to reset old values of a union.
void Bound::NestedMessageUnion::_reset (void)
{
  switch (this->disc_)
  {
    
    case 1:
      delete this->u_.message_;
      this->u_.message_ = 0;
      
    break;
    
    case 2:
      
    break;
    
    default:
      
    break;
    
  }
}

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_Bound_BoundedFloatSeq_CPP_
#define _TAO_CDR_OP_Bound_BoundedFloatSeq_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Bound::BoundedFloatSeq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Bound::BoundedFloatSeq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Bound_BoundedFloatSeq_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Bound::BoundedSequenceOfBoundedMessage &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.float_seq);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Bound::BoundedSequenceOfBoundedMessage &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.float_seq);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_Bound_UnboundedFloatSeq_CPP_
#define _TAO_CDR_OP_Bound_UnboundedFloatSeq_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Bound::UnboundedFloatSeq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Bound::UnboundedFloatSeq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Bound_UnboundedFloatSeq_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Bound::UnboundedSequenceOfBoundedMessage &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.float_seq);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Bound::UnboundedSequenceOfBoundedMessage &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.float_seq);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_Bound_BoundedStringSeq_CPP_
#define _TAO_CDR_OP_Bound_BoundedStringSeq_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Bound::BoundedStringSeq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Bound::BoundedStringSeq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Bound_BoundedStringSeq_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Bound::BoundedSequenceOfUnboundedMessage &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.string_seq);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Bound::BoundedSequenceOfUnboundedMessage &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.string_seq);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_Bound_UnboundedStringSeq_CPP_
#define _TAO_CDR_OP_Bound_UnboundedStringSeq_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Bound::UnboundedStringSeq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Bound::UnboundedStringSeq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Bound_UnboundedStringSeq_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Bound::UnboundedSequenceOfUnboundedMessage &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.string_seq);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Bound::UnboundedSequenceOfUnboundedMessage &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.string_seq);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_union/cdr_op_cs.cpp:77


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Bound::BoundedUnion &_tao_union
  )
{
  if ( !(strm << _tao_union._d ()) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_union._d ())
  {
    case 1:
      {
        result = strm << _tao_union.float_field ();
      }
      break;
    case 2:
      {
        result = strm << _tao_union.long_field ();
      }
      break;
    default:
      {
        result = strm << _tao_union.short_field ();
      }
      break;
  }

  return result;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Bound::BoundedUnion &_tao_union
  )
{
  CORBA::Short _tao_discriminant;
  if ( !(strm >> _tao_discriminant) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_discriminant)
  {
    case 1:
      {
        CORBA::Float _tao_union_tmp;
        result = strm >> _tao_union_tmp;

        if (result)
          {
            _tao_union.float_field (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    case 2:
      {
        CORBA::Long _tao_union_tmp;
        result = strm >> _tao_union_tmp;

        if (result)
          {
            _tao_union.long_field (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    default:
      {
        CORBA::Short _tao_union_tmp;
        result = strm >> _tao_union_tmp;

        if (result)
          {
            _tao_union.short_field (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
  }

  return result;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Bound::BoundedUnionMessage &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.union_field);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Bound::BoundedUnionMessage &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.union_field);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_union/cdr_op_cs.cpp:77


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Bound::UnboundedUnion &_tao_union
  )
{
  if ( !(strm << _tao_union._d ()) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_union._d ())
  {
    case 1:
      {
        result = strm << _tao_union.string_field ();
      }
      break;
    case 2:
      {
        result = strm << _tao_union.long_field ();
      }
      break;
    default:
      {
        result = strm << _tao_union.short_field ();
      }
      break;
  }

  return result;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Bound::UnboundedUnion &_tao_union
  )
{
  CORBA::Short _tao_discriminant;
  if ( !(strm >> _tao_discriminant) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_discriminant)
  {
    case 1:
      {
        ::CORBA::String_var _tao_union_tmp;
        result = strm >> _tao_union_tmp.out ();

        if (result)
          {
            _tao_union.string_field (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    case 2:
      {
        CORBA::Long _tao_union_tmp;
        result = strm >> _tao_union_tmp;

        if (result)
          {
            _tao_union.long_field (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    default:
      {
        CORBA::Short _tao_union_tmp;
        result = strm >> _tao_union_tmp;

        if (result)
          {
            _tao_union.short_field (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
  }

  return result;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Bound::UnboundedUnionMessage &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.union_field);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Bound::UnboundedUnionMessage &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.union_field);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_Bound_SingleMessageSeq_CPP_
#define _TAO_CDR_OP_Bound_SingleMessageSeq_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Bound::SingleMessageSeq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Bound::SingleMessageSeq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Bound_SingleMessageSeq_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_union/cdr_op_cs.cpp:77


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Bound::NestedMessageUnion &_tao_union
  )
{
  if ( !(strm << _tao_union._d ()) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_union._d ())
  {
    case 1:
      {
        result = strm << _tao_union.message ();
      }
      break;
    case 2:
      {
        result = strm << _tao_union.long_field ();
      }
      break;
    default:
      {
        result = strm << _tao_union.short_field ();
      }
      break;
  }

  return result;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Bound::NestedMessageUnion &_tao_union
  )
{
  CORBA::Short _tao_discriminant;
  if ( !(strm >> _tao_discriminant) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_discriminant)
  {
    case 1:
      {
        Bound::SingleMessageSeq _tao_union_tmp;
        result = strm >> _tao_union_tmp;

        if (result)
          {
            _tao_union.message (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    case 2:
      {
        CORBA::Long _tao_union_tmp;
        result = strm >> _tao_union_tmp;

        if (result)
          {
            _tao_union.long_field (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    default:
      {
        CORBA::Short _tao_union_tmp;
        result = strm >> _tao_union_tmp;

        if (result)
          {
            _tao_union.short_field (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
  }

  return result;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Bound::RecursiveMessage &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.union_field) &&
    (strm << _tao_aggregate.float_field);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Bound::RecursiveMessage &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.union_field) &&
    (strm >> _tao_aggregate.float_field);
}

TAO_END_VERSIONED_NAMESPACE_DECL



