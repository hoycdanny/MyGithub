/* Generated by /Users/yc/MyGithub/imac-project/OpenDDS/OpenDDS-3.10/bin/opendds_idl version 3.10 (ACE version 6.2a_p11) running on input file SampleModel.idl */
#include "SampleModelTypeSupportImpl.h"

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


/* Begin MODULE: FACE */



/* Begin MODULE: DM */



/* Begin TYPEDEF: Latitude */


/* End TYPEDEF: Latitude */


/* Begin TYPEDEF: Longitude */


/* End TYPEDEF: Longitude */


/* Begin TYPEDEF: Altitude */


/* End TYPEDEF: Altitude */


/* Begin STRUCT: Position */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const FACE::DM::Position& stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  if ((size + padding) % 8) {
    padding += 8 - ((size + padding) % 8);
  }
  size += gen_max_marshaled_size(stru.lat);
  if ((size + padding) % 8) {
    padding += 8 - ((size + padding) % 8);
  }
  size += gen_max_marshaled_size(stru.lon);
  if ((size + padding) % 8) {
    padding += 8 - ((size + padding) % 8);
  }
  size += gen_max_marshaled_size(stru.alt);
}

bool operator<<(Serializer& strm, const FACE::DM::Position& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm << stru.lat)
    && (strm << stru.lon)
    && (strm << stru.alt);
}

bool operator>>(Serializer& strm, FACE::DM::Position& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm >> stru.lat)
    && (strm >> stru.lon)
    && (strm >> stru.alt);
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl<FACE::DM::Position> : MetaStruct {
  typedef FACE::DM::Position T;

  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }

  size_t numDcpsKeys() const { return 0; }

  Value getValue(const void* stru, const char* field) const
  {
    const FACE::DM::Position& typed = *static_cast<const FACE::DM::Position*>(stru);
    if (std::strcmp(field, "lat") == 0) {
      return typed.lat;
    }
    if (std::strcmp(field, "lon") == 0) {
      return typed.lon;
    }
    if (std::strcmp(field, "alt") == 0) {
      return typed.alt;
    }
    ACE_UNUSED_ARG(typed);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::Position)");
  }

  Value getValue(Serializer& ser, const char* field) const
  {
    if (std::strcmp(field, "lat") == 0) {
      ACE_CDR::Double val;
      if (!(ser >> val)) {
        throw std::runtime_error("Field 'lat' could not be deserialized");
      }
      return val;
    } else {
      ser.skip(1, 8);
    }
    if (std::strcmp(field, "lon") == 0) {
      ACE_CDR::Double val;
      if (!(ser >> val)) {
        throw std::runtime_error("Field 'lon' could not be deserialized");
      }
      return val;
    } else {
      ser.skip(1, 8);
    }
    if (std::strcmp(field, "alt") == 0) {
      ACE_CDR::Double val;
      if (!(ser >> val)) {
        throw std::runtime_error("Field 'alt' could not be deserialized");
      }
      return val;
    } else {
      ser.skip(1, 8);
    }
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not valid for struct FACE::DM::Position");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    if (std::strcmp(field, "lat") == 0) {
      return make_field_cmp(&T::lat, next);
    }
    if (std::strcmp(field, "lon") == 0) {
      return make_field_cmp(&T::lon, next);
    }
    if (std::strcmp(field, "alt") == 0) {
      return make_field_cmp(&T::alt, next);
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::Position)");
  }

  const char** getFieldNames() const
  {
    static const char* names[] = {"lat", "lon", "alt", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "lat") == 0) {
      return &static_cast<const T*>(stru)->lat;
    }
    if (std::strcmp(field, "lon") == 0) {
      return &static_cast<const T*>(stru)->lon;
    }
    if (std::strcmp(field, "alt") == 0) {
      return &static_cast<const T*>(stru)->alt;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::Position)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "lat") == 0) {
      static_cast<T*>(lhs)->lat = *static_cast<const FACE::DM::Latitude*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "lon") == 0) {
      static_cast<T*>(lhs)->lon = *static_cast<const FACE::DM::Longitude*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "alt") == 0) {
      static_cast<T*>(lhs)->alt = *static_cast<const FACE::DM::Altitude*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::Position)");
  }

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    if (std::strcmp(field, "lat") == 0) {
      return static_cast<const T*>(lhs)->lat == static_cast<const T*>(rhs)->lat;
    }
    if (std::strcmp(field, "lon") == 0) {
      return static_cast<const T*>(lhs)->lon == static_cast<const T*>(rhs)->lon;
    }
    if (std::strcmp(field, "alt") == 0) {
      return static_cast<const T*>(lhs)->alt == static_cast<const T*>(rhs)->alt;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::Position)");
  }
};

template<>
const MetaStruct& getMetaStruct<FACE::DM::Position>()
{
  static MetaStructImpl<FACE::DM::Position> msi;
  return msi;
}

void gen_skip_over(Serializer& ser, FACE::DM::Position*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl<FACE::DM::Position>().getValue(ser, "");
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif
namespace FACE {
namespace DM {
bool Position::operator==(const Position& rhs) const
{
  if (lat != rhs.lat) {
    return false;
  }
  if (lon != rhs.lon) {
    return false;
  }
  if (alt != rhs.alt) {
    return false;
  }
  return true;
}

ACE_CDR::Boolean operator<< (ACE_OutputCDR &, const Position&) { return true; }

ACE_CDR::Boolean operator>> (ACE_InputCDR &, Position&) { return true; }

}
}

/* End STRUCT: Position */


/* Begin STRUCT: EGI_Data */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const FACE::DM::EGI_Data& stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  gen_find_size(stru.pos, size, padding);
}

bool operator<<(Serializer& strm, const FACE::DM::EGI_Data& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm << stru.pos);
}

bool operator>>(Serializer& strm, FACE::DM::EGI_Data& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm >> stru.pos);
}

size_t gen_max_marshaled_size(const FACE::DM::EGI_Data& stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 24;
}

size_t gen_max_marshaled_size(KeyOnly<const FACE::DM::EGI_Data> stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

void gen_find_size(KeyOnly<const FACE::DM::EGI_Data> stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
}

bool operator<<(Serializer& strm, KeyOnly<const FACE::DM::EGI_Data> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

bool operator>>(Serializer& strm, KeyOnly<FACE::DM::EGI_Data> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace FACE {
namespace DM {
::DDS::DataWriter_ptr EGI_DataTypeSupportImpl::create_datawriter()
{
  typedef OpenDDS::DCPS::DataWriterImpl_T<EGI_Data> DataWriterImplType;
  ::DDS::DataWriter_ptr writer_impl = ::DDS::DataWriter::_nil();
  ACE_NEW_NORETURN(writer_impl,
                   DataWriterImplType());
  return writer_impl;
}
::DDS::DataReader_ptr EGI_DataTypeSupportImpl::create_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<EGI_Data> DataReaderImplType;
  ::DDS::DataReader_ptr reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(reader_impl,
                   DataReaderImplType());
  return reader_impl;
}
#ifndef OPENDDS_NO_MULTI_TOPIC
::DDS::DataReader_ptr EGI_DataTypeSupportImpl::create_multitopic_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<EGI_Data> DataReaderImplType;
  typedef OpenDDS::DCPS::MultiTopicDataReader_T<EGI_Data, DataReaderImplType> MultiTopicDataReaderImplType;
  ::DDS::DataReader_ptr multitopic_reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(multitopic_reader_impl,
                   MultiTopicDataReaderImplType());
  return multitopic_reader_impl;
}
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
const OpenDDS::DCPS::MetaStruct& EGI_DataTypeSupportImpl::getMetaStructForType()
{
  return OpenDDS::DCPS::getMetaStruct<EGI_Data>();
}
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
bool EGI_DataTypeSupportImpl::has_dcps_key()
{
  return TraitsType::gen_has_key ();
}
const char* EGI_DataTypeSupportImpl::default_type_name() const
{
  return TraitsType::type_name();
}
EGI_DataTypeSupport::_ptr_type EGI_DataTypeSupportImpl::_narrow(CORBA::Object_ptr obj)
{
  return TypeSupportType::_narrow(obj);
}
}
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl<FACE::DM::EGI_Data> : MetaStruct {
  typedef FACE::DM::EGI_Data T;

  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }

  size_t numDcpsKeys() const { return 0; }

  Value getValue(const void* stru, const char* field) const
  {
    const FACE::DM::EGI_Data& typed = *static_cast<const FACE::DM::EGI_Data*>(stru);
    if (std::strncmp(field, "pos.", 4) == 0) {
      return getMetaStruct<FACE::DM::Position>().getValue(&typed.pos, field + 4);
    }
    ACE_UNUSED_ARG(typed);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::EGI_Data)");
  }

  Value getValue(Serializer& ser, const char* field) const
  {
    if (std::strncmp(field, "pos.", 4) == 0) {
      return getMetaStruct<FACE::DM::Position>().getValue(ser, field + 4);
    } else {
      gen_skip_over(ser, static_cast<FACE::DM::Position*>(0));
    }
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not valid for struct FACE::DM::EGI_Data");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    if (std::strncmp(field, "pos.", 4) == 0) {
      return make_struct_cmp(&T::pos, getMetaStruct<FACE::DM::Position>().create_qc_comparator(field + 4), next);
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::EGI_Data)");
  }

  const char** getFieldNames() const
  {
    static const char* names[] = {"pos", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "pos") == 0) {
      return &static_cast<const T*>(stru)->pos;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::EGI_Data)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "pos") == 0) {
      static_cast<T*>(lhs)->pos = *static_cast<const FACE::DM::Position*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::EGI_Data)");
  }

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::EGI_Data)");
  }
};

template<>
const MetaStruct& getMetaStruct<FACE::DM::EGI_Data>()
{
  static MetaStructImpl<FACE::DM::EGI_Data> msi;
  return msi;
}

void gen_skip_over(Serializer& ser, FACE::DM::EGI_Data*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl<FACE::DM::EGI_Data>().getValue(ser, "");
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif
namespace FACE {
namespace DM {
bool EGI_Data::operator==(const EGI_Data& rhs) const
{
  if (pos != rhs.pos) {
    return false;
  }
  return true;
}

ACE_CDR::Boolean operator<< (ACE_OutputCDR &, const EGI_Data&) { return true; }

ACE_CDR::Boolean operator>> (ACE_InputCDR &, EGI_Data&) { return true; }

}
}

/* End STRUCT: EGI_Data */


/* Begin STRUCT: AttitudeBodyFrame */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const FACE::DM::AttitudeBodyFrame& stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  size += gen_max_marshaled_size(ACE_OutputCDR::from_octet(stru.empty));
}

bool operator<<(Serializer& strm, const FACE::DM::AttitudeBodyFrame& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm << ACE_OutputCDR::from_octet(stru.empty));
}

bool operator>>(Serializer& strm, FACE::DM::AttitudeBodyFrame& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm >> ACE_InputCDR::to_octet(stru.empty));
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl<FACE::DM::AttitudeBodyFrame> : MetaStruct {
  typedef FACE::DM::AttitudeBodyFrame T;

  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }

  size_t numDcpsKeys() const { return 0; }

  Value getValue(const void* stru, const char* field) const
  {
    const FACE::DM::AttitudeBodyFrame& typed = *static_cast<const FACE::DM::AttitudeBodyFrame*>(stru);
    if (std::strcmp(field, "empty") == 0) {
      return typed.empty;
    }
    ACE_UNUSED_ARG(typed);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::AttitudeBodyFrame)");
  }

  Value getValue(Serializer& ser, const char* field) const
  {
    if (std::strcmp(field, "empty") == 0) {
      ACE_CDR::Octet val;
      if (!(ser >> ACE_InputCDR::to_octet(val))) {
        throw std::runtime_error("Field 'empty' could not be deserialized");
      }
      return val;
    } else {
      ser.skip(1, 1);
    }
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not valid for struct FACE::DM::AttitudeBodyFrame");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    if (std::strcmp(field, "empty") == 0) {
      return make_field_cmp(&T::empty, next);
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::AttitudeBodyFrame)");
  }

  const char** getFieldNames() const
  {
    static const char* names[] = {"empty", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "empty") == 0) {
      return &static_cast<const T*>(stru)->empty;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::AttitudeBodyFrame)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "empty") == 0) {
      static_cast<T*>(lhs)->empty = *static_cast<const CORBA::Octet*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::AttitudeBodyFrame)");
  }

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    if (std::strcmp(field, "empty") == 0) {
      return static_cast<const T*>(lhs)->empty == static_cast<const T*>(rhs)->empty;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::AttitudeBodyFrame)");
  }
};

template<>
const MetaStruct& getMetaStruct<FACE::DM::AttitudeBodyFrame>()
{
  static MetaStructImpl<FACE::DM::AttitudeBodyFrame> msi;
  return msi;
}

void gen_skip_over(Serializer& ser, FACE::DM::AttitudeBodyFrame*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl<FACE::DM::AttitudeBodyFrame>().getValue(ser, "");
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif
namespace FACE {
namespace DM {
bool AttitudeBodyFrame::operator==(const AttitudeBodyFrame& rhs) const
{
  if (empty != rhs.empty) {
    return false;
  }
  return true;
}

ACE_CDR::Boolean operator<< (ACE_OutputCDR &, const AttitudeBodyFrame&) { return true; }

ACE_CDR::Boolean operator>> (ACE_InputCDR &, AttitudeBodyFrame&) { return true; }

}
}

/* End STRUCT: AttitudeBodyFrame */


/* Begin STRUCT: IMU_Data */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const FACE::DM::IMU_Data& stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  gen_find_size(stru.att, size, padding);
}

bool operator<<(Serializer& strm, const FACE::DM::IMU_Data& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm << stru.att);
}

bool operator>>(Serializer& strm, FACE::DM::IMU_Data& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm >> stru.att);
}

size_t gen_max_marshaled_size(const FACE::DM::IMU_Data& stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 1;
}

size_t gen_max_marshaled_size(KeyOnly<const FACE::DM::IMU_Data> stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

void gen_find_size(KeyOnly<const FACE::DM::IMU_Data> stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
}

bool operator<<(Serializer& strm, KeyOnly<const FACE::DM::IMU_Data> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

bool operator>>(Serializer& strm, KeyOnly<FACE::DM::IMU_Data> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace FACE {
namespace DM {
::DDS::DataWriter_ptr IMU_DataTypeSupportImpl::create_datawriter()
{
  typedef OpenDDS::DCPS::DataWriterImpl_T<IMU_Data> DataWriterImplType;
  ::DDS::DataWriter_ptr writer_impl = ::DDS::DataWriter::_nil();
  ACE_NEW_NORETURN(writer_impl,
                   DataWriterImplType());
  return writer_impl;
}
::DDS::DataReader_ptr IMU_DataTypeSupportImpl::create_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<IMU_Data> DataReaderImplType;
  ::DDS::DataReader_ptr reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(reader_impl,
                   DataReaderImplType());
  return reader_impl;
}
#ifndef OPENDDS_NO_MULTI_TOPIC
::DDS::DataReader_ptr IMU_DataTypeSupportImpl::create_multitopic_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<IMU_Data> DataReaderImplType;
  typedef OpenDDS::DCPS::MultiTopicDataReader_T<IMU_Data, DataReaderImplType> MultiTopicDataReaderImplType;
  ::DDS::DataReader_ptr multitopic_reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(multitopic_reader_impl,
                   MultiTopicDataReaderImplType());
  return multitopic_reader_impl;
}
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
const OpenDDS::DCPS::MetaStruct& IMU_DataTypeSupportImpl::getMetaStructForType()
{
  return OpenDDS::DCPS::getMetaStruct<IMU_Data>();
}
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
bool IMU_DataTypeSupportImpl::has_dcps_key()
{
  return TraitsType::gen_has_key ();
}
const char* IMU_DataTypeSupportImpl::default_type_name() const
{
  return TraitsType::type_name();
}
IMU_DataTypeSupport::_ptr_type IMU_DataTypeSupportImpl::_narrow(CORBA::Object_ptr obj)
{
  return TypeSupportType::_narrow(obj);
}
}
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl<FACE::DM::IMU_Data> : MetaStruct {
  typedef FACE::DM::IMU_Data T;

  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }

  size_t numDcpsKeys() const { return 0; }

  Value getValue(const void* stru, const char* field) const
  {
    const FACE::DM::IMU_Data& typed = *static_cast<const FACE::DM::IMU_Data*>(stru);
    if (std::strncmp(field, "att.", 4) == 0) {
      return getMetaStruct<FACE::DM::AttitudeBodyFrame>().getValue(&typed.att, field + 4);
    }
    ACE_UNUSED_ARG(typed);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::IMU_Data)");
  }

  Value getValue(Serializer& ser, const char* field) const
  {
    if (std::strncmp(field, "att.", 4) == 0) {
      return getMetaStruct<FACE::DM::AttitudeBodyFrame>().getValue(ser, field + 4);
    } else {
      gen_skip_over(ser, static_cast<FACE::DM::AttitudeBodyFrame*>(0));
    }
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not valid for struct FACE::DM::IMU_Data");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    if (std::strncmp(field, "att.", 4) == 0) {
      return make_struct_cmp(&T::att, getMetaStruct<FACE::DM::AttitudeBodyFrame>().create_qc_comparator(field + 4), next);
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::IMU_Data)");
  }

  const char** getFieldNames() const
  {
    static const char* names[] = {"att", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "att") == 0) {
      return &static_cast<const T*>(stru)->att;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::IMU_Data)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "att") == 0) {
      static_cast<T*>(lhs)->att = *static_cast<const FACE::DM::AttitudeBodyFrame*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::IMU_Data)");
  }

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::IMU_Data)");
  }
};

template<>
const MetaStruct& getMetaStruct<FACE::DM::IMU_Data>()
{
  static MetaStructImpl<FACE::DM::IMU_Data> msi;
  return msi;
}

void gen_skip_over(Serializer& ser, FACE::DM::IMU_Data*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl<FACE::DM::IMU_Data>().getValue(ser, "");
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif
namespace FACE {
namespace DM {
bool IMU_Data::operator==(const IMU_Data& rhs) const
{
  if (att != rhs.att) {
    return false;
  }
  return true;
}

ACE_CDR::Boolean operator<< (ACE_OutputCDR &, const IMU_Data&) { return true; }

ACE_CDR::Boolean operator>> (ACE_InputCDR &, IMU_Data&) { return true; }

}
}

/* End STRUCT: IMU_Data */


/* Begin STRUCT: Nav_Data */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const FACE::DM::Nav_Data& stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  gen_find_size(stru.pos, size, padding);
  gen_find_size(stru.att, size, padding);
}

bool operator<<(Serializer& strm, const FACE::DM::Nav_Data& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm << stru.pos)
    && (strm << stru.att);
}

bool operator>>(Serializer& strm, FACE::DM::Nav_Data& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm >> stru.pos)
    && (strm >> stru.att);
}

size_t gen_max_marshaled_size(const FACE::DM::Nav_Data& stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 25;
}

size_t gen_max_marshaled_size(KeyOnly<const FACE::DM::Nav_Data> stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

void gen_find_size(KeyOnly<const FACE::DM::Nav_Data> stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
}

bool operator<<(Serializer& strm, KeyOnly<const FACE::DM::Nav_Data> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

bool operator>>(Serializer& strm, KeyOnly<FACE::DM::Nav_Data> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace FACE {
namespace DM {
::DDS::DataWriter_ptr Nav_DataTypeSupportImpl::create_datawriter()
{
  typedef OpenDDS::DCPS::DataWriterImpl_T<Nav_Data> DataWriterImplType;
  ::DDS::DataWriter_ptr writer_impl = ::DDS::DataWriter::_nil();
  ACE_NEW_NORETURN(writer_impl,
                   DataWriterImplType());
  return writer_impl;
}
::DDS::DataReader_ptr Nav_DataTypeSupportImpl::create_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<Nav_Data> DataReaderImplType;
  ::DDS::DataReader_ptr reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(reader_impl,
                   DataReaderImplType());
  return reader_impl;
}
#ifndef OPENDDS_NO_MULTI_TOPIC
::DDS::DataReader_ptr Nav_DataTypeSupportImpl::create_multitopic_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<Nav_Data> DataReaderImplType;
  typedef OpenDDS::DCPS::MultiTopicDataReader_T<Nav_Data, DataReaderImplType> MultiTopicDataReaderImplType;
  ::DDS::DataReader_ptr multitopic_reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(multitopic_reader_impl,
                   MultiTopicDataReaderImplType());
  return multitopic_reader_impl;
}
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
const OpenDDS::DCPS::MetaStruct& Nav_DataTypeSupportImpl::getMetaStructForType()
{
  return OpenDDS::DCPS::getMetaStruct<Nav_Data>();
}
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
bool Nav_DataTypeSupportImpl::has_dcps_key()
{
  return TraitsType::gen_has_key ();
}
const char* Nav_DataTypeSupportImpl::default_type_name() const
{
  return TraitsType::type_name();
}
Nav_DataTypeSupport::_ptr_type Nav_DataTypeSupportImpl::_narrow(CORBA::Object_ptr obj)
{
  return TypeSupportType::_narrow(obj);
}
}
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl<FACE::DM::Nav_Data> : MetaStruct {
  typedef FACE::DM::Nav_Data T;

  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }

  size_t numDcpsKeys() const { return 0; }

  Value getValue(const void* stru, const char* field) const
  {
    const FACE::DM::Nav_Data& typed = *static_cast<const FACE::DM::Nav_Data*>(stru);
    if (std::strncmp(field, "pos.", 4) == 0) {
      return getMetaStruct<FACE::DM::Position>().getValue(&typed.pos, field + 4);
    }
    if (std::strncmp(field, "att.", 4) == 0) {
      return getMetaStruct<FACE::DM::AttitudeBodyFrame>().getValue(&typed.att, field + 4);
    }
    ACE_UNUSED_ARG(typed);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::Nav_Data)");
  }

  Value getValue(Serializer& ser, const char* field) const
  {
    if (std::strncmp(field, "pos.", 4) == 0) {
      return getMetaStruct<FACE::DM::Position>().getValue(ser, field + 4);
    } else {
      gen_skip_over(ser, static_cast<FACE::DM::Position*>(0));
    }
    if (std::strncmp(field, "att.", 4) == 0) {
      return getMetaStruct<FACE::DM::AttitudeBodyFrame>().getValue(ser, field + 4);
    } else {
      gen_skip_over(ser, static_cast<FACE::DM::AttitudeBodyFrame*>(0));
    }
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not valid for struct FACE::DM::Nav_Data");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    if (std::strncmp(field, "pos.", 4) == 0) {
      return make_struct_cmp(&T::pos, getMetaStruct<FACE::DM::Position>().create_qc_comparator(field + 4), next);
    }
    if (std::strncmp(field, "att.", 4) == 0) {
      return make_struct_cmp(&T::att, getMetaStruct<FACE::DM::AttitudeBodyFrame>().create_qc_comparator(field + 4), next);
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::Nav_Data)");
  }

  const char** getFieldNames() const
  {
    static const char* names[] = {"pos", "att", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "pos") == 0) {
      return &static_cast<const T*>(stru)->pos;
    }
    if (std::strcmp(field, "att") == 0) {
      return &static_cast<const T*>(stru)->att;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::Nav_Data)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "pos") == 0) {
      static_cast<T*>(lhs)->pos = *static_cast<const FACE::DM::Position*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "att") == 0) {
      static_cast<T*>(lhs)->att = *static_cast<const FACE::DM::AttitudeBodyFrame*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::Nav_Data)");
  }

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct FACE::DM::Nav_Data)");
  }
};

template<>
const MetaStruct& getMetaStruct<FACE::DM::Nav_Data>()
{
  static MetaStructImpl<FACE::DM::Nav_Data> msi;
  return msi;
}

void gen_skip_over(Serializer& ser, FACE::DM::Nav_Data*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl<FACE::DM::Nav_Data>().getValue(ser, "");
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif
namespace FACE {
namespace DM {
bool Nav_Data::operator==(const Nav_Data& rhs) const
{
  if (pos != rhs.pos) {
    return false;
  }
  if (att != rhs.att) {
    return false;
  }
  return true;
}

ACE_CDR::Boolean operator<< (ACE_OutputCDR &, const Nav_Data&) { return true; }

ACE_CDR::Boolean operator>> (ACE_InputCDR &, Nav_Data&) { return true; }

}
}

/* End STRUCT: Nav_Data */

/* End MODULE: DM */

/* End MODULE: FACE */