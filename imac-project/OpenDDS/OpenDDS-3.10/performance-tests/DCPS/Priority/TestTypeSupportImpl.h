/* -*- C++ -*- */
/* Generated by /Users/yc/MyGithub/imac-project/OpenDDS/OpenDDS-3.10/bin/opendds_idl version 3.10 (ACE version 6.2a_p11) running on input file Test.idl */
#ifndef OPENDDS_IDL_GENERATED_TESTTYPESUPPORTIMPL_H_2KJSDF
#define OPENDDS_IDL_GENERATED_TESTTYPESUPPORTIMPL_H_2KJSDF
#include "TestC.h"
#include "dds/DCPS/Definitions.h"
#include "TestTypeSupportC.h"
#include "dds/DCPS/Serializer.h"
#include "dds/DCPS/TypeSupportImpl.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: Test */



/* Begin TYPEDEF: OctetSeq */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

Priority_Export
void gen_find_size(const Test::OctetSeq& seq, size_t& size, size_t& padding);

Priority_Export
bool operator<<(Serializer& strm, const Test::OctetSeq& seq);

Priority_Export
bool operator>>(Serializer& strm, Test::OctetSeq& seq);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

Priority_Export
void gen_skip_over(Serializer& ser, Test::OctetSeq*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: OctetSeq */


/* Begin STRUCT: Data */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

Priority_Export
void gen_find_size(const Test::Data& stru, size_t& size, size_t& padding);

Priority_Export
bool operator<<(Serializer& strm, const Test::Data& stru);

Priority_Export
bool operator>>(Serializer& strm, Test::Data& stru);

Priority_Export
size_t gen_max_marshaled_size(const Test::Data& stru, bool align);

Priority_Export
size_t gen_max_marshaled_size(KeyOnly<const Test::Data> stru, bool align);

Priority_Export
void gen_find_size(KeyOnly<const Test::Data> stru, size_t& size, size_t& padding);

Priority_Export
bool operator<<(Serializer& strm, KeyOnly<const Test::Data> stru);

Priority_Export
bool operator>>(Serializer& strm, KeyOnly<Test::Data> stru);

template <>
struct MarshalTraits<Test::Data> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Test {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct Priority_Export Data_OpenDDS_KeyLessThan {
  bool operator()(const Test::Data& v1, const Test::Data& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.priority < v2.priority) return true;
    if (v2.priority < v1.priority) return false;
    return false;
  }
};
}


namespace Test {
class DataTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<Test::Data> {
  typedef Test::Data MessageType;
  typedef Test::DataSeq MessageSequenceType;
  typedef Test::DataTypeSupport TypeSupportType;
  typedef Test::DataTypeSupportImpl TypeSupportTypeImpl;
  typedef Test::DataDataWriter DataWriterType;
  typedef Test::DataDataReader DataReaderType;
  typedef Test::Data_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "Test::Data"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Test {
class Priority_Export DataTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<DataTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<Data> TraitsType;
  typedef DataTypeSupport TypeSupportType;
  typedef DataTypeSupport::_var_type _var_type;
  typedef DataTypeSupport::_ptr_type _ptr_type;

  DataTypeSupportImpl() {}
  virtual ~DataTypeSupportImpl() {}

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
  static DataTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

class MetaStruct;

template<typename T>
const MetaStruct& getMetaStruct();

template<>
Priority_Export
const MetaStruct& getMetaStruct<Test::Data>();
Priority_Export
void gen_skip_over(Serializer& ser, Test::Data*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Data */

/* End MODULE: Test */
#endif /* OPENDDS_IDL_GENERATED_TESTTYPESUPPORTIMPL_H_2KJSDF */
