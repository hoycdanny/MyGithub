/* -*- C++ -*- */
/* Generated by /Users/yc/MyGithub/imac-project/OpenDDS/OpenDDS-3.10/bin/opendds_idl version 3.10 (ACE version 6.2a_p11) running on input file SampleModel.idl */
#ifndef OPENDDS_IDL_GENERATED_SAMPLEMODELTYPESUPPORTIMPL_H_WIPUB4
#define OPENDDS_IDL_GENERATED_SAMPLEMODELTYPESUPPORTIMPL_H_WIPUB4
#include "SampleModelC.h"
#include "dds/DCPS/Definitions.h"
#include "SampleModelTypeSupportC.h"
#include "dds/DCPS/PoolAllocationBase.h"
#include "dds/DCPS/Serializer.h"
#include "dds/DCPS/TypeSupportImpl.h"
#include "SampleModel_Export.h"


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

SampleModel_Export
void gen_find_size(const FACE::DM::Position& stru, size_t& size, size_t& padding);

SampleModel_Export
bool operator<<(Serializer& strm, const FACE::DM::Position& stru);

SampleModel_Export
bool operator>>(Serializer& strm, FACE::DM::Position& stru);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

class MetaStruct;

template<typename T>
const MetaStruct& getMetaStruct();

template<>
SampleModel_Export
const MetaStruct& getMetaStruct<FACE::DM::Position>();
SampleModel_Export
void gen_skip_over(Serializer& ser, FACE::DM::Position*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Position */


/* Begin STRUCT: EGI_Data */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

SampleModel_Export
void gen_find_size(const FACE::DM::EGI_Data& stru, size_t& size, size_t& padding);

SampleModel_Export
bool operator<<(Serializer& strm, const FACE::DM::EGI_Data& stru);

SampleModel_Export
bool operator>>(Serializer& strm, FACE::DM::EGI_Data& stru);

SampleModel_Export
size_t gen_max_marshaled_size(const FACE::DM::EGI_Data& stru, bool align);

SampleModel_Export
size_t gen_max_marshaled_size(KeyOnly<const FACE::DM::EGI_Data> stru, bool align);

SampleModel_Export
void gen_find_size(KeyOnly<const FACE::DM::EGI_Data> stru, size_t& size, size_t& padding);

SampleModel_Export
bool operator<<(Serializer& strm, KeyOnly<const FACE::DM::EGI_Data> stru);

SampleModel_Export
bool operator>>(Serializer& strm, KeyOnly<FACE::DM::EGI_Data> stru);

template <>
struct MarshalTraits<FACE::DM::EGI_Data> {
  static bool gen_is_bounded_size() { return true; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace FACE {
namespace DM {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct SampleModel_Export EGI_Data_OpenDDS_KeyLessThan {
  bool operator()(const FACE::DM::EGI_Data&, const FACE::DM::EGI_Data&) const
  {
    // Eith no DCPS_DATA_KEYs, return false
    // to allow use of map with just one entry
    return false;
  }
};
}
}


namespace FACE {
namespace DM {
class EGI_DataTypeSupportImpl;
}
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<FACE::DM::EGI_Data> {
  typedef FACE::DM::EGI_Data MessageType;
  typedef FACE::DM::EGI_DataSeq MessageSequenceType;
  typedef FACE::DM::EGI_DataTypeSupport TypeSupportType;
  typedef FACE::DM::EGI_DataTypeSupportImpl TypeSupportTypeImpl;
  typedef FACE::DM::EGI_DataDataWriter DataWriterType;
  typedef FACE::DM::EGI_DataDataReader DataReaderType;
  typedef FACE::DM::EGI_Data_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "FACE::DM::EGI_Data"; }
  static bool gen_has_key () { return false; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace FACE {
namespace DM {
class SampleModel_Export EGI_DataTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<EGI_DataTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<EGI_Data> TraitsType;
  typedef EGI_DataTypeSupport TypeSupportType;
  typedef EGI_DataTypeSupport::_var_type _var_type;
  typedef EGI_DataTypeSupport::_ptr_type _ptr_type;

  EGI_DataTypeSupportImpl() {}
  virtual ~EGI_DataTypeSupportImpl() {}

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
  static EGI_DataTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
SampleModel_Export
const MetaStruct& getMetaStruct<FACE::DM::EGI_Data>();
SampleModel_Export
void gen_skip_over(Serializer& ser, FACE::DM::EGI_Data*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: EGI_Data */


/* Begin STRUCT: AttitudeBodyFrame */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

SampleModel_Export
void gen_find_size(const FACE::DM::AttitudeBodyFrame& stru, size_t& size, size_t& padding);

SampleModel_Export
bool operator<<(Serializer& strm, const FACE::DM::AttitudeBodyFrame& stru);

SampleModel_Export
bool operator>>(Serializer& strm, FACE::DM::AttitudeBodyFrame& stru);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
SampleModel_Export
const MetaStruct& getMetaStruct<FACE::DM::AttitudeBodyFrame>();
SampleModel_Export
void gen_skip_over(Serializer& ser, FACE::DM::AttitudeBodyFrame*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: AttitudeBodyFrame */


/* Begin STRUCT: IMU_Data */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

SampleModel_Export
void gen_find_size(const FACE::DM::IMU_Data& stru, size_t& size, size_t& padding);

SampleModel_Export
bool operator<<(Serializer& strm, const FACE::DM::IMU_Data& stru);

SampleModel_Export
bool operator>>(Serializer& strm, FACE::DM::IMU_Data& stru);

SampleModel_Export
size_t gen_max_marshaled_size(const FACE::DM::IMU_Data& stru, bool align);

SampleModel_Export
size_t gen_max_marshaled_size(KeyOnly<const FACE::DM::IMU_Data> stru, bool align);

SampleModel_Export
void gen_find_size(KeyOnly<const FACE::DM::IMU_Data> stru, size_t& size, size_t& padding);

SampleModel_Export
bool operator<<(Serializer& strm, KeyOnly<const FACE::DM::IMU_Data> stru);

SampleModel_Export
bool operator>>(Serializer& strm, KeyOnly<FACE::DM::IMU_Data> stru);

template <>
struct MarshalTraits<FACE::DM::IMU_Data> {
  static bool gen_is_bounded_size() { return true; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace FACE {
namespace DM {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct SampleModel_Export IMU_Data_OpenDDS_KeyLessThan {
  bool operator()(const FACE::DM::IMU_Data&, const FACE::DM::IMU_Data&) const
  {
    // Eith no DCPS_DATA_KEYs, return false
    // to allow use of map with just one entry
    return false;
  }
};
}
}


namespace FACE {
namespace DM {
class IMU_DataTypeSupportImpl;
}
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<FACE::DM::IMU_Data> {
  typedef FACE::DM::IMU_Data MessageType;
  typedef FACE::DM::IMU_DataSeq MessageSequenceType;
  typedef FACE::DM::IMU_DataTypeSupport TypeSupportType;
  typedef FACE::DM::IMU_DataTypeSupportImpl TypeSupportTypeImpl;
  typedef FACE::DM::IMU_DataDataWriter DataWriterType;
  typedef FACE::DM::IMU_DataDataReader DataReaderType;
  typedef FACE::DM::IMU_Data_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "FACE::DM::IMU_Data"; }
  static bool gen_has_key () { return false; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace FACE {
namespace DM {
class SampleModel_Export IMU_DataTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<IMU_DataTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<IMU_Data> TraitsType;
  typedef IMU_DataTypeSupport TypeSupportType;
  typedef IMU_DataTypeSupport::_var_type _var_type;
  typedef IMU_DataTypeSupport::_ptr_type _ptr_type;

  IMU_DataTypeSupportImpl() {}
  virtual ~IMU_DataTypeSupportImpl() {}

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
  static IMU_DataTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
SampleModel_Export
const MetaStruct& getMetaStruct<FACE::DM::IMU_Data>();
SampleModel_Export
void gen_skip_over(Serializer& ser, FACE::DM::IMU_Data*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: IMU_Data */


/* Begin STRUCT: Nav_Data */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

SampleModel_Export
void gen_find_size(const FACE::DM::Nav_Data& stru, size_t& size, size_t& padding);

SampleModel_Export
bool operator<<(Serializer& strm, const FACE::DM::Nav_Data& stru);

SampleModel_Export
bool operator>>(Serializer& strm, FACE::DM::Nav_Data& stru);

SampleModel_Export
size_t gen_max_marshaled_size(const FACE::DM::Nav_Data& stru, bool align);

SampleModel_Export
size_t gen_max_marshaled_size(KeyOnly<const FACE::DM::Nav_Data> stru, bool align);

SampleModel_Export
void gen_find_size(KeyOnly<const FACE::DM::Nav_Data> stru, size_t& size, size_t& padding);

SampleModel_Export
bool operator<<(Serializer& strm, KeyOnly<const FACE::DM::Nav_Data> stru);

SampleModel_Export
bool operator>>(Serializer& strm, KeyOnly<FACE::DM::Nav_Data> stru);

template <>
struct MarshalTraits<FACE::DM::Nav_Data> {
  static bool gen_is_bounded_size() { return true; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace FACE {
namespace DM {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct SampleModel_Export Nav_Data_OpenDDS_KeyLessThan {
  bool operator()(const FACE::DM::Nav_Data&, const FACE::DM::Nav_Data&) const
  {
    // Eith no DCPS_DATA_KEYs, return false
    // to allow use of map with just one entry
    return false;
  }
};
}
}


namespace FACE {
namespace DM {
class Nav_DataTypeSupportImpl;
}
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<FACE::DM::Nav_Data> {
  typedef FACE::DM::Nav_Data MessageType;
  typedef FACE::DM::Nav_DataSeq MessageSequenceType;
  typedef FACE::DM::Nav_DataTypeSupport TypeSupportType;
  typedef FACE::DM::Nav_DataTypeSupportImpl TypeSupportTypeImpl;
  typedef FACE::DM::Nav_DataDataWriter DataWriterType;
  typedef FACE::DM::Nav_DataDataReader DataReaderType;
  typedef FACE::DM::Nav_Data_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "FACE::DM::Nav_Data"; }
  static bool gen_has_key () { return false; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace FACE {
namespace DM {
class SampleModel_Export Nav_DataTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<Nav_DataTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<Nav_Data> TraitsType;
  typedef Nav_DataTypeSupport TypeSupportType;
  typedef Nav_DataTypeSupport::_var_type _var_type;
  typedef Nav_DataTypeSupport::_ptr_type _ptr_type;

  Nav_DataTypeSupportImpl() {}
  virtual ~Nav_DataTypeSupportImpl() {}

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
  static Nav_DataTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
SampleModel_Export
const MetaStruct& getMetaStruct<FACE::DM::Nav_Data>();
SampleModel_Export
void gen_skip_over(Serializer& ser, FACE::DM::Nav_Data*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Nav_Data */

/* End MODULE: DM */

/* End MODULE: FACE */
#endif /* OPENDDS_IDL_GENERATED_SAMPLEMODELTYPESUPPORTIMPL_H_WIPUB4 */
