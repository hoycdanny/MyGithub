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
// be/be_codegen.cpp:152

#ifndef _TAO_IDL_MYTYPESUPPORTC_RHVFP2_H_
#define _TAO_IDL_MYTYPESUPPORTC_RHVFP2_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "dds/DCPS/ZeroCopyInfoSeq_T.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "dds/DdsDcpsTypeSupportExtC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO 

// TAO_IDL - Generated from
// be/be_interface.cpp:751

#if !defined (_MYTYPESUPPORT__VAR_OUT_CH_)
#define _MYTYPESUPPORT__VAR_OUT_CH_

class MyTypeSupport;
typedef MyTypeSupport *MyTypeSupport_ptr;

typedef
  TAO_Objref_Var_T<
      MyTypeSupport
    >
  MyTypeSupport_var;

typedef
  TAO_Objref_Out_T<
      MyTypeSupport
    >
  MyTypeSupport_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:43

class  MyTypeSupport
  : public virtual ::OpenDDS::DCPS::TypeSupport

{
public:

  // TAO_IDL - Generated from
  // be/be_type.cpp:307

  typedef MyTypeSupport_ptr _ptr_type;
  typedef MyTypeSupport_var _var_type;
  typedef MyTypeSupport_out _out_type;

  // The static operations.
  static MyTypeSupport_ptr _duplicate (MyTypeSupport_ptr obj);

  static void _tao_release (MyTypeSupport_ptr obj);

  static MyTypeSupport_ptr _narrow (::CORBA::Object_ptr obj);
  static MyTypeSupport_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static MyTypeSupport_ptr _nil (void);

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:140

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Abstract or local interface only.
  MyTypeSupport (void);

  

  virtual ~MyTypeSupport (void);

private:
  // Private and unimplemented for concrete interfaces.
  MyTypeSupport (const MyTypeSupport &);

  void operator= (const MyTypeSupport &);
};

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:62

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_MYTYPESUPPORT__TRAITS_)
#define _MYTYPESUPPORT__TRAITS_

  template<>
  struct  Objref_Traits< ::MyTypeSupport>
  {
    static ::MyTypeSupport_ptr duplicate (
        ::MyTypeSupport_ptr p);
    static void release (
        ::MyTypeSupport_ptr p);
    static ::MyTypeSupport_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::MyTypeSupport_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "MyTypeSupportC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

