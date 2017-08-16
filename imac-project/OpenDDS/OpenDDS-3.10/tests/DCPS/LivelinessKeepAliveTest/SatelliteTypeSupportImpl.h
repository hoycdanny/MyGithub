/* -*- C++ -*- */
/* Generated by /Users/yc/MyGithub/imac-project/OpenDDS/OpenDDS-3.10/bin/opendds_idl version 3.10 (ACE version 6.2a_p11) running on input file Satellite.idl */
#ifndef OPENDDS_IDL_GENERATED_SATELLITETYPESUPPORTIMPL_H_ONWHR0
#define OPENDDS_IDL_GENERATED_SATELLITETYPESUPPORTIMPL_H_ONWHR0
#include "SatelliteC.h"
#include "dds/DCPS/Definitions.h"
#include "SatelliteTypeSupportC.h"
#include "dds/DCPS/Serializer.h"
#include "dds/DCPS/TypeSupportImpl.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: Satellite */



/* Begin STRUCT: Vector */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

LivelinessKeepAliveTest_Export
void gen_find_size(const Satellite::Vector& stru, size_t& size, size_t& padding);

LivelinessKeepAliveTest_Export
bool operator<<(Serializer& strm, const Satellite::Vector& stru);

LivelinessKeepAliveTest_Export
bool operator>>(Serializer& strm, Satellite::Vector& stru);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

class MetaStruct;

template<typename T>
const MetaStruct& getMetaStruct();

template<>
LivelinessKeepAliveTest_Export
const MetaStruct& getMetaStruct<Satellite::Vector>();
LivelinessKeepAliveTest_Export
void gen_skip_over(Serializer& ser, Satellite::Vector*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Vector */


/* Begin STRUCT: Telemetry */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

LivelinessKeepAliveTest_Export
void gen_find_size(const Satellite::Telemetry& stru, size_t& size, size_t& padding);

LivelinessKeepAliveTest_Export
bool operator<<(Serializer& strm, const Satellite::Telemetry& stru);

LivelinessKeepAliveTest_Export
bool operator>>(Serializer& strm, Satellite::Telemetry& stru);

LivelinessKeepAliveTest_Export
size_t gen_max_marshaled_size(const Satellite::Telemetry& stru, bool align);

LivelinessKeepAliveTest_Export
size_t gen_max_marshaled_size(KeyOnly<const Satellite::Telemetry> stru, bool align);

LivelinessKeepAliveTest_Export
void gen_find_size(KeyOnly<const Satellite::Telemetry> stru, size_t& size, size_t& padding);

LivelinessKeepAliveTest_Export
bool operator<<(Serializer& strm, KeyOnly<const Satellite::Telemetry> stru);

LivelinessKeepAliveTest_Export
bool operator>>(Serializer& strm, KeyOnly<Satellite::Telemetry> stru);

template <>
struct MarshalTraits<Satellite::Telemetry> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return false; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Satellite {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct LivelinessKeepAliveTest_Export Telemetry_OpenDDS_KeyLessThan {
  bool operator()(const Satellite::Telemetry& v1, const Satellite::Telemetry& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.satellite < v2.satellite) return true;
    if (v2.satellite < v1.satellite) return false;
    return false;
  }
};
}


namespace Satellite {
class TelemetryTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<Satellite::Telemetry> {
  typedef Satellite::Telemetry MessageType;
  typedef Satellite::TelemetrySeq MessageSequenceType;
  typedef Satellite::TelemetryTypeSupport TypeSupportType;
  typedef Satellite::TelemetryTypeSupportImpl TypeSupportTypeImpl;
  typedef Satellite::TelemetryDataWriter DataWriterType;
  typedef Satellite::TelemetryDataReader DataReaderType;
  typedef Satellite::Telemetry_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "Satellite::Telemetry"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Satellite {
class LivelinessKeepAliveTest_Export TelemetryTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<TelemetryTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<Telemetry> TraitsType;
  typedef TelemetryTypeSupport TypeSupportType;
  typedef TelemetryTypeSupport::_var_type _var_type;
  typedef TelemetryTypeSupport::_ptr_type _ptr_type;

  TelemetryTypeSupportImpl() {}
  virtual ~TelemetryTypeSupportImpl() {}

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
  static TelemetryTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
LivelinessKeepAliveTest_Export
const MetaStruct& getMetaStruct<Satellite::Telemetry>();
LivelinessKeepAliveTest_Export
void gen_skip_over(Serializer& ser, Satellite::Telemetry*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Telemetry */


/* Begin TYPEDEF: ItemCode */


/* End TYPEDEF: ItemCode */


/* Begin CONST: FUEL */


/* End CONST: FUEL */


/* Begin CONST: BATTERY */


/* End CONST: BATTERY */


/* Begin CONST: SYSTEM */


/* End CONST: SYSTEM */


/* Begin TYPEDEF: AlertCode */


/* End TYPEDEF: AlertCode */


/* Begin CONST: LOW */


/* End CONST: LOW */


/* Begin CONST: DEAD */


/* End CONST: DEAD */


/* Begin CONST: SYSTEM_SHUTDOWN */


/* End CONST: SYSTEM_SHUTDOWN */


/* Begin STRUCT: Alert */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

LivelinessKeepAliveTest_Export
void gen_find_size(const Satellite::Alert& stru, size_t& size, size_t& padding);

LivelinessKeepAliveTest_Export
bool operator<<(Serializer& strm, const Satellite::Alert& stru);

LivelinessKeepAliveTest_Export
bool operator>>(Serializer& strm, Satellite::Alert& stru);

LivelinessKeepAliveTest_Export
size_t gen_max_marshaled_size(const Satellite::Alert& stru, bool align);

LivelinessKeepAliveTest_Export
size_t gen_max_marshaled_size(KeyOnly<const Satellite::Alert> stru, bool align);

LivelinessKeepAliveTest_Export
void gen_find_size(KeyOnly<const Satellite::Alert> stru, size_t& size, size_t& padding);

LivelinessKeepAliveTest_Export
bool operator<<(Serializer& strm, KeyOnly<const Satellite::Alert> stru);

LivelinessKeepAliveTest_Export
bool operator>>(Serializer& strm, KeyOnly<Satellite::Alert> stru);

template <>
struct MarshalTraits<Satellite::Alert> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return false; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Satellite {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct LivelinessKeepAliveTest_Export Alert_OpenDDS_KeyLessThan {
  bool operator()(const Satellite::Alert& v1, const Satellite::Alert& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.satellite < v2.satellite) return true;
    if (v2.satellite < v1.satellite) return false;
    if (v1.item < v2.item) return true;
    if (v2.item < v1.item) return false;
    return false;
  }
};
}


namespace Satellite {
class AlertTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<Satellite::Alert> {
  typedef Satellite::Alert MessageType;
  typedef Satellite::AlertSeq MessageSequenceType;
  typedef Satellite::AlertTypeSupport TypeSupportType;
  typedef Satellite::AlertTypeSupportImpl TypeSupportTypeImpl;
  typedef Satellite::AlertDataWriter DataWriterType;
  typedef Satellite::AlertDataReader DataReaderType;
  typedef Satellite::Alert_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "Satellite::Alert"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Satellite {
class LivelinessKeepAliveTest_Export AlertTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<AlertTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<Alert> TraitsType;
  typedef AlertTypeSupport TypeSupportType;
  typedef AlertTypeSupport::_var_type _var_type;
  typedef AlertTypeSupport::_ptr_type _ptr_type;

  AlertTypeSupportImpl() {}
  virtual ~AlertTypeSupportImpl() {}

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
  static AlertTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
LivelinessKeepAliveTest_Export
const MetaStruct& getMetaStruct<Satellite::Alert>();
LivelinessKeepAliveTest_Export
void gen_skip_over(Serializer& ser, Satellite::Alert*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Alert */

/* End MODULE: Satellite */
#endif /* OPENDDS_IDL_GENERATED_SATELLITETYPESUPPORTIMPL_H_ONWHR0 */
