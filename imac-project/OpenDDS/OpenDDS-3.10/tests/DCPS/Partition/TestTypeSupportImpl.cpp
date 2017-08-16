/* Generated by /Users/yc/MyGithub/imac-project/OpenDDS/OpenDDS-3.10/bin/opendds_idl version 3.10 (ACE version 6.2a_p11) running on input file Test.idl */
#include "TestTypeSupportImpl.h"

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


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: Test */



/* Begin STRUCT: Data */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const Test::Data& stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  if ((size + padding) % 4) {
    padding += 4 - ((size + padding) % 4);
  }
  size += gen_max_marshaled_size(stru.key);
  find_size_ulong(size, padding);
  size += ACE_OS::strlen(stru.the_data.in()) + 1;
}

bool operator<<(Serializer& strm, const Test::Data& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm << stru.key)
    && (strm << stru.the_data.in());
}

bool operator>>(Serializer& strm, Test::Data& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm >> stru.key)
    && (strm >> stru.the_data.out());
}

size_t gen_max_marshaled_size(const Test::Data& stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

size_t gen_max_marshaled_size(KeyOnly<const Test::Data> stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 4;
}

void gen_find_size(KeyOnly<const Test::Data> stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  if ((size + padding) % 4) {
    padding += 4 - ((size + padding) % 4);
  }
  size += gen_max_marshaled_size(stru.t.key);
}

bool operator<<(Serializer& strm, KeyOnly<const Test::Data> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm << stru.t.key);
}

bool operator>>(Serializer& strm, KeyOnly<Test::Data> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm >> stru.t.key);
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Test {
::DDS::DataWriter_ptr DataTypeSupportImpl::create_datawriter()
{
  typedef OpenDDS::DCPS::DataWriterImpl_T<Data> DataWriterImplType;
  ::DDS::DataWriter_ptr writer_impl = ::DDS::DataWriter::_nil();
  ACE_NEW_NORETURN(writer_impl,
                   DataWriterImplType());
  return writer_impl;
}
::DDS::DataReader_ptr DataTypeSupportImpl::create_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<Data> DataReaderImplType;
  ::DDS::DataReader_ptr reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(reader_impl,
                   DataReaderImplType());
  return reader_impl;
}
#ifndef OPENDDS_NO_MULTI_TOPIC
::DDS::DataReader_ptr DataTypeSupportImpl::create_multitopic_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<Data> DataReaderImplType;
  typedef OpenDDS::DCPS::MultiTopicDataReader_T<Data, DataReaderImplType> MultiTopicDataReaderImplType;
  ::DDS::DataReader_ptr multitopic_reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(multitopic_reader_impl,
                   MultiTopicDataReaderImplType());
  return multitopic_reader_impl;
}
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
const OpenDDS::DCPS::MetaStruct& DataTypeSupportImpl::getMetaStructForType()
{
  return OpenDDS::DCPS::getMetaStruct<Data>();
}
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
bool DataTypeSupportImpl::has_dcps_key()
{
  return TraitsType::gen_has_key ();
}
const char* DataTypeSupportImpl::default_type_name() const
{
  return TraitsType::type_name();
}
DataTypeSupport::_ptr_type DataTypeSupportImpl::_narrow(CORBA::Object_ptr obj)
{
  return TypeSupportType::_narrow(obj);
}
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl<Test::Data> : MetaStruct {
  typedef Test::Data T;

  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }

  size_t numDcpsKeys() const { return 1; }

  Value getValue(const void* stru, const char* field) const
  {
    const Test::Data& typed = *static_cast<const Test::Data*>(stru);
    if (std::strcmp(field, "key") == 0) {
      return typed.key;
    }
    if (std::strcmp(field, "the_data") == 0) {
      return typed.the_data.in();
    }
    ACE_UNUSED_ARG(typed);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Test::Data)");
  }

  Value getValue(Serializer& ser, const char* field) const
  {
    if (std::strcmp(field, "key") == 0) {
      ACE_CDR::Long val;
      if (!(ser >> val)) {
        throw std::runtime_error("Field 'key' could not be deserialized");
      }
      return val;
    } else {
      ser.skip(1, 4);
    }
    if (std::strcmp(field, "the_data") == 0) {
      TAO::String_Manager val;
      if (!(ser >> val.out())) {
        throw std::runtime_error("Field 'the_data' could not be deserialized");
      }
      return val;
    } else {
      ACE_CDR::ULong len;
      if (!(ser >> len)) {
        throw std::runtime_error("String 'the_data' length could not be deserialized");
      }
      ser.skip(len);
    }
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not valid for struct Test::Data");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    if (std::strcmp(field, "key") == 0) {
      return make_field_cmp(&T::key, next);
    }
    if (std::strcmp(field, "the_data") == 0) {
      return make_field_cmp(&T::the_data, next);
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Test::Data)");
  }

  const char** getFieldNames() const
  {
    static const char* names[] = {"key", "the_data", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "key") == 0) {
      return &static_cast<const T*>(stru)->key;
    }
    if (std::strcmp(field, "the_data") == 0) {
      return &static_cast<const T*>(stru)->the_data;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Test::Data)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "key") == 0) {
      static_cast<T*>(lhs)->key = *static_cast<const CORBA::Long*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "the_data") == 0) {
      static_cast<T*>(lhs)->the_data = *static_cast<const TAO::String_Manager*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Test::Data)");
  }

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    if (std::strcmp(field, "key") == 0) {
      return static_cast<const T*>(lhs)->key == static_cast<const T*>(rhs)->key;
    }
    if (std::strcmp(field, "the_data") == 0) {
      return 0 == ACE_OS::strcmp(static_cast<const T*>(lhs)->the_data.in(), static_cast<const T*>(rhs)->the_data.in());
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct Test::Data)");
  }
};

template<>
const MetaStruct& getMetaStruct<Test::Data>()
{
  static MetaStructImpl<Test::Data> msi;
  return msi;
}

void gen_skip_over(Serializer& ser, Test::Data*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl<Test::Data>().getValue(ser, "");
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Data */

/* End MODULE: Test */
