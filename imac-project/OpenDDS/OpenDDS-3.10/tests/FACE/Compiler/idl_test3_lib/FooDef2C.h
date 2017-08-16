/* -*- C++ -*- */
/* Generated by /Users/yc/MyGithub/imac-project/OpenDDS/OpenDDS-3.10/bin/opendds_idl version 3.10 (ACE version 6.2a_p11) running on input file ../../../DCPS/Compiler/idl_test3_lib/FooDef2.idl */
#ifndef OPENDDS_IDL_GENERATED_FOODEF2C_H_GCW8ZD
#define OPENDDS_IDL_GENERATED_FOODEF2C_H_GCW8ZD
#include <tao/orbconf.h>
#include <tao/Basic_Types.h>
#include <ace/CDR_Stream.h>
#include <tao/Array_VarOut_T.h>
#include <tao/VarOut_T.h>
#include "FACE/StringManager.h"
#include "FACE/types.hpp"
#include "dds/DCPS/SafetyProfilePool.h"
#include "SharedTypesC.h"
#include "foolib_export.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: Xyz */



/* Begin ENUM: AnEnum */


/* End ENUM: AnEnum */


/* Begin TYPEDEF: SeqOfBoolean */


/* End TYPEDEF: SeqOfBoolean */


/* Begin TYPEDEF: SeqOfString */


/* End TYPEDEF: SeqOfString */


/* Begin TYPEDEF: SeqOfChar */


/* End TYPEDEF: SeqOfChar */


/* Begin TYPEDEF: SeqOfOctet */


/* End TYPEDEF: SeqOfOctet */


/* Begin TYPEDEF: SeqOfLong */


/* End TYPEDEF: SeqOfLong */


/* Begin TYPEDEF: SeqOfAnEnum */


/* End TYPEDEF: SeqOfAnEnum */


/* Begin TYPEDEF: ArrayOfBoolean */


/* End TYPEDEF: ArrayOfBoolean */


/* Begin TYPEDEF: ArrayOfString */


/* End TYPEDEF: ArrayOfString */


/* Begin TYPEDEF: ArrayOfChar */


/* End TYPEDEF: ArrayOfChar */


/* Begin TYPEDEF: ArrayOfOctet */


/* End TYPEDEF: ArrayOfOctet */


/* Begin TYPEDEF: ArrayOfLong */


/* End TYPEDEF: ArrayOfLong */


/* Begin TYPEDEF: ArrayOfAnEnum */


/* End TYPEDEF: ArrayOfAnEnum */


/* Begin TYPEDEF: ArrayOfSeqOfBoolean */


/* End TYPEDEF: ArrayOfSeqOfBoolean */


/* Begin TYPEDEF: ArrayOfSeqOfString */


/* End TYPEDEF: ArrayOfSeqOfString */


/* Begin TYPEDEF: ArrayOfSeqOfChar */


/* End TYPEDEF: ArrayOfSeqOfChar */


/* Begin TYPEDEF: ArrayOfSeqOfOctet */


/* End TYPEDEF: ArrayOfSeqOfOctet */


/* Begin TYPEDEF: ArrayOfSeqOfLong */


/* End TYPEDEF: ArrayOfSeqOfLong */


/* Begin TYPEDEF: ArrayOfSeqOfAnEnum */


/* End TYPEDEF: ArrayOfSeqOfAnEnum */

/* End MODULE: Xyz */


/* Begin MODULE: Xyz */



/* Begin STRUCT: StructOfArrayOfBoolean */

namespace Xyz {
struct StructOfArrayOfBoolean;
typedef ::TAO_Fixed_Var_T<StructOfArrayOfBoolean> StructOfArrayOfBoolean_var;
typedef StructOfArrayOfBoolean& StructOfArrayOfBoolean_out;

struct FooLib_Export StructOfArrayOfBoolean
{
  typedef StructOfArrayOfBoolean_var _var_type;
  typedef StructOfArrayOfBoolean_out _out_type;

  Xyz::ArrayOfBoolean f;

  bool operator==(const StructOfArrayOfBoolean& rhs) const;
  bool operator!=(const StructOfArrayOfBoolean& rhs) const { return !(*this == rhs); }
  OPENDDS_POOL_ALLOCATION_HOOKS
};

FooLib_Export ACE_CDR::Boolean operator<< (ACE_OutputCDR& os, const StructOfArrayOfBoolean& x);

FooLib_Export ACE_CDR::Boolean operator>> (ACE_InputCDR& os, StructOfArrayOfBoolean& x);

}

/* End STRUCT: StructOfArrayOfBoolean */


/* Begin STRUCT: StructOfArrayOfString */

namespace Xyz {
struct StructOfArrayOfString;
typedef ::TAO_Var_Var_T<StructOfArrayOfString> StructOfArrayOfString_var;
typedef ::TAO_Out_T<StructOfArrayOfString> StructOfArrayOfString_out;

struct FooLib_Export StructOfArrayOfString
{
  typedef StructOfArrayOfString_var _var_type;
  typedef StructOfArrayOfString_out _out_type;

  Xyz::ArrayOfString f;

  bool operator==(const StructOfArrayOfString& rhs) const;
  bool operator!=(const StructOfArrayOfString& rhs) const { return !(*this == rhs); }
  OPENDDS_POOL_ALLOCATION_HOOKS
};

FooLib_Export void swap(StructOfArrayOfString& lhs, StructOfArrayOfString& rhs);

FooLib_Export ACE_CDR::Boolean operator<< (ACE_OutputCDR& os, const StructOfArrayOfString& x);

FooLib_Export ACE_CDR::Boolean operator>> (ACE_InputCDR& os, StructOfArrayOfString& x);

}

/* End STRUCT: StructOfArrayOfString */


/* Begin STRUCT: StructOfArrayOfChar */

namespace Xyz {
struct StructOfArrayOfChar;
typedef ::TAO_Fixed_Var_T<StructOfArrayOfChar> StructOfArrayOfChar_var;
typedef StructOfArrayOfChar& StructOfArrayOfChar_out;

struct FooLib_Export StructOfArrayOfChar
{
  typedef StructOfArrayOfChar_var _var_type;
  typedef StructOfArrayOfChar_out _out_type;

  Xyz::ArrayOfChar f;

  bool operator==(const StructOfArrayOfChar& rhs) const;
  bool operator!=(const StructOfArrayOfChar& rhs) const { return !(*this == rhs); }
  OPENDDS_POOL_ALLOCATION_HOOKS
};

FooLib_Export ACE_CDR::Boolean operator<< (ACE_OutputCDR& os, const StructOfArrayOfChar& x);

FooLib_Export ACE_CDR::Boolean operator>> (ACE_InputCDR& os, StructOfArrayOfChar& x);

}

/* End STRUCT: StructOfArrayOfChar */


/* Begin STRUCT: StructOfArrayOfOctet */

namespace Xyz {
struct StructOfArrayOfOctet;
typedef ::TAO_Fixed_Var_T<StructOfArrayOfOctet> StructOfArrayOfOctet_var;
typedef StructOfArrayOfOctet& StructOfArrayOfOctet_out;

struct FooLib_Export StructOfArrayOfOctet
{
  typedef StructOfArrayOfOctet_var _var_type;
  typedef StructOfArrayOfOctet_out _out_type;

  Xyz::ArrayOfOctet f;

  bool operator==(const StructOfArrayOfOctet& rhs) const;
  bool operator!=(const StructOfArrayOfOctet& rhs) const { return !(*this == rhs); }
  OPENDDS_POOL_ALLOCATION_HOOKS
};

FooLib_Export ACE_CDR::Boolean operator<< (ACE_OutputCDR& os, const StructOfArrayOfOctet& x);

FooLib_Export ACE_CDR::Boolean operator>> (ACE_InputCDR& os, StructOfArrayOfOctet& x);

}

/* End STRUCT: StructOfArrayOfOctet */


/* Begin STRUCT: StructOfArrayOfLong */

namespace Xyz {
struct StructOfArrayOfLong;
typedef ::TAO_Fixed_Var_T<StructOfArrayOfLong> StructOfArrayOfLong_var;
typedef StructOfArrayOfLong& StructOfArrayOfLong_out;

struct FooLib_Export StructOfArrayOfLong
{
  typedef StructOfArrayOfLong_var _var_type;
  typedef StructOfArrayOfLong_out _out_type;

  Xyz::ArrayOfLong f;

  bool operator==(const StructOfArrayOfLong& rhs) const;
  bool operator!=(const StructOfArrayOfLong& rhs) const { return !(*this == rhs); }
  OPENDDS_POOL_ALLOCATION_HOOKS
};

FooLib_Export ACE_CDR::Boolean operator<< (ACE_OutputCDR& os, const StructOfArrayOfLong& x);

FooLib_Export ACE_CDR::Boolean operator>> (ACE_InputCDR& os, StructOfArrayOfLong& x);

}

/* End STRUCT: StructOfArrayOfLong */


/* Begin STRUCT: StructOfArrayOfAnEnum */

namespace Xyz {
struct StructOfArrayOfAnEnum;
typedef ::TAO_Fixed_Var_T<StructOfArrayOfAnEnum> StructOfArrayOfAnEnum_var;
typedef StructOfArrayOfAnEnum& StructOfArrayOfAnEnum_out;

struct FooLib_Export StructOfArrayOfAnEnum
{
  typedef StructOfArrayOfAnEnum_var _var_type;
  typedef StructOfArrayOfAnEnum_out _out_type;

  Xyz::ArrayOfAnEnum f;

  bool operator==(const StructOfArrayOfAnEnum& rhs) const;
  bool operator!=(const StructOfArrayOfAnEnum& rhs) const { return !(*this == rhs); }
  OPENDDS_POOL_ALLOCATION_HOOKS
};

FooLib_Export ACE_CDR::Boolean operator<< (ACE_OutputCDR& os, const StructOfArrayOfAnEnum& x);

FooLib_Export ACE_CDR::Boolean operator>> (ACE_InputCDR& os, StructOfArrayOfAnEnum& x);

}

/* End STRUCT: StructOfArrayOfAnEnum */


/* Begin TYPEDEF: ArrayOfBoolean2 */

namespace Xyz {
typedef ::FACE::Boolean ArrayOfBoolean2[5];
typedef ::FACE::Boolean ArrayOfBoolean2_slice;
struct ArrayOfBoolean2_tag {};
typedef ::TAO_FixedArray_Var_T<ArrayOfBoolean2, ArrayOfBoolean2_slice, ArrayOfBoolean2_tag> ArrayOfBoolean2_var;
typedef ArrayOfBoolean2 ArrayOfBoolean2_out;
typedef ::TAO_Array_Forany_T<ArrayOfBoolean2, ArrayOfBoolean2_slice, ArrayOfBoolean2_tag> ArrayOfBoolean2_forany;

FooLib_Export ArrayOfBoolean2_slice* ArrayOfBoolean2_alloc();
FooLib_Export void ArrayOfBoolean2_init_i(::FACE::Boolean* begin);
FooLib_Export void ArrayOfBoolean2_fini_i(::FACE::Boolean* begin);
FooLib_Export void ArrayOfBoolean2_free(ArrayOfBoolean2_slice* slice);
FooLib_Export ArrayOfBoolean2_slice* ArrayOfBoolean2_dup(const ArrayOfBoolean2_slice* slice);
FooLib_Export void ArrayOfBoolean2_copy(ArrayOfBoolean2_slice* dst, const ArrayOfBoolean2_slice* src);

inline ACE_CDR::Boolean operator<<(ACE_OutputCDR &, const ArrayOfBoolean2_forany&) { return true; }

inline ACE_CDR::Boolean operator>>(ACE_InputCDR &, ArrayOfBoolean2_forany&) { return true; }

}
TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace TAO {
template <>
struct FooLib_Export Array_Traits<Xyz::ArrayOfBoolean2_forany>
{
  static void free(Xyz::ArrayOfBoolean2_slice* slice)
  {
    Xyz::ArrayOfBoolean2_free(slice);
  }

  static Xyz::ArrayOfBoolean2_slice* dup(const Xyz::ArrayOfBoolean2_slice* slice)
  {
    return Xyz::ArrayOfBoolean2_dup(slice);
  }

  static void copy(Xyz::ArrayOfBoolean2_slice* dst, const Xyz::ArrayOfBoolean2_slice* src)
  {
    Xyz::ArrayOfBoolean2_copy(dst, src);
  }

  static Xyz::ArrayOfBoolean2_slice* alloc()
  {
    return Xyz::ArrayOfBoolean2_alloc();
  }

  static void zero(Xyz::ArrayOfBoolean2_slice* slice)
  {
    Xyz::ArrayOfBoolean2_fini_i(slice);
    Xyz::ArrayOfBoolean2_init_i(slice);
  }
  static void construct(Xyz::ArrayOfBoolean2_slice* slice)
  {
    Xyz::ArrayOfBoolean2_init_i(slice);
  }
  static void destroy(Xyz::ArrayOfBoolean2_slice* slice)
  {
    Xyz::ArrayOfBoolean2_fini_i(slice);
  }
};
}
TAO_END_VERSIONED_NAMESPACE_DECL


/* End TYPEDEF: ArrayOfBoolean2 */


/* Begin TYPEDEF: ArrayOfString2 */

namespace Xyz {
typedef ::OpenDDS::FaceTypes::String_mgr ArrayOfString2[5];
typedef ::OpenDDS::FaceTypes::String_mgr ArrayOfString2_slice;
struct ArrayOfString2_tag {};
typedef ::TAO_VarArray_Var_T<ArrayOfString2, ArrayOfString2_slice, ArrayOfString2_tag> ArrayOfString2_var;
typedef ::TAO_Array_Out_T<ArrayOfString2, ArrayOfString2_var, ArrayOfString2_slice, ArrayOfString2_tag> ArrayOfString2_out;
typedef ::TAO_Array_Forany_T<ArrayOfString2, ArrayOfString2_slice, ArrayOfString2_tag> ArrayOfString2_forany;

FooLib_Export ArrayOfString2_slice* ArrayOfString2_alloc();
FooLib_Export void ArrayOfString2_init_i(::OpenDDS::FaceTypes::String_mgr* begin);
FooLib_Export void ArrayOfString2_fini_i(::OpenDDS::FaceTypes::String_mgr* begin);
FooLib_Export void ArrayOfString2_free(ArrayOfString2_slice* slice);
FooLib_Export ArrayOfString2_slice* ArrayOfString2_dup(const ArrayOfString2_slice* slice);
FooLib_Export void ArrayOfString2_copy(ArrayOfString2_slice* dst, const ArrayOfString2_slice* src);

inline ACE_CDR::Boolean operator<<(ACE_OutputCDR &, const ArrayOfString2_forany&) { return true; }

inline ACE_CDR::Boolean operator>>(ACE_InputCDR &, ArrayOfString2_forany&) { return true; }

}
TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace TAO {
template <>
struct FooLib_Export Array_Traits<Xyz::ArrayOfString2_forany>
{
  static void free(Xyz::ArrayOfString2_slice* slice)
  {
    Xyz::ArrayOfString2_free(slice);
  }

  static Xyz::ArrayOfString2_slice* dup(const Xyz::ArrayOfString2_slice* slice)
  {
    return Xyz::ArrayOfString2_dup(slice);
  }

  static void copy(Xyz::ArrayOfString2_slice* dst, const Xyz::ArrayOfString2_slice* src)
  {
    Xyz::ArrayOfString2_copy(dst, src);
  }

  static Xyz::ArrayOfString2_slice* alloc()
  {
    return Xyz::ArrayOfString2_alloc();
  }

  static void zero(Xyz::ArrayOfString2_slice* slice)
  {
    Xyz::ArrayOfString2_fini_i(slice);
    Xyz::ArrayOfString2_init_i(slice);
  }
  static void construct(Xyz::ArrayOfString2_slice* slice)
  {
    Xyz::ArrayOfString2_init_i(slice);
  }
  static void destroy(Xyz::ArrayOfString2_slice* slice)
  {
    Xyz::ArrayOfString2_fini_i(slice);
  }
};
}
TAO_END_VERSIONED_NAMESPACE_DECL


/* End TYPEDEF: ArrayOfString2 */


/* Begin TYPEDEF: ArrayOfChar2 */

namespace Xyz {
typedef ::FACE::Char ArrayOfChar2[5];
typedef ::FACE::Char ArrayOfChar2_slice;
struct ArrayOfChar2_tag {};
typedef ::TAO_FixedArray_Var_T<ArrayOfChar2, ArrayOfChar2_slice, ArrayOfChar2_tag> ArrayOfChar2_var;
typedef ArrayOfChar2 ArrayOfChar2_out;
typedef ::TAO_Array_Forany_T<ArrayOfChar2, ArrayOfChar2_slice, ArrayOfChar2_tag> ArrayOfChar2_forany;

FooLib_Export ArrayOfChar2_slice* ArrayOfChar2_alloc();
FooLib_Export void ArrayOfChar2_init_i(::FACE::Char* begin);
FooLib_Export void ArrayOfChar2_fini_i(::FACE::Char* begin);
FooLib_Export void ArrayOfChar2_free(ArrayOfChar2_slice* slice);
FooLib_Export ArrayOfChar2_slice* ArrayOfChar2_dup(const ArrayOfChar2_slice* slice);
FooLib_Export void ArrayOfChar2_copy(ArrayOfChar2_slice* dst, const ArrayOfChar2_slice* src);

inline ACE_CDR::Boolean operator<<(ACE_OutputCDR &, const ArrayOfChar2_forany&) { return true; }

inline ACE_CDR::Boolean operator>>(ACE_InputCDR &, ArrayOfChar2_forany&) { return true; }

}
TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace TAO {
template <>
struct FooLib_Export Array_Traits<Xyz::ArrayOfChar2_forany>
{
  static void free(Xyz::ArrayOfChar2_slice* slice)
  {
    Xyz::ArrayOfChar2_free(slice);
  }

  static Xyz::ArrayOfChar2_slice* dup(const Xyz::ArrayOfChar2_slice* slice)
  {
    return Xyz::ArrayOfChar2_dup(slice);
  }

  static void copy(Xyz::ArrayOfChar2_slice* dst, const Xyz::ArrayOfChar2_slice* src)
  {
    Xyz::ArrayOfChar2_copy(dst, src);
  }

  static Xyz::ArrayOfChar2_slice* alloc()
  {
    return Xyz::ArrayOfChar2_alloc();
  }

  static void zero(Xyz::ArrayOfChar2_slice* slice)
  {
    Xyz::ArrayOfChar2_fini_i(slice);
    Xyz::ArrayOfChar2_init_i(slice);
  }
  static void construct(Xyz::ArrayOfChar2_slice* slice)
  {
    Xyz::ArrayOfChar2_init_i(slice);
  }
  static void destroy(Xyz::ArrayOfChar2_slice* slice)
  {
    Xyz::ArrayOfChar2_fini_i(slice);
  }
};
}
TAO_END_VERSIONED_NAMESPACE_DECL


/* End TYPEDEF: ArrayOfChar2 */


/* Begin TYPEDEF: ArrayOfOctet2 */

namespace Xyz {
typedef ::FACE::Octet ArrayOfOctet2[5];
typedef ::FACE::Octet ArrayOfOctet2_slice;
struct ArrayOfOctet2_tag {};
typedef ::TAO_FixedArray_Var_T<ArrayOfOctet2, ArrayOfOctet2_slice, ArrayOfOctet2_tag> ArrayOfOctet2_var;
typedef ArrayOfOctet2 ArrayOfOctet2_out;
typedef ::TAO_Array_Forany_T<ArrayOfOctet2, ArrayOfOctet2_slice, ArrayOfOctet2_tag> ArrayOfOctet2_forany;

FooLib_Export ArrayOfOctet2_slice* ArrayOfOctet2_alloc();
FooLib_Export void ArrayOfOctet2_init_i(::FACE::Octet* begin);
FooLib_Export void ArrayOfOctet2_fini_i(::FACE::Octet* begin);
FooLib_Export void ArrayOfOctet2_free(ArrayOfOctet2_slice* slice);
FooLib_Export ArrayOfOctet2_slice* ArrayOfOctet2_dup(const ArrayOfOctet2_slice* slice);
FooLib_Export void ArrayOfOctet2_copy(ArrayOfOctet2_slice* dst, const ArrayOfOctet2_slice* src);

inline ACE_CDR::Boolean operator<<(ACE_OutputCDR &, const ArrayOfOctet2_forany&) { return true; }

inline ACE_CDR::Boolean operator>>(ACE_InputCDR &, ArrayOfOctet2_forany&) { return true; }

}
TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace TAO {
template <>
struct FooLib_Export Array_Traits<Xyz::ArrayOfOctet2_forany>
{
  static void free(Xyz::ArrayOfOctet2_slice* slice)
  {
    Xyz::ArrayOfOctet2_free(slice);
  }

  static Xyz::ArrayOfOctet2_slice* dup(const Xyz::ArrayOfOctet2_slice* slice)
  {
    return Xyz::ArrayOfOctet2_dup(slice);
  }

  static void copy(Xyz::ArrayOfOctet2_slice* dst, const Xyz::ArrayOfOctet2_slice* src)
  {
    Xyz::ArrayOfOctet2_copy(dst, src);
  }

  static Xyz::ArrayOfOctet2_slice* alloc()
  {
    return Xyz::ArrayOfOctet2_alloc();
  }

  static void zero(Xyz::ArrayOfOctet2_slice* slice)
  {
    Xyz::ArrayOfOctet2_fini_i(slice);
    Xyz::ArrayOfOctet2_init_i(slice);
  }
  static void construct(Xyz::ArrayOfOctet2_slice* slice)
  {
    Xyz::ArrayOfOctet2_init_i(slice);
  }
  static void destroy(Xyz::ArrayOfOctet2_slice* slice)
  {
    Xyz::ArrayOfOctet2_fini_i(slice);
  }
};
}
TAO_END_VERSIONED_NAMESPACE_DECL


/* End TYPEDEF: ArrayOfOctet2 */


/* Begin TYPEDEF: ArrayOfLong2 */

namespace Xyz {
typedef ::FACE::Long ArrayOfLong2[5];
typedef ::FACE::Long ArrayOfLong2_slice;
struct ArrayOfLong2_tag {};
typedef ::TAO_FixedArray_Var_T<ArrayOfLong2, ArrayOfLong2_slice, ArrayOfLong2_tag> ArrayOfLong2_var;
typedef ArrayOfLong2 ArrayOfLong2_out;
typedef ::TAO_Array_Forany_T<ArrayOfLong2, ArrayOfLong2_slice, ArrayOfLong2_tag> ArrayOfLong2_forany;

FooLib_Export ArrayOfLong2_slice* ArrayOfLong2_alloc();
FooLib_Export void ArrayOfLong2_init_i(::FACE::Long* begin);
FooLib_Export void ArrayOfLong2_fini_i(::FACE::Long* begin);
FooLib_Export void ArrayOfLong2_free(ArrayOfLong2_slice* slice);
FooLib_Export ArrayOfLong2_slice* ArrayOfLong2_dup(const ArrayOfLong2_slice* slice);
FooLib_Export void ArrayOfLong2_copy(ArrayOfLong2_slice* dst, const ArrayOfLong2_slice* src);

inline ACE_CDR::Boolean operator<<(ACE_OutputCDR &, const ArrayOfLong2_forany&) { return true; }

inline ACE_CDR::Boolean operator>>(ACE_InputCDR &, ArrayOfLong2_forany&) { return true; }

}
TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace TAO {
template <>
struct FooLib_Export Array_Traits<Xyz::ArrayOfLong2_forany>
{
  static void free(Xyz::ArrayOfLong2_slice* slice)
  {
    Xyz::ArrayOfLong2_free(slice);
  }

  static Xyz::ArrayOfLong2_slice* dup(const Xyz::ArrayOfLong2_slice* slice)
  {
    return Xyz::ArrayOfLong2_dup(slice);
  }

  static void copy(Xyz::ArrayOfLong2_slice* dst, const Xyz::ArrayOfLong2_slice* src)
  {
    Xyz::ArrayOfLong2_copy(dst, src);
  }

  static Xyz::ArrayOfLong2_slice* alloc()
  {
    return Xyz::ArrayOfLong2_alloc();
  }

  static void zero(Xyz::ArrayOfLong2_slice* slice)
  {
    Xyz::ArrayOfLong2_fini_i(slice);
    Xyz::ArrayOfLong2_init_i(slice);
  }
  static void construct(Xyz::ArrayOfLong2_slice* slice)
  {
    Xyz::ArrayOfLong2_init_i(slice);
  }
  static void destroy(Xyz::ArrayOfLong2_slice* slice)
  {
    Xyz::ArrayOfLong2_fini_i(slice);
  }
};
}
TAO_END_VERSIONED_NAMESPACE_DECL


/* End TYPEDEF: ArrayOfLong2 */


/* Begin TYPEDEF: ArrayOfAnEnum2 */

namespace Xyz {
typedef Xyz::AnEnum ArrayOfAnEnum2[5];
typedef Xyz::AnEnum ArrayOfAnEnum2_slice;
struct ArrayOfAnEnum2_tag {};
typedef ::TAO_FixedArray_Var_T<ArrayOfAnEnum2, ArrayOfAnEnum2_slice, ArrayOfAnEnum2_tag> ArrayOfAnEnum2_var;
typedef ArrayOfAnEnum2 ArrayOfAnEnum2_out;
typedef ::TAO_Array_Forany_T<ArrayOfAnEnum2, ArrayOfAnEnum2_slice, ArrayOfAnEnum2_tag> ArrayOfAnEnum2_forany;

FooLib_Export ArrayOfAnEnum2_slice* ArrayOfAnEnum2_alloc();
FooLib_Export void ArrayOfAnEnum2_init_i(Xyz::AnEnum* begin);
FooLib_Export void ArrayOfAnEnum2_fini_i(Xyz::AnEnum* begin);
FooLib_Export void ArrayOfAnEnum2_free(ArrayOfAnEnum2_slice* slice);
FooLib_Export ArrayOfAnEnum2_slice* ArrayOfAnEnum2_dup(const ArrayOfAnEnum2_slice* slice);
FooLib_Export void ArrayOfAnEnum2_copy(ArrayOfAnEnum2_slice* dst, const ArrayOfAnEnum2_slice* src);

inline ACE_CDR::Boolean operator<<(ACE_OutputCDR &, const ArrayOfAnEnum2_forany&) { return true; }

inline ACE_CDR::Boolean operator>>(ACE_InputCDR &, ArrayOfAnEnum2_forany&) { return true; }

}
TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace TAO {
template <>
struct FooLib_Export Array_Traits<Xyz::ArrayOfAnEnum2_forany>
{
  static void free(Xyz::ArrayOfAnEnum2_slice* slice)
  {
    Xyz::ArrayOfAnEnum2_free(slice);
  }

  static Xyz::ArrayOfAnEnum2_slice* dup(const Xyz::ArrayOfAnEnum2_slice* slice)
  {
    return Xyz::ArrayOfAnEnum2_dup(slice);
  }

  static void copy(Xyz::ArrayOfAnEnum2_slice* dst, const Xyz::ArrayOfAnEnum2_slice* src)
  {
    Xyz::ArrayOfAnEnum2_copy(dst, src);
  }

  static Xyz::ArrayOfAnEnum2_slice* alloc()
  {
    return Xyz::ArrayOfAnEnum2_alloc();
  }

  static void zero(Xyz::ArrayOfAnEnum2_slice* slice)
  {
    Xyz::ArrayOfAnEnum2_fini_i(slice);
    Xyz::ArrayOfAnEnum2_init_i(slice);
  }
  static void construct(Xyz::ArrayOfAnEnum2_slice* slice)
  {
    Xyz::ArrayOfAnEnum2_init_i(slice);
  }
  static void destroy(Xyz::ArrayOfAnEnum2_slice* slice)
  {
    Xyz::ArrayOfAnEnum2_fini_i(slice);
  }
};
}
TAO_END_VERSIONED_NAMESPACE_DECL


/* End TYPEDEF: ArrayOfAnEnum2 */


/* Begin STRUCT: StructOfSeqOfBoolean */

namespace Xyz {
struct StructOfSeqOfBoolean;
typedef ::TAO_Var_Var_T<StructOfSeqOfBoolean> StructOfSeqOfBoolean_var;
typedef ::TAO_Out_T<StructOfSeqOfBoolean> StructOfSeqOfBoolean_out;

struct FooLib_Export StructOfSeqOfBoolean
{
  typedef StructOfSeqOfBoolean_var _var_type;
  typedef StructOfSeqOfBoolean_out _out_type;

  Xyz::SeqOfBoolean field;

  bool operator==(const StructOfSeqOfBoolean& rhs) const;
  bool operator!=(const StructOfSeqOfBoolean& rhs) const { return !(*this == rhs); }
  OPENDDS_POOL_ALLOCATION_HOOKS
};

FooLib_Export void swap(StructOfSeqOfBoolean& lhs, StructOfSeqOfBoolean& rhs);

FooLib_Export ACE_CDR::Boolean operator<< (ACE_OutputCDR& os, const StructOfSeqOfBoolean& x);

FooLib_Export ACE_CDR::Boolean operator>> (ACE_InputCDR& os, StructOfSeqOfBoolean& x);

}

/* End STRUCT: StructOfSeqOfBoolean */


/* Begin STRUCT: StructOfSeqOfString */

namespace Xyz {
struct StructOfSeqOfString;
typedef ::TAO_Var_Var_T<StructOfSeqOfString> StructOfSeqOfString_var;
typedef ::TAO_Out_T<StructOfSeqOfString> StructOfSeqOfString_out;

struct FooLib_Export StructOfSeqOfString
{
  typedef StructOfSeqOfString_var _var_type;
  typedef StructOfSeqOfString_out _out_type;

  Xyz::SeqOfString field;

  bool operator==(const StructOfSeqOfString& rhs) const;
  bool operator!=(const StructOfSeqOfString& rhs) const { return !(*this == rhs); }
  OPENDDS_POOL_ALLOCATION_HOOKS
};

FooLib_Export void swap(StructOfSeqOfString& lhs, StructOfSeqOfString& rhs);

FooLib_Export ACE_CDR::Boolean operator<< (ACE_OutputCDR& os, const StructOfSeqOfString& x);

FooLib_Export ACE_CDR::Boolean operator>> (ACE_InputCDR& os, StructOfSeqOfString& x);

}

/* End STRUCT: StructOfSeqOfString */


/* Begin STRUCT: StructOfSeqOfChar */

namespace Xyz {
struct StructOfSeqOfChar;
typedef ::TAO_Var_Var_T<StructOfSeqOfChar> StructOfSeqOfChar_var;
typedef ::TAO_Out_T<StructOfSeqOfChar> StructOfSeqOfChar_out;

struct FooLib_Export StructOfSeqOfChar
{
  typedef StructOfSeqOfChar_var _var_type;
  typedef StructOfSeqOfChar_out _out_type;

  Xyz::SeqOfChar field;

  bool operator==(const StructOfSeqOfChar& rhs) const;
  bool operator!=(const StructOfSeqOfChar& rhs) const { return !(*this == rhs); }
  OPENDDS_POOL_ALLOCATION_HOOKS
};

FooLib_Export void swap(StructOfSeqOfChar& lhs, StructOfSeqOfChar& rhs);

FooLib_Export ACE_CDR::Boolean operator<< (ACE_OutputCDR& os, const StructOfSeqOfChar& x);

FooLib_Export ACE_CDR::Boolean operator>> (ACE_InputCDR& os, StructOfSeqOfChar& x);

}

/* End STRUCT: StructOfSeqOfChar */


/* Begin STRUCT: StructOfSeqOfOctet */

namespace Xyz {
struct StructOfSeqOfOctet;
typedef ::TAO_Var_Var_T<StructOfSeqOfOctet> StructOfSeqOfOctet_var;
typedef ::TAO_Out_T<StructOfSeqOfOctet> StructOfSeqOfOctet_out;

struct FooLib_Export StructOfSeqOfOctet
{
  typedef StructOfSeqOfOctet_var _var_type;
  typedef StructOfSeqOfOctet_out _out_type;

  Xyz::SeqOfOctet field;

  bool operator==(const StructOfSeqOfOctet& rhs) const;
  bool operator!=(const StructOfSeqOfOctet& rhs) const { return !(*this == rhs); }
  OPENDDS_POOL_ALLOCATION_HOOKS
};

FooLib_Export void swap(StructOfSeqOfOctet& lhs, StructOfSeqOfOctet& rhs);

FooLib_Export ACE_CDR::Boolean operator<< (ACE_OutputCDR& os, const StructOfSeqOfOctet& x);

FooLib_Export ACE_CDR::Boolean operator>> (ACE_InputCDR& os, StructOfSeqOfOctet& x);

}

/* End STRUCT: StructOfSeqOfOctet */


/* Begin STRUCT: StructOfSeqOfLong */

namespace Xyz {
struct StructOfSeqOfLong;
typedef ::TAO_Var_Var_T<StructOfSeqOfLong> StructOfSeqOfLong_var;
typedef ::TAO_Out_T<StructOfSeqOfLong> StructOfSeqOfLong_out;

struct FooLib_Export StructOfSeqOfLong
{
  typedef StructOfSeqOfLong_var _var_type;
  typedef StructOfSeqOfLong_out _out_type;

  Xyz::SeqOfLong field;

  bool operator==(const StructOfSeqOfLong& rhs) const;
  bool operator!=(const StructOfSeqOfLong& rhs) const { return !(*this == rhs); }
  OPENDDS_POOL_ALLOCATION_HOOKS
};

FooLib_Export void swap(StructOfSeqOfLong& lhs, StructOfSeqOfLong& rhs);

FooLib_Export ACE_CDR::Boolean operator<< (ACE_OutputCDR& os, const StructOfSeqOfLong& x);

FooLib_Export ACE_CDR::Boolean operator>> (ACE_InputCDR& os, StructOfSeqOfLong& x);

}

/* End STRUCT: StructOfSeqOfLong */


/* Begin STRUCT: StructOfSeqOfAnEnum */

namespace Xyz {
struct StructOfSeqOfAnEnum;
typedef ::TAO_Var_Var_T<StructOfSeqOfAnEnum> StructOfSeqOfAnEnum_var;
typedef ::TAO_Out_T<StructOfSeqOfAnEnum> StructOfSeqOfAnEnum_out;

struct FooLib_Export StructOfSeqOfAnEnum
{
  typedef StructOfSeqOfAnEnum_var _var_type;
  typedef StructOfSeqOfAnEnum_out _out_type;

  Xyz::SeqOfAnEnum field;

  bool operator==(const StructOfSeqOfAnEnum& rhs) const;
  bool operator!=(const StructOfSeqOfAnEnum& rhs) const { return !(*this == rhs); }
  OPENDDS_POOL_ALLOCATION_HOOKS
};

FooLib_Export void swap(StructOfSeqOfAnEnum& lhs, StructOfSeqOfAnEnum& rhs);

FooLib_Export ACE_CDR::Boolean operator<< (ACE_OutputCDR& os, const StructOfSeqOfAnEnum& x);

FooLib_Export ACE_CDR::Boolean operator>> (ACE_InputCDR& os, StructOfSeqOfAnEnum& x);

}

/* End STRUCT: StructOfSeqOfAnEnum */

/* End MODULE: Xyz */
#endif /* OPENDDS_IDL_GENERATED_FOODEF2C_H_GCW8ZD */