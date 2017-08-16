/* -*- C++ -*- */
/* Generated by /Users/yc/MyGithub/imac-project/OpenDDS/OpenDDS-3.10/bin/opendds_idl version 3.10 (ACE version 6.2a_p11) running on input file MultiTopicTest.idl */
#ifndef OPENDDS_IDL_GENERATED_MULTITOPICTESTTYPESUPPORTIMPL_H_NO76PK
#define OPENDDS_IDL_GENERATED_MULTITOPICTESTTYPESUPPORTIMPL_H_NO76PK
#include "MultiTopicTestC.h"
#include "dds/DCPS/Definitions.h"
#include "MultiTopicTestTypeSupportC.h"
#include "dds/DCPS/Serializer.h"
#include "dds/DCPS/TypeSupportImpl.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin STRUCT: LocationInfo */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const LocationInfo& stru, size_t& size, size_t& padding);

bool operator<<(Serializer& strm, const LocationInfo& stru);

bool operator>>(Serializer& strm, LocationInfo& stru);

size_t gen_max_marshaled_size(const LocationInfo& stru, bool align);

size_t gen_max_marshaled_size(KeyOnly<const LocationInfo> stru, bool align);

void gen_find_size(KeyOnly<const LocationInfo> stru, size_t& size, size_t& padding);

bool operator<<(Serializer& strm, KeyOnly<const LocationInfo> stru);

bool operator>>(Serializer& strm, KeyOnly<LocationInfo> stru);

template <>
struct MarshalTraits<LocationInfo> {
  static bool gen_is_bounded_size() { return true; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct  LocationInfo_OpenDDS_KeyLessThan {
  bool operator()(const LocationInfo& v1, const LocationInfo& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.flight_id1 < v2.flight_id1) return true;
    if (v2.flight_id1 < v1.flight_id1) return false;
    if (v1.flight_id2 < v2.flight_id2) return true;
    if (v2.flight_id2 < v1.flight_id2) return false;
    return false;
  }
};


class LocationInfoTypeSupportImpl;

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<LocationInfo> {
  typedef LocationInfo MessageType;
  typedef LocationInfoSeq MessageSequenceType;
  typedef LocationInfoTypeSupport TypeSupportType;
  typedef LocationInfoTypeSupportImpl TypeSupportTypeImpl;
  typedef LocationInfoDataWriter DataWriterType;
  typedef LocationInfoDataReader DataReaderType;
  typedef LocationInfo_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "LocationInfo"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


class  LocationInfoTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<LocationInfoTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<LocationInfo> TraitsType;
  typedef LocationInfoTypeSupport TypeSupportType;
  typedef LocationInfoTypeSupport::_var_type _var_type;
  typedef LocationInfoTypeSupport::_ptr_type _ptr_type;

  LocationInfoTypeSupportImpl() {}
  virtual ~LocationInfoTypeSupportImpl() {}

  virtual ::DDS::DataWriter_ptr create_datawriter();
  virtual ::DDS::DataReader_ptr create_datareader();
#ifndef OPENDDS_NO_MULTI_TOPIC
  virtual ::DDS::DataReader_ptr create_multitopic_datareader();
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
  virtual const OpenDDS::DCPS::MetaStruct& getMetaStructForType();
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
  virtual bool has_dcps_key();
  const char* default_type_name() const;
  static LocationInfoTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

class MetaStruct;

template<typename T>
const MetaStruct& getMetaStruct();

template<>
const MetaStruct& getMetaStruct<LocationInfo>();
void gen_skip_over(Serializer& ser, LocationInfo*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: LocationInfo */


/* Begin STRUCT: PlanInfo */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const PlanInfo& stru, size_t& size, size_t& padding);

bool operator<<(Serializer& strm, const PlanInfo& stru);

bool operator>>(Serializer& strm, PlanInfo& stru);

size_t gen_max_marshaled_size(const PlanInfo& stru, bool align);

size_t gen_max_marshaled_size(KeyOnly<const PlanInfo> stru, bool align);

void gen_find_size(KeyOnly<const PlanInfo> stru, size_t& size, size_t& padding);

bool operator<<(Serializer& strm, KeyOnly<const PlanInfo> stru);

bool operator>>(Serializer& strm, KeyOnly<PlanInfo> stru);

template <>
struct MarshalTraits<PlanInfo> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct  PlanInfo_OpenDDS_KeyLessThan {
  bool operator()(const PlanInfo& v1, const PlanInfo& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.flight_id1 < v2.flight_id1) return true;
    if (v2.flight_id1 < v1.flight_id1) return false;
    if (v1.flight_id2 < v2.flight_id2) return true;
    if (v2.flight_id2 < v1.flight_id2) return false;
    return false;
  }
};


class PlanInfoTypeSupportImpl;

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<PlanInfo> {
  typedef PlanInfo MessageType;
  typedef PlanInfoSeq MessageSequenceType;
  typedef PlanInfoTypeSupport TypeSupportType;
  typedef PlanInfoTypeSupportImpl TypeSupportTypeImpl;
  typedef PlanInfoDataWriter DataWriterType;
  typedef PlanInfoDataReader DataReaderType;
  typedef PlanInfo_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "PlanInfo"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


class  PlanInfoTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<PlanInfoTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<PlanInfo> TraitsType;
  typedef PlanInfoTypeSupport TypeSupportType;
  typedef PlanInfoTypeSupport::_var_type _var_type;
  typedef PlanInfoTypeSupport::_ptr_type _ptr_type;

  PlanInfoTypeSupportImpl() {}
  virtual ~PlanInfoTypeSupportImpl() {}

  virtual ::DDS::DataWriter_ptr create_datawriter();
  virtual ::DDS::DataReader_ptr create_datareader();
#ifndef OPENDDS_NO_MULTI_TOPIC
  virtual ::DDS::DataReader_ptr create_multitopic_datareader();
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
  virtual const OpenDDS::DCPS::MetaStruct& getMetaStructForType();
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
  virtual bool has_dcps_key();
  const char* default_type_name() const;
  static PlanInfoTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
const MetaStruct& getMetaStruct<PlanInfo>();
void gen_skip_over(Serializer& ser, PlanInfo*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: PlanInfo */


/* Begin STRUCT: MoreInfo */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const MoreInfo& stru, size_t& size, size_t& padding);

bool operator<<(Serializer& strm, const MoreInfo& stru);

bool operator>>(Serializer& strm, MoreInfo& stru);

size_t gen_max_marshaled_size(const MoreInfo& stru, bool align);

size_t gen_max_marshaled_size(KeyOnly<const MoreInfo> stru, bool align);

void gen_find_size(KeyOnly<const MoreInfo> stru, size_t& size, size_t& padding);

bool operator<<(Serializer& strm, KeyOnly<const MoreInfo> stru);

bool operator>>(Serializer& strm, KeyOnly<MoreInfo> stru);

template <>
struct MarshalTraits<MoreInfo> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct  MoreInfo_OpenDDS_KeyLessThan {
  bool operator()(const MoreInfo& v1, const MoreInfo& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.flight_id1 < v2.flight_id1) return true;
    if (v2.flight_id1 < v1.flight_id1) return false;
    return false;
  }
};


class MoreInfoTypeSupportImpl;

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<MoreInfo> {
  typedef MoreInfo MessageType;
  typedef MoreInfoSeq MessageSequenceType;
  typedef MoreInfoTypeSupport TypeSupportType;
  typedef MoreInfoTypeSupportImpl TypeSupportTypeImpl;
  typedef MoreInfoDataWriter DataWriterType;
  typedef MoreInfoDataReader DataReaderType;
  typedef MoreInfo_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "MoreInfo"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


class  MoreInfoTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<MoreInfoTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<MoreInfo> TraitsType;
  typedef MoreInfoTypeSupport TypeSupportType;
  typedef MoreInfoTypeSupport::_var_type _var_type;
  typedef MoreInfoTypeSupport::_ptr_type _ptr_type;

  MoreInfoTypeSupportImpl() {}
  virtual ~MoreInfoTypeSupportImpl() {}

  virtual ::DDS::DataWriter_ptr create_datawriter();
  virtual ::DDS::DataReader_ptr create_datareader();
#ifndef OPENDDS_NO_MULTI_TOPIC
  virtual ::DDS::DataReader_ptr create_multitopic_datareader();
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
  virtual const OpenDDS::DCPS::MetaStruct& getMetaStructForType();
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
  virtual bool has_dcps_key();
  const char* default_type_name() const;
  static MoreInfoTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
const MetaStruct& getMetaStruct<MoreInfo>();
void gen_skip_over(Serializer& ser, MoreInfo*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: MoreInfo */


/* Begin STRUCT: UnrelatedInfo */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const UnrelatedInfo& stru, size_t& size, size_t& padding);

bool operator<<(Serializer& strm, const UnrelatedInfo& stru);

bool operator>>(Serializer& strm, UnrelatedInfo& stru);

size_t gen_max_marshaled_size(const UnrelatedInfo& stru, bool align);

size_t gen_max_marshaled_size(KeyOnly<const UnrelatedInfo> stru, bool align);

void gen_find_size(KeyOnly<const UnrelatedInfo> stru, size_t& size, size_t& padding);

bool operator<<(Serializer& strm, KeyOnly<const UnrelatedInfo> stru);

bool operator>>(Serializer& strm, KeyOnly<UnrelatedInfo> stru);

template <>
struct MarshalTraits<UnrelatedInfo> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct  UnrelatedInfo_OpenDDS_KeyLessThan {
  bool operator()(const UnrelatedInfo&, const UnrelatedInfo&) const
  {
    // Eith no DCPS_DATA_KEYs, return false
    // to allow use of map with just one entry
    return false;
  }
};


class UnrelatedInfoTypeSupportImpl;

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<UnrelatedInfo> {
  typedef UnrelatedInfo MessageType;
  typedef UnrelatedInfoSeq MessageSequenceType;
  typedef UnrelatedInfoTypeSupport TypeSupportType;
  typedef UnrelatedInfoTypeSupportImpl TypeSupportTypeImpl;
  typedef UnrelatedInfoDataWriter DataWriterType;
  typedef UnrelatedInfoDataReader DataReaderType;
  typedef UnrelatedInfo_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "UnrelatedInfo"; }
  static bool gen_has_key () { return false; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


class  UnrelatedInfoTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<UnrelatedInfoTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<UnrelatedInfo> TraitsType;
  typedef UnrelatedInfoTypeSupport TypeSupportType;
  typedef UnrelatedInfoTypeSupport::_var_type _var_type;
  typedef UnrelatedInfoTypeSupport::_ptr_type _ptr_type;

  UnrelatedInfoTypeSupportImpl() {}
  virtual ~UnrelatedInfoTypeSupportImpl() {}

  virtual ::DDS::DataWriter_ptr create_datawriter();
  virtual ::DDS::DataReader_ptr create_datareader();
#ifndef OPENDDS_NO_MULTI_TOPIC
  virtual ::DDS::DataReader_ptr create_multitopic_datareader();
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
  virtual const OpenDDS::DCPS::MetaStruct& getMetaStructForType();
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
  virtual bool has_dcps_key();
  const char* default_type_name() const;
  static UnrelatedInfoTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
const MetaStruct& getMetaStruct<UnrelatedInfo>();
void gen_skip_over(Serializer& ser, UnrelatedInfo*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: UnrelatedInfo */


/* Begin STRUCT: Resulting */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const Resulting& stru, size_t& size, size_t& padding);

bool operator<<(Serializer& strm, const Resulting& stru);

bool operator>>(Serializer& strm, Resulting& stru);

size_t gen_max_marshaled_size(const Resulting& stru, bool align);

size_t gen_max_marshaled_size(KeyOnly<const Resulting> stru, bool align);

void gen_find_size(KeyOnly<const Resulting> stru, size_t& size, size_t& padding);

bool operator<<(Serializer& strm, KeyOnly<const Resulting> stru);

bool operator>>(Serializer& strm, KeyOnly<Resulting> stru);

template <>
struct MarshalTraits<Resulting> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct  Resulting_OpenDDS_KeyLessThan {
  bool operator()(const Resulting& v1, const Resulting& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.flight_id1 < v2.flight_id1) return true;
    if (v2.flight_id1 < v1.flight_id1) return false;
    if (v1.flight_id2 < v2.flight_id2) return true;
    if (v2.flight_id2 < v1.flight_id2) return false;
    return false;
  }
};


class ResultingTypeSupportImpl;

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<Resulting> {
  typedef Resulting MessageType;
  typedef ResultingSeq MessageSequenceType;
  typedef ResultingTypeSupport TypeSupportType;
  typedef ResultingTypeSupportImpl TypeSupportTypeImpl;
  typedef ResultingDataWriter DataWriterType;
  typedef ResultingDataReader DataReaderType;
  typedef Resulting_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "Resulting"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


class  ResultingTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<ResultingTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<Resulting> TraitsType;
  typedef ResultingTypeSupport TypeSupportType;
  typedef ResultingTypeSupport::_var_type _var_type;
  typedef ResultingTypeSupport::_ptr_type _ptr_type;

  ResultingTypeSupportImpl() {}
  virtual ~ResultingTypeSupportImpl() {}

  virtual ::DDS::DataWriter_ptr create_datawriter();
  virtual ::DDS::DataReader_ptr create_datareader();
#ifndef OPENDDS_NO_MULTI_TOPIC
  virtual ::DDS::DataReader_ptr create_multitopic_datareader();
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
  virtual const OpenDDS::DCPS::MetaStruct& getMetaStructForType();
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
  virtual bool has_dcps_key();
  const char* default_type_name() const;
  static ResultingTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
const MetaStruct& getMetaStruct<Resulting>();
void gen_skip_over(Serializer& ser, Resulting*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Resulting */
#endif /* OPENDDS_IDL_GENERATED_MULTITOPICTESTTYPESUPPORTIMPL_H_NO76PK */