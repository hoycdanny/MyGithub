/* Generated by /Users/yc/MyGithub/imac-project/OpenDDS/OpenDDS-3.10/bin/opendds_idl version 3.10 (ACE version 6.2a_p11) running on input file MetaStructTest.idl */
#include "MetaStructTestTypeSupportImpl.h"

#include <cstring>
#include <stdexcept>
#include "dds/DCPS/FilterEvaluator.h"
#include "dds/DCPS/PoolAllocator.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin STRUCT: A */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const A& stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  find_size_ulong(size, padding);
  size += ACE_OS::strlen(stru.s.in()) + 1;
  if ((size + padding) % 4) {
    padding += 4 - ((size + padding) % 4);
  }
  size += gen_max_marshaled_size(stru.l);
}

bool operator<<(Serializer& strm, const A& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm << stru.s.in())
    && (strm << stru.l);
}

bool operator>>(Serializer& strm, A& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm >> stru.s.out())
    && (strm >> stru.l);
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl<A> : MetaStruct {
  typedef A T;

  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }

  size_t numDcpsKeys() const { return 0; }

  Value getValue(const void* stru, const char* field) const
  {
    const A& typed = *static_cast<const A*>(stru);
    if (std::strcmp(field, "s") == 0) {
      return typed.s.in();
    }
    if (std::strcmp(field, "l") == 0) {
      return typed.l;
    }
    ACE_UNUSED_ARG(typed);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct A)");
  }

  Value getValue(Serializer& ser, const char* field) const
  {
    if (std::strcmp(field, "s") == 0) {
      TAO::String_Manager val;
      if (!(ser >> val.out())) {
        throw std::runtime_error("Field 's' could not be deserialized");
      }
      return val;
    } else {
      ACE_CDR::ULong len;
      if (!(ser >> len)) {
        throw std::runtime_error("String 's' length could not be deserialized");
      }
      ser.skip(len);
    }
    if (std::strcmp(field, "l") == 0) {
      ACE_CDR::Long val;
      if (!(ser >> val)) {
        throw std::runtime_error("Field 'l' could not be deserialized");
      }
      return val;
    } else {
      ser.skip(1, 4);
    }
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not valid for struct A");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    if (std::strcmp(field, "s") == 0) {
      return make_field_cmp(&T::s, next);
    }
    if (std::strcmp(field, "l") == 0) {
      return make_field_cmp(&T::l, next);
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct A)");
  }

  const char** getFieldNames() const
  {
    static const char* names[] = {"s", "l", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "s") == 0) {
      return &static_cast<const T*>(stru)->s;
    }
    if (std::strcmp(field, "l") == 0) {
      return &static_cast<const T*>(stru)->l;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct A)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "s") == 0) {
      static_cast<T*>(lhs)->s = *static_cast<const TAO::String_Manager*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "l") == 0) {
      static_cast<T*>(lhs)->l = *static_cast<const CORBA::Long*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct A)");
  }

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    if (std::strcmp(field, "s") == 0) {
      return 0 == ACE_OS::strcmp(static_cast<const T*>(lhs)->s.in(), static_cast<const T*>(rhs)->s.in());
    }
    if (std::strcmp(field, "l") == 0) {
      return static_cast<const T*>(lhs)->l == static_cast<const T*>(rhs)->l;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct A)");
  }
};

template<>
const MetaStruct& getMetaStruct<A>()
{
  static MetaStructImpl<A> msi;
  return msi;
}

void gen_skip_over(Serializer& ser, A*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl<A>().getValue(ser, "");
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: A */


/* Begin TYPEDEF: ShortArray */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const ShortArray_forany& arr, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(arr);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  if ((size + padding) % 2) {
    padding += 2 - ((size + padding) % 2);
  }
  size += 3 * gen_max_marshaled_size(CORBA::Short());
}

bool operator<<(Serializer& strm, const ShortArray_forany& arr)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(arr);
  return strm.write_short_array(arr.in(), 3);
}

bool operator>>(Serializer& strm, ShortArray_forany& arr)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(arr);
  return strm.read_short_array(arr.out(), 3);
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_skip_over(Serializer& ser, ShortArray_forany*)
{
  ACE_UNUSED_ARG(ser);
  ser.skip(3, 2);
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: ShortArray */


/* Begin TYPEDEF: ArrayOfShortArray */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const ArrayOfShortArray_forany& arr, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(arr);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  for (CORBA::ULong i0 = 0; i0 < 4; ++i0) {
    ShortArray_var tmp_var = ShortArray_dup(arr[i0]);
    ShortArray_forany tmp = tmp_var.inout();
    gen_find_size(tmp, size, padding);
  }
}

bool operator<<(Serializer& strm, const ArrayOfShortArray_forany& arr)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(arr);
  for (CORBA::ULong i0 = 0; i0 < 4; ++i0) {
    ShortArray_var tmp_var = ShortArray_dup(arr[i0]);
    ShortArray_forany tmp = tmp_var.inout();
    if (!(strm << tmp)) {
      return false;
    }
  }
  return true;
}

bool operator>>(Serializer& strm, ArrayOfShortArray_forany& arr)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(arr);
  for (CORBA::ULong i0 = 0; i0 < 4; ++i0) {
    ShortArray_var tmp = ShortArray_alloc();
    ShortArray_forany fa = tmp.inout();
    if (!(strm >> fa)) {
      return false;
    }
    ShortArray_copy(arr[i0], tmp.in());
  }
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_skip_over(Serializer& ser, ArrayOfShortArray_forany*)
{
  ACE_UNUSED_ARG(ser);
  for (ACE_CDR::ULong i = 0; i < 4; ++i) {
    gen_skip_over(ser, static_cast<ShortArray_forany*>(0));
  }
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: ArrayOfShortArray */


/* Begin TYPEDEF: StructSeq */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const StructSeq& seq, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(seq);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  find_size_ulong(size, padding);
  if (seq.length() == 0) {
    return;
  }
  for (CORBA::ULong i = 0; i < seq.length(); ++i) {
    gen_find_size(seq[i], size, padding);
  }
}

bool operator<<(Serializer& strm, const StructSeq& seq)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(seq);
  const CORBA::ULong length = seq.length();
  if (!(strm << length)) {
    return false;
  }
  if (length == 0) {
    return true;
  }
  for (CORBA::ULong i = 0; i < length; ++i) {
    if (!(strm << seq[i])) {
      return false;
    }
  }
  return true;
}

bool operator>>(Serializer& strm, StructSeq& seq)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(seq);
  CORBA::ULong length;
  if (!(strm >> length)) {
    return false;
  }
  seq.length(length);
  for (CORBA::ULong i = 0; i < length; ++i) {
    if (!(strm >> seq[i])) {
      return false;
    }
  }
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_skip_over(Serializer& ser, StructSeq*)
{
  ACE_UNUSED_ARG(ser);
  ACE_CDR::ULong length;
  ser >> length;
  for (ACE_CDR::ULong i = 0; i < length; ++i) {
    gen_skip_over(ser, static_cast<A*>(0));
  }
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: StructSeq */


/* Begin ENUM: MyEnum */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

bool operator<<(Serializer& strm, const MyEnum& enumval)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(enumval);
  return strm << static_cast<CORBA::ULong>(enumval);
}

bool operator>>(Serializer& strm, MyEnum& enumval)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(enumval);
  CORBA::ULong temp = 0;
  if (strm >> temp) {
    enumval = static_cast<MyEnum>(temp);
    return true;
  }
  return false;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

const char* gen_MyEnum_names[] = {
  "b",
  "d",
  "as",
  "sa",
  "ss",
  "other1",
  "other2"
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End ENUM: MyEnum */


/* Begin UNION: MyUnion */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const MyUnion& uni, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(uni);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  if ((size + padding) % 4) {
    padding += 4 - ((size + padding) % 4);
  }
  size += gen_max_marshaled_size(uni._d());
  switch (uni._d()) {
  case b:
    {
      size += gen_max_marshaled_size(ACE_OutputCDR::from_boolean(uni.u_b()));
      break;
    }
  case d:
    {
      if ((size + padding) % 8) {
        padding += 8 - ((size + padding) % 8);
      }
      size += gen_max_marshaled_size(uni.u_d());
      break;
    }
  case as:
    {
      gen_find_size(uni.u_as(), size, padding);
      break;
    }
  case sa:
    {
          ShortArray_forany uni_u_sa(const_cast<ShortArray_slice*>(uni.u_sa()));
      gen_find_size(uni_u_sa, size, padding);
      break;
    }
  case ss:
    {
      gen_find_size(uni.u_ss(), size, padding);
      break;
    }
  default:
    {
      if ((size + padding) % 4) {
        padding += 4 - ((size + padding) % 4);
      }
      size += gen_max_marshaled_size(uni.u_f());
      break;
    }
  }
}

bool operator<<(Serializer& strm, const MyUnion& uni)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(uni);
  if (!(strm << uni._d())) {
    return false;
  }
  switch (uni._d()) {
  case b:
    {
      return (strm << ACE_OutputCDR::from_boolean(uni.u_b()));
    }
  case d:
    {
      return (strm << uni.u_d());
    }
  case as:
    {
      return (strm << uni.u_as());
    }
  case sa:
    {
      ShortArray_forany uni_u_sa(const_cast<ShortArray_slice*>(uni.u_sa()));
      return (strm << uni_u_sa);
    }
  case ss:
    {
      return (strm << uni.u_ss());
    }
  default:
    {
      return (strm << uni.u_f());
    }
  }
  return true;
}

bool operator>>(Serializer& strm, MyUnion& uni)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(uni);
  MyEnum disc;
  if (!(strm >> disc)) {
    return false;
  }
  switch (disc) {
  case b:
    {
      CORBA::Boolean tmp;
      if (strm >> ACE_InputCDR::to_boolean(tmp)) {
        uni.u_b(tmp);
        uni._d(disc);
        return true;
      }
      return false;
    }
  case d:
    {
      CORBA::Double tmp;
      if (strm >> tmp) {
        uni.u_d(tmp);
        uni._d(disc);
        return true;
      }
      return false;
    }
  case as:
    {
      A tmp;
      if (strm >> tmp) {
        uni.u_as(tmp);
        uni._d(disc);
        return true;
      }
      return false;
    }
  case sa:
    {
      ShortArray tmp;
      ShortArray_forany fa = tmp;
      if (strm >> fa) {
        uni.u_sa(tmp);
        uni._d(disc);
        return true;
      }
      return false;
    }
  case ss:
    {
      StructSeq tmp;
      if (strm >> tmp) {
        uni.u_ss(tmp);
        uni._d(disc);
        return true;
      }
      return false;
    }
  default:
    {
      CORBA::Float tmp;
      if (strm >> tmp) {
        uni.u_f(tmp);
        uni._d(disc);
        return true;
      }
      return false;
    }
  }
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_skip_over(Serializer& ser, MyUnion*)
{
  ACE_UNUSED_ARG(ser);
  MyEnum disc;
  if (!(ser >> disc)) {
    return;
  }
  switch (disc) {
  case b:
    {
    ser.skip(1, 1);
      break;
    }
  case d:
    {
    ser.skip(1, 8);
      break;
    }
  case as:
    {
    gen_skip_over(ser, static_cast<A*>(0));
      break;
    }
  case sa:
    {
    gen_skip_over(ser, static_cast<ShortArray_forany*>(0));
      break;
    }
  case ss:
    {
    gen_skip_over(ser, static_cast<StructSeq*>(0));
      break;
    }
  default:
    {
    ser.skip(1, 4);
      break;
    }
  }
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End UNION: MyUnion */


/* Begin STRUCT: Source */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const Source& stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  ShortArray_forany stru_rhs_sa(const_cast<ShortArray_slice*>(stru.rhs_sa));
  ArrayOfShortArray_forany stru_rhs_asa(const_cast<ArrayOfShortArray_slice*>(stru.rhs_asa));
  gen_find_size(stru.rhs_a, size, padding);
  gen_find_size(stru_rhs_sa, size, padding);
  gen_find_size(stru_rhs_asa, size, padding);
  gen_find_size(stru.rhs_ss, size, padding);
  find_size_ulong(size, padding);
  gen_find_size(stru.rhs_u, size, padding);
}

bool operator<<(Serializer& strm, const Source& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  ShortArray_forany stru_rhs_sa(const_cast<ShortArray_slice*>(stru.rhs_sa));
  ArrayOfShortArray_forany stru_rhs_asa(const_cast<ArrayOfShortArray_slice*>(stru.rhs_asa));
  return (strm << stru.rhs_a)
    && (strm << stru_rhs_sa)
    && (strm << stru_rhs_asa)
    && (strm << stru.rhs_ss)
    && (strm << stru.rhs_e)
    && (strm << stru.rhs_u);
}

bool operator>>(Serializer& strm, Source& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  ShortArray_forany stru_rhs_sa(const_cast<ShortArray_slice*>(stru.rhs_sa));
  ArrayOfShortArray_forany stru_rhs_asa(const_cast<ArrayOfShortArray_slice*>(stru.rhs_asa));
  return (strm >> stru.rhs_a)
    && (strm >> stru_rhs_sa)
    && (strm >> stru_rhs_asa)
    && (strm >> stru.rhs_ss)
    && (strm >> stru.rhs_e)
    && (strm >> stru.rhs_u);
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl<Source> : MetaStruct {
  typedef Source T;

  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }

  size_t numDcpsKeys() const { return 0; }

  Value getValue(const void* stru, const char* field) const
  {
    const Source& typed = *static_cast<const Source*>(stru);
    if (std::strncmp(field, "rhs_a.", 6) == 0) {
      return getMetaStruct<A>().getValue(&typed.rhs_a, field + 6);
    }
    if (std::strcmp(field, "rhs_e") == 0) {
      return gen_MyEnum_names[typed.rhs_e];
    }
    ACE_UNUSED_ARG(typed);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Source)");
  }

  Value getValue(Serializer& ser, const char* field) const
  {
    if (std::strncmp(field, "rhs_a.", 6) == 0) {
      return getMetaStruct<A>().getValue(ser, field + 6);
    } else {
      gen_skip_over(ser, static_cast<A*>(0));
    }
    gen_skip_over(ser, static_cast<ShortArray_forany*>(0));
    gen_skip_over(ser, static_cast<ArrayOfShortArray_forany*>(0));
    gen_skip_over(ser, static_cast<StructSeq*>(0));
    if (std::strcmp(field, "rhs_e") == 0) {
      ACE_CDR::ULong val;
      if (!(ser >> val)) {
        throw std::runtime_error("Field 'rhs_e' could not be deserialized");
      }
      return val;
    } else {
      ser.skip(1, 4);
    }
    gen_skip_over(ser, static_cast<MyUnion*>(0));
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not valid for struct Source");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    if (std::strncmp(field, "rhs_a.", 6) == 0) {
      return make_struct_cmp(&T::rhs_a, getMetaStruct<A>().create_qc_comparator(field + 6), next);
    }
    if (std::strcmp(field, "rhs_e") == 0) {
      return make_field_cmp(&T::rhs_e, next);
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Source)");
  }

  const char** getFieldNames() const
  {
    static const char* names[] = {"rhs_a", "rhs_sa", "rhs_asa", "rhs_ss", "rhs_e", "rhs_u", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "rhs_a") == 0) {
      return &static_cast<const T*>(stru)->rhs_a;
    }
    if (std::strcmp(field, "rhs_sa") == 0) {
      return &static_cast<const T*>(stru)->rhs_sa;
    }
    if (std::strcmp(field, "rhs_asa") == 0) {
      return &static_cast<const T*>(stru)->rhs_asa;
    }
    if (std::strcmp(field, "rhs_ss") == 0) {
      return &static_cast<const T*>(stru)->rhs_ss;
    }
    if (std::strcmp(field, "rhs_e") == 0) {
      return &static_cast<const T*>(stru)->rhs_e;
    }
    if (std::strcmp(field, "rhs_u") == 0) {
      return &static_cast<const T*>(stru)->rhs_u;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Source)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "rhs_a") == 0) {
      static_cast<T*>(lhs)->rhs_a = *static_cast<const A*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "rhs_sa") == 0) {
      ShortArray* lhsArr = &static_cast<T*>(lhs)->rhs_sa;
      const ShortArray* rhsArr = static_cast<const ShortArray*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      for (CORBA::ULong i0 = 0; i0 < 3; ++i0) {
        (*lhsArr)[i0] = (*rhsArr)[i0];
      }
      return;
    }
    if (std::strcmp(field, "rhs_asa") == 0) {
      ArrayOfShortArray* lhsArr = &static_cast<T*>(lhs)->rhs_asa;
      const ArrayOfShortArray* rhsArr = static_cast<const ArrayOfShortArray*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      ArrayOfShortArray_forany rhsForany(const_cast<ArrayOfShortArray_slice*>(*rhsArr));
      size_t size = 0, padding = 0;
      gen_find_size(rhsForany, size, padding);
      ACE_Message_Block mb(size);
      Serializer ser_out(&mb);
      ser_out << rhsForany;
      ArrayOfShortArray_forany lhsForany(*lhsArr);
      Serializer ser_in(&mb);
      ser_in >> lhsForany;
      return;
    }
    if (std::strcmp(field, "rhs_ss") == 0) {
      static_cast<T*>(lhs)->rhs_ss = *static_cast<const StructSeq*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "rhs_e") == 0) {
      static_cast<T*>(lhs)->rhs_e = *static_cast<const MyEnum*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "rhs_u") == 0) {
      static_cast<T*>(lhs)->rhs_u = *static_cast<const MyUnion*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Source)");
  }

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    if (std::strcmp(field, "rhs_e") == 0) {
      return static_cast<const T*>(lhs)->rhs_e == static_cast<const T*>(rhs)->rhs_e;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Source)");
  }
};

template<>
const MetaStruct& getMetaStruct<Source>()
{
  static MetaStructImpl<Source> msi;
  return msi;
}

void gen_skip_over(Serializer& ser, Source*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl<Source>().getValue(ser, "");
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Source */


/* Begin STRUCT: Target */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const Target& stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  ShortArray_forany stru_lhs_sa(const_cast<ShortArray_slice*>(stru.lhs_sa));
  ArrayOfShortArray_forany stru_lhs_asa(const_cast<ArrayOfShortArray_slice*>(stru.lhs_asa));
  gen_find_size(stru.lhs_a, size, padding);
  gen_find_size(stru_lhs_sa, size, padding);
  gen_find_size(stru_lhs_asa, size, padding);
  gen_find_size(stru.lhs_ss, size, padding);
  find_size_ulong(size, padding);
  gen_find_size(stru.lhs_u, size, padding);
}

bool operator<<(Serializer& strm, const Target& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  ShortArray_forany stru_lhs_sa(const_cast<ShortArray_slice*>(stru.lhs_sa));
  ArrayOfShortArray_forany stru_lhs_asa(const_cast<ArrayOfShortArray_slice*>(stru.lhs_asa));
  return (strm << stru.lhs_a)
    && (strm << stru_lhs_sa)
    && (strm << stru_lhs_asa)
    && (strm << stru.lhs_ss)
    && (strm << stru.lhs_e)
    && (strm << stru.lhs_u);
}

bool operator>>(Serializer& strm, Target& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  ShortArray_forany stru_lhs_sa(const_cast<ShortArray_slice*>(stru.lhs_sa));
  ArrayOfShortArray_forany stru_lhs_asa(const_cast<ArrayOfShortArray_slice*>(stru.lhs_asa));
  return (strm >> stru.lhs_a)
    && (strm >> stru_lhs_sa)
    && (strm >> stru_lhs_asa)
    && (strm >> stru.lhs_ss)
    && (strm >> stru.lhs_e)
    && (strm >> stru.lhs_u);
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl<Target> : MetaStruct {
  typedef Target T;

  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }

  size_t numDcpsKeys() const { return 0; }

  Value getValue(const void* stru, const char* field) const
  {
    const Target& typed = *static_cast<const Target*>(stru);
    if (std::strncmp(field, "lhs_a.", 6) == 0) {
      return getMetaStruct<A>().getValue(&typed.lhs_a, field + 6);
    }
    if (std::strcmp(field, "lhs_e") == 0) {
      return gen_MyEnum_names[typed.lhs_e];
    }
    ACE_UNUSED_ARG(typed);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Target)");
  }

  Value getValue(Serializer& ser, const char* field) const
  {
    if (std::strncmp(field, "lhs_a.", 6) == 0) {
      return getMetaStruct<A>().getValue(ser, field + 6);
    } else {
      gen_skip_over(ser, static_cast<A*>(0));
    }
    gen_skip_over(ser, static_cast<ShortArray_forany*>(0));
    gen_skip_over(ser, static_cast<ArrayOfShortArray_forany*>(0));
    gen_skip_over(ser, static_cast<StructSeq*>(0));
    if (std::strcmp(field, "lhs_e") == 0) {
      ACE_CDR::ULong val;
      if (!(ser >> val)) {
        throw std::runtime_error("Field 'lhs_e' could not be deserialized");
      }
      return val;
    } else {
      ser.skip(1, 4);
    }
    gen_skip_over(ser, static_cast<MyUnion*>(0));
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not valid for struct Target");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    if (std::strncmp(field, "lhs_a.", 6) == 0) {
      return make_struct_cmp(&T::lhs_a, getMetaStruct<A>().create_qc_comparator(field + 6), next);
    }
    if (std::strcmp(field, "lhs_e") == 0) {
      return make_field_cmp(&T::lhs_e, next);
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Target)");
  }

  const char** getFieldNames() const
  {
    static const char* names[] = {"lhs_a", "lhs_sa", "lhs_asa", "lhs_ss", "lhs_e", "lhs_u", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "lhs_a") == 0) {
      return &static_cast<const T*>(stru)->lhs_a;
    }
    if (std::strcmp(field, "lhs_sa") == 0) {
      return &static_cast<const T*>(stru)->lhs_sa;
    }
    if (std::strcmp(field, "lhs_asa") == 0) {
      return &static_cast<const T*>(stru)->lhs_asa;
    }
    if (std::strcmp(field, "lhs_ss") == 0) {
      return &static_cast<const T*>(stru)->lhs_ss;
    }
    if (std::strcmp(field, "lhs_e") == 0) {
      return &static_cast<const T*>(stru)->lhs_e;
    }
    if (std::strcmp(field, "lhs_u") == 0) {
      return &static_cast<const T*>(stru)->lhs_u;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Target)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "lhs_a") == 0) {
      static_cast<T*>(lhs)->lhs_a = *static_cast<const A*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "lhs_sa") == 0) {
      ShortArray* lhsArr = &static_cast<T*>(lhs)->lhs_sa;
      const ShortArray* rhsArr = static_cast<const ShortArray*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      for (CORBA::ULong i0 = 0; i0 < 3; ++i0) {
        (*lhsArr)[i0] = (*rhsArr)[i0];
      }
      return;
    }
    if (std::strcmp(field, "lhs_asa") == 0) {
      ArrayOfShortArray* lhsArr = &static_cast<T*>(lhs)->lhs_asa;
      const ArrayOfShortArray* rhsArr = static_cast<const ArrayOfShortArray*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      ArrayOfShortArray_forany rhsForany(const_cast<ArrayOfShortArray_slice*>(*rhsArr));
      size_t size = 0, padding = 0;
      gen_find_size(rhsForany, size, padding);
      ACE_Message_Block mb(size);
      Serializer ser_out(&mb);
      ser_out << rhsForany;
      ArrayOfShortArray_forany lhsForany(*lhsArr);
      Serializer ser_in(&mb);
      ser_in >> lhsForany;
      return;
    }
    if (std::strcmp(field, "lhs_ss") == 0) {
      static_cast<T*>(lhs)->lhs_ss = *static_cast<const StructSeq*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "lhs_e") == 0) {
      static_cast<T*>(lhs)->lhs_e = *static_cast<const MyEnum*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "lhs_u") == 0) {
      static_cast<T*>(lhs)->lhs_u = *static_cast<const MyUnion*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Target)");
  }

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    if (std::strcmp(field, "lhs_e") == 0) {
      return static_cast<const T*>(lhs)->lhs_e == static_cast<const T*>(rhs)->lhs_e;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Target)");
  }
};

template<>
const MetaStruct& getMetaStruct<Target>()
{
  static MetaStructImpl<Target> msi;
  return msi;
}

void gen_skip_over(Serializer& ser, Target*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl<Target>().getValue(ser, "");
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Target */
