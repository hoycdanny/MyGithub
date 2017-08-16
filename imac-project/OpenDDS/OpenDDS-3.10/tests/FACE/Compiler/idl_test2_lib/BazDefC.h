/* -*- C++ -*- */
/* Generated by /Users/yc/MyGithub/imac-project/OpenDDS/OpenDDS-3.10/bin/opendds_idl version 3.10 (ACE version 6.2a_p11) running on input file ../../../DCPS/Compiler/idl_test2_lib/BazDef.idl */
#ifndef OPENDDS_IDL_GENERATED_BAZDEFC_H_8WVCPV
#define OPENDDS_IDL_GENERATED_BAZDEFC_H_8WVCPV
#include <tao/orbconf.h>
#include <tao/Basic_Types.h>
#include <ace/CDR_Stream.h>
#include <tao/VarOut_T.h>
#include "FACE/StringManager.h"
#include "FACE/types.hpp"
#include "FooDefC.h"
#include "foolib_export.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: Xyz */



/* Begin STRUCT: Foo */


/* End STRUCT: Foo */

/* End MODULE: Xyz */


/* Begin STRUCT: Bar */


/* End STRUCT: Bar */


/* Begin MODULE: Xyz */



/* Begin STRUCT: Baz */

namespace Xyz {
struct Baz;
typedef ::TAO_Fixed_Var_T<Baz> Baz_var;
typedef Baz& Baz_out;

struct FooLib_Export Baz
{
  typedef Baz_var _var_type;
  typedef Baz_out _out_type;

  Bar a_struct_value;

  bool operator==(const Baz& rhs) const;
  bool operator!=(const Baz& rhs) const { return !(*this == rhs); }
  OPENDDS_POOL_ALLOCATION_HOOKS
};

FooLib_Export ACE_CDR::Boolean operator<< (ACE_OutputCDR& os, const Baz& x);

FooLib_Export ACE_CDR::Boolean operator>> (ACE_InputCDR& os, Baz& x);

}

/* End STRUCT: Baz */

/* End MODULE: Xyz */
#endif /* OPENDDS_IDL_GENERATED_BAZDEFC_H_8WVCPV */
