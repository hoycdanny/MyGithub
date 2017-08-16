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
// be/be_codegen.cpp:715

#ifndef _TAO_IDL_PORTABLESERVER_POLICYS_T_L54GNS_CPP_
#define _TAO_IDL_PORTABLESERVER_POLICYS_T_L54GNS_CPP_

#include "PolicyS_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/tie_ss.cpp:82

template <class T>
POA_CORBA::Policy_tie<T>::Policy_tie (T &t)
  : ptr_ (&t),
    poa_ ( ::PortableServer::POA::_nil ()),
    rel_ (false)
{}

template <class T>
POA_CORBA::Policy_tie<T>::Policy_tie (T &t, ::PortableServer::POA_ptr poa)
  : ptr_ (&t),
    poa_ ( ::PortableServer::POA::_duplicate (poa)),
    rel_ (false)
{}

template <class T>
POA_CORBA::Policy_tie<T>::Policy_tie (T *tp, ::CORBA::Boolean release)
  : ptr_ (tp),
    poa_ ( ::PortableServer::POA::_nil ()),
    rel_ (release)
{}

template <class T>
POA_CORBA::Policy_tie<T>::Policy_tie (T *tp, ::PortableServer::POA_ptr poa, ::CORBA::Boolean release)
  : ptr_ (tp),
    poa_ ( ::PortableServer::POA::_duplicate (poa)),
    rel_ (release)
{}

template <class T>
POA_CORBA::Policy_tie<T>::~Policy_tie (void)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
}

template <class T> T *
POA_CORBA::Policy_tie<T>::_tied_object (void)
{
  return this->ptr_;
}

template <class T> void
POA_CORBA::Policy_tie<T>::_tied_object (T &obj)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = &obj;
  this->rel_ = false;
}

template <class T> void
POA_CORBA::Policy_tie<T>::_tied_object (T *obj, ::CORBA::Boolean release)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = obj;
  this->rel_ = release;
}

template <class T>  ::CORBA::Boolean
POA_CORBA::Policy_tie<T>::_is_owner (void)
{
  return this->rel_;
}

template <class T> void
POA_CORBA::Policy_tie<T>::_is_owner ( ::CORBA::Boolean b)
{
  this->rel_ = b;
}

template <class T> PortableServer::POA_ptr
POA_CORBA::Policy_tie<T>::_default_POA ()
{
  if (! ::CORBA::is_nil (this->poa_.in ()))
    {
      return ::PortableServer::POA::_duplicate (this->poa_.in ());
    }
  
  return this->Policy::_default_POA ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/tie_ss.cpp:95

template <class T>
::CORBA::PolicyType POA_CORBA::Policy_tie<T>::policy_type  (
  void)
{
  return this->ptr_->policy_type (
  );
}

// TAO_IDL - Generated from
// be/be_visitor_operation/tie_ss.cpp:95

template <class T>
::CORBA::Policy_ptr POA_CORBA::Policy_tie<T>::copy  (
  void)
{
  return this->ptr_->copy (
  );
}

// TAO_IDL - Generated from
// be/be_visitor_operation/tie_ss.cpp:95

template <class T>
void POA_CORBA::Policy_tie<T>::destroy  (
  void)
{
  this->ptr_->destroy (
  );
}

TAO_END_VERSIONED_NAMESPACE_DECL


#endif /* ifndef */
