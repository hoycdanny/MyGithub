/* Generated by /Users/yc/MyGithub/imac-project/OpenDDS/OpenDDS-3.10/bin/opendds_idl version 3.10 (ACE version 6.2a_p11) running on input file ../../../DCPS/Compiler/idl_test2_lib/BazDef.idl */
#include "BazDefTypeSupportImpl.h"

#include <cstring>
#include <stdexcept>
#include "dds/DCPS/BuiltInTopicUtils.h"
#include "dds/DCPS/ContentFilteredTopicImpl.h"
#include "dds/DCPS/DataReaderImpl_T.h"
#include "dds/DCPS/DataWriterImpl_T.h"
#include "dds/DCPS/FilterEvaluator.h"
#include "dds/DCPS/MultiTopicDataReader_T.h"
#include "dds/DCPS/PoolAllocator.h"
#include "dds/DCPS/PublicationInstance.h"
#include "dds/DCPS/PublisherImpl.h"
#include "dds/DCPS/Qos_Helper.h"
#include "dds/DCPS/RakeData.h"
#include "dds/DCPS/RakeResults_T.h"
#include "dds/DCPS/ReceivedDataElementList.h"
#include "dds/DCPS/Registered_Data_Types.h"
#include "dds/DCPS/Service_Participant.h"
#include "dds/DCPS/SubscriberImpl.h"
#include "dds/DCPS/Util.h"
#include "dds/DCPS/debug.h"
#include "dds/DdsDcpsDomainC.h"
#include "FooDefTypeSupportImpl.h"


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

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const Xyz::Baz& stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  gen_find_size(stru.a_struct_value, size, padding);
}

bool operator<<(Serializer& strm, const Xyz::Baz& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm << stru.a_struct_value);
}

bool operator>>(Serializer& strm, Xyz::Baz& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm >> stru.a_struct_value);
}

size_t gen_max_marshaled_size(const Xyz::Baz& stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 4;
}

size_t gen_max_marshaled_size(KeyOnly<const Xyz::Baz> stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

void gen_find_size(KeyOnly<const Xyz::Baz> stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
}

bool operator<<(Serializer& strm, KeyOnly<const Xyz::Baz> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

bool operator>>(Serializer& strm, KeyOnly<Xyz::Baz> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Xyz {
::DDS::DataWriter_ptr BazTypeSupportImpl::create_datawriter()
{
  typedef OpenDDS::DCPS::DataWriterImpl_T<Baz> DataWriterImplType;
  ::DDS::DataWriter_ptr writer_impl = ::DDS::DataWriter::_nil();
  ACE_NEW_NORETURN(writer_impl,
                   DataWriterImplType());
  return writer_impl;
}
::DDS::DataReader_ptr BazTypeSupportImpl::create_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<Baz> DataReaderImplType;
  ::DDS::DataReader_ptr reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(reader_impl,
                   DataReaderImplType());
  return reader_impl;
}
#ifndef OPENDDS_NO_MULTI_TOPIC
::DDS::DataReader_ptr BazTypeSupportImpl::create_multitopic_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<Baz> DataReaderImplType;
  typedef OpenDDS::DCPS::MultiTopicDataReader_T<Baz, DataReaderImplType> MultiTopicDataReaderImplType;
  ::DDS::DataReader_ptr multitopic_reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(multitopic_reader_impl,
                   MultiTopicDataReaderImplType());
  return multitopic_reader_impl;
}
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
const OpenDDS::DCPS::MetaStruct& BazTypeSupportImpl::getMetaStructForType()
{
  return OpenDDS::DCPS::getMetaStruct<Baz>();
}
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
bool BazTypeSupportImpl::has_dcps_key()
{
  return TraitsType::gen_has_key ();
}
const char* BazTypeSupportImpl::default_type_name() const
{
  return TraitsType::type_name();
}
BazTypeSupport::_ptr_type BazTypeSupportImpl::_narrow(CORBA::Object_ptr obj)
{
  return TypeSupportType::_narrow(obj);
}
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl<Xyz::Baz> : MetaStruct {
  typedef Xyz::Baz T;

  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }

  size_t numDcpsKeys() const { return 0; }

  Value getValue(const void* stru, const char* field) const
  {
    const Xyz::Baz& typed = *static_cast<const Xyz::Baz*>(stru);
    if (std::strncmp(field, "a_struct_value.", 15) == 0) {
      return getMetaStruct<Bar>().getValue(&typed.a_struct_value, field + 15);
    }
    ACE_UNUSED_ARG(typed);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Xyz::Baz)");
  }

  Value getValue(Serializer& ser, const char* field) const
  {
    if (std::strncmp(field, "a_struct_value.", 15) == 0) {
      return getMetaStruct<Bar>().getValue(ser, field + 15);
    } else {
      gen_skip_over(ser, static_cast<Bar*>(0));
    }
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not valid for struct Xyz::Baz");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    if (std::strncmp(field, "a_struct_value.", 15) == 0) {
      return make_struct_cmp(&T::a_struct_value, getMetaStruct<Bar>().create_qc_comparator(field + 15), next);
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Xyz::Baz)");
  }

  const char** getFieldNames() const
  {
    static const char* names[] = {"a_struct_value", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "a_struct_value") == 0) {
      return &static_cast<const T*>(stru)->a_struct_value;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Xyz::Baz)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "a_struct_value") == 0) {
      static_cast<T*>(lhs)->a_struct_value = *static_cast<const Bar*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Xyz::Baz)");
  }

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Xyz::Baz)");
  }
};

template<>
const MetaStruct& getMetaStruct<Xyz::Baz>()
{
  static MetaStructImpl<Xyz::Baz> msi;
  return msi;
}

void gen_skip_over(Serializer& ser, Xyz::Baz*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl<Xyz::Baz>().getValue(ser, "");
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif
namespace Xyz {
bool Baz::operator==(const Baz& rhs) const
{
  if (a_struct_value != rhs.a_struct_value) {
    return false;
  }
  return true;
}

ACE_CDR::Boolean operator<< (ACE_OutputCDR &, const Baz&) { return true; }

ACE_CDR::Boolean operator>> (ACE_InputCDR &, Baz&) { return true; }

}

/* End STRUCT: Baz */

/* End MODULE: Xyz */