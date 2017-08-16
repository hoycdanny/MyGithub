/* -*- C++ -*- */
/* Generated by /Users/yc/MyGithub/imac-project/OpenDDS/OpenDDS-3.10/bin/opendds_idl version 3.10 (ACE version 6.2a_p11) running on input file KeyTest.idl */
#ifndef OPENDDS_IDL_GENERATED_KEYTESTTYPESUPPORTIMPL_H_AKZ95C
#define OPENDDS_IDL_GENERATED_KEYTESTTYPESUPPORTIMPL_H_AKZ95C
#include "KeyTestC.h"
#include "dds/DCPS/Definitions.h"
#include "KeyTestTypeSupportC.h"
#include "dds/DCPS/Serializer.h"
#include "dds/DCPS/TypeSupportImpl.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: Messenger1 */



/* Begin STRUCT: Message */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

KeyTest_Export
void gen_find_size(const Messenger1::Message& stru, size_t& size, size_t& padding);

KeyTest_Export
bool operator<<(Serializer& strm, const Messenger1::Message& stru);

KeyTest_Export
bool operator>>(Serializer& strm, Messenger1::Message& stru);

KeyTest_Export
size_t gen_max_marshaled_size(const Messenger1::Message& stru, bool align);

KeyTest_Export
size_t gen_max_marshaled_size(KeyOnly<const Messenger1::Message> stru, bool align);

KeyTest_Export
void gen_find_size(KeyOnly<const Messenger1::Message> stru, size_t& size, size_t& padding);

KeyTest_Export
bool operator<<(Serializer& strm, KeyOnly<const Messenger1::Message> stru);

KeyTest_Export
bool operator>>(Serializer& strm, KeyOnly<Messenger1::Message> stru);

template <>
struct MarshalTraits<Messenger1::Message> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger1 {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct KeyTest_Export Message_OpenDDS_KeyLessThan {
  bool operator()(const Messenger1::Message&, const Messenger1::Message&) const
  {
    // Eith no DCPS_DATA_KEYs, return false
    // to allow use of map with just one entry
    return false;
  }
};
}


namespace Messenger1 {
class MessageTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<Messenger1::Message> {
  typedef Messenger1::Message MessageType;
  typedef Messenger1::MessageSeq MessageSequenceType;
  typedef Messenger1::MessageTypeSupport TypeSupportType;
  typedef Messenger1::MessageTypeSupportImpl TypeSupportTypeImpl;
  typedef Messenger1::MessageDataWriter DataWriterType;
  typedef Messenger1::MessageDataReader DataReaderType;
  typedef Messenger1::Message_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "Messenger1::Message"; }
  static bool gen_has_key () { return false; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger1 {
class KeyTest_Export MessageTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<MessageTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<Message> TraitsType;
  typedef MessageTypeSupport TypeSupportType;
  typedef MessageTypeSupport::_var_type _var_type;
  typedef MessageTypeSupport::_ptr_type _ptr_type;

  MessageTypeSupportImpl() {}
  virtual ~MessageTypeSupportImpl() {}

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
  static MessageTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

class MetaStruct;

template<typename T>
const MetaStruct& getMetaStruct();

template<>
KeyTest_Export
const MetaStruct& getMetaStruct<Messenger1::Message>();
KeyTest_Export
void gen_skip_over(Serializer& ser, Messenger1::Message*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Message */

/* End MODULE: Messenger1 */


/* Begin MODULE: Messenger2 */



/* Begin STRUCT: Message */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

KeyTest_Export
void gen_find_size(const Messenger2::Message& stru, size_t& size, size_t& padding);

KeyTest_Export
bool operator<<(Serializer& strm, const Messenger2::Message& stru);

KeyTest_Export
bool operator>>(Serializer& strm, Messenger2::Message& stru);

KeyTest_Export
size_t gen_max_marshaled_size(const Messenger2::Message& stru, bool align);

KeyTest_Export
size_t gen_max_marshaled_size(KeyOnly<const Messenger2::Message> stru, bool align);

KeyTest_Export
void gen_find_size(KeyOnly<const Messenger2::Message> stru, size_t& size, size_t& padding);

KeyTest_Export
bool operator<<(Serializer& strm, KeyOnly<const Messenger2::Message> stru);

KeyTest_Export
bool operator>>(Serializer& strm, KeyOnly<Messenger2::Message> stru);

template <>
struct MarshalTraits<Messenger2::Message> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger2 {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct KeyTest_Export Message_OpenDDS_KeyLessThan {
  bool operator()(const Messenger2::Message& v1, const Messenger2::Message& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.subject_id < v2.subject_id) return true;
    if (v2.subject_id < v1.subject_id) return false;
    return false;
  }
};
}


namespace Messenger2 {
class MessageTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<Messenger2::Message> {
  typedef Messenger2::Message MessageType;
  typedef Messenger2::MessageSeq MessageSequenceType;
  typedef Messenger2::MessageTypeSupport TypeSupportType;
  typedef Messenger2::MessageTypeSupportImpl TypeSupportTypeImpl;
  typedef Messenger2::MessageDataWriter DataWriterType;
  typedef Messenger2::MessageDataReader DataReaderType;
  typedef Messenger2::Message_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "Messenger2::Message"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger2 {
class KeyTest_Export MessageTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<MessageTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<Message> TraitsType;
  typedef MessageTypeSupport TypeSupportType;
  typedef MessageTypeSupport::_var_type _var_type;
  typedef MessageTypeSupport::_ptr_type _ptr_type;

  MessageTypeSupportImpl() {}
  virtual ~MessageTypeSupportImpl() {}

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
  static MessageTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
KeyTest_Export
const MetaStruct& getMetaStruct<Messenger2::Message>();
KeyTest_Export
void gen_skip_over(Serializer& ser, Messenger2::Message*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Message */

/* End MODULE: Messenger2 */


/* Begin MODULE: Messenger3 */



/* Begin STRUCT: Message */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

KeyTest_Export
void gen_find_size(const Messenger3::Message& stru, size_t& size, size_t& padding);

KeyTest_Export
bool operator<<(Serializer& strm, const Messenger3::Message& stru);

KeyTest_Export
bool operator>>(Serializer& strm, Messenger3::Message& stru);

KeyTest_Export
size_t gen_max_marshaled_size(const Messenger3::Message& stru, bool align);

KeyTest_Export
size_t gen_max_marshaled_size(KeyOnly<const Messenger3::Message> stru, bool align);

KeyTest_Export
void gen_find_size(KeyOnly<const Messenger3::Message> stru, size_t& size, size_t& padding);

KeyTest_Export
bool operator<<(Serializer& strm, KeyOnly<const Messenger3::Message> stru);

KeyTest_Export
bool operator>>(Serializer& strm, KeyOnly<Messenger3::Message> stru);

template <>
struct MarshalTraits<Messenger3::Message> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger3 {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct KeyTest_Export Message_OpenDDS_KeyLessThan {
  bool operator()(const Messenger3::Message& v1, const Messenger3::Message& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.subject_id < v2.subject_id) return true;
    if (v2.subject_id < v1.subject_id) return false;
    if (v1.count < v2.count) return true;
    if (v2.count < v1.count) return false;
    return false;
  }
};
}


namespace Messenger3 {
class MessageTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<Messenger3::Message> {
  typedef Messenger3::Message MessageType;
  typedef Messenger3::MessageSeq MessageSequenceType;
  typedef Messenger3::MessageTypeSupport TypeSupportType;
  typedef Messenger3::MessageTypeSupportImpl TypeSupportTypeImpl;
  typedef Messenger3::MessageDataWriter DataWriterType;
  typedef Messenger3::MessageDataReader DataReaderType;
  typedef Messenger3::Message_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "Messenger3::Message"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger3 {
class KeyTest_Export MessageTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<MessageTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<Message> TraitsType;
  typedef MessageTypeSupport TypeSupportType;
  typedef MessageTypeSupport::_var_type _var_type;
  typedef MessageTypeSupport::_ptr_type _ptr_type;

  MessageTypeSupportImpl() {}
  virtual ~MessageTypeSupportImpl() {}

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
  static MessageTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
KeyTest_Export
const MetaStruct& getMetaStruct<Messenger3::Message>();
KeyTest_Export
void gen_skip_over(Serializer& ser, Messenger3::Message*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Message */

/* End MODULE: Messenger3 */


/* Begin MODULE: Messenger4 */



/* Begin ENUM: EnumType */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

KeyTest_Export
bool operator<<(Serializer& strm, const Messenger4::EnumType& enumval);

KeyTest_Export
bool operator>>(Serializer& strm, Messenger4::EnumType& enumval);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

extern const char* gen_Messenger4_EnumType_names[];
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End ENUM: EnumType */


/* Begin STRUCT: Message */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

KeyTest_Export
void gen_find_size(const Messenger4::Message& stru, size_t& size, size_t& padding);

KeyTest_Export
bool operator<<(Serializer& strm, const Messenger4::Message& stru);

KeyTest_Export
bool operator>>(Serializer& strm, Messenger4::Message& stru);

KeyTest_Export
size_t gen_max_marshaled_size(const Messenger4::Message& stru, bool align);

KeyTest_Export
size_t gen_max_marshaled_size(KeyOnly<const Messenger4::Message> stru, bool align);

KeyTest_Export
void gen_find_size(KeyOnly<const Messenger4::Message> stru, size_t& size, size_t& padding);

KeyTest_Export
bool operator<<(Serializer& strm, KeyOnly<const Messenger4::Message> stru);

KeyTest_Export
bool operator>>(Serializer& strm, KeyOnly<Messenger4::Message> stru);

template <>
struct MarshalTraits<Messenger4::Message> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return false; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger4 {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct KeyTest_Export Message_OpenDDS_KeyLessThan {
  bool operator()(const Messenger4::Message& v1, const Messenger4::Message& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.short_field < v2.short_field) return true;
    if (v2.short_field < v1.short_field) return false;
    if (v1.unsigned_short_field < v2.unsigned_short_field) return true;
    if (v2.unsigned_short_field < v1.unsigned_short_field) return false;
    if (v1.long_field < v2.long_field) return true;
    if (v2.long_field < v1.long_field) return false;
    if (v1.unsigned_long_field < v2.unsigned_long_field) return true;
    if (v2.unsigned_long_field < v1.unsigned_long_field) return false;
    if (v1.long_long_field < v2.long_long_field) return true;
    if (v2.long_long_field < v1.long_long_field) return false;
    if (v1.unsigned_long_long_field < v2.unsigned_long_long_field) return true;
    if (v2.unsigned_long_long_field < v1.unsigned_long_long_field) return false;
    if (v1.char_field < v2.char_field) return true;
    if (v2.char_field < v1.char_field) return false;
    if (v1.wchar_field < v2.wchar_field) return true;
    if (v2.wchar_field < v1.wchar_field) return false;
    if (v1.float_field < v2.float_field) return true;
    if (v2.float_field < v1.float_field) return false;
    if (v1.double_field < v2.double_field) return true;
    if (v2.double_field < v1.double_field) return false;
    if (v1.long_double_field < v2.long_double_field) return true;
    if (v2.long_double_field < v1.long_double_field) return false;
    if (v1.boolean_field < v2.boolean_field) return true;
    if (v2.boolean_field < v1.boolean_field) return false;
    if (v1.octet_field < v2.octet_field) return true;
    if (v2.octet_field < v1.octet_field) return false;
    if (v1.enum_field < v2.enum_field) return true;
    if (v2.enum_field < v1.enum_field) return false;
    if (v1.string_field < v2.string_field) return true;
    if (v2.string_field < v1.string_field) return false;
    if (v1.wstring_field < v2.wstring_field) return true;
    if (v2.wstring_field < v1.wstring_field) return false;
    return false;
  }
};
}


namespace Messenger4 {
class MessageTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<Messenger4::Message> {
  typedef Messenger4::Message MessageType;
  typedef Messenger4::MessageSeq MessageSequenceType;
  typedef Messenger4::MessageTypeSupport TypeSupportType;
  typedef Messenger4::MessageTypeSupportImpl TypeSupportTypeImpl;
  typedef Messenger4::MessageDataWriter DataWriterType;
  typedef Messenger4::MessageDataReader DataReaderType;
  typedef Messenger4::Message_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "Messenger4::Message"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger4 {
class KeyTest_Export MessageTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<MessageTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<Message> TraitsType;
  typedef MessageTypeSupport TypeSupportType;
  typedef MessageTypeSupport::_var_type _var_type;
  typedef MessageTypeSupport::_ptr_type _ptr_type;

  MessageTypeSupportImpl() {}
  virtual ~MessageTypeSupportImpl() {}

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
  static MessageTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
KeyTest_Export
const MetaStruct& getMetaStruct<Messenger4::Message>();
KeyTest_Export
void gen_skip_over(Serializer& ser, Messenger4::Message*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Message */


/* Begin STRUCT: NestedMessage */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

KeyTest_Export
void gen_find_size(const Messenger4::NestedMessage& stru, size_t& size, size_t& padding);

KeyTest_Export
bool operator<<(Serializer& strm, const Messenger4::NestedMessage& stru);

KeyTest_Export
bool operator>>(Serializer& strm, Messenger4::NestedMessage& stru);

KeyTest_Export
size_t gen_max_marshaled_size(const Messenger4::NestedMessage& stru, bool align);

KeyTest_Export
size_t gen_max_marshaled_size(KeyOnly<const Messenger4::NestedMessage> stru, bool align);

KeyTest_Export
void gen_find_size(KeyOnly<const Messenger4::NestedMessage> stru, size_t& size, size_t& padding);

KeyTest_Export
bool operator<<(Serializer& strm, KeyOnly<const Messenger4::NestedMessage> stru);

KeyTest_Export
bool operator>>(Serializer& strm, KeyOnly<Messenger4::NestedMessage> stru);

template <>
struct MarshalTraits<Messenger4::NestedMessage> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return false; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger4 {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct KeyTest_Export NestedMessage_OpenDDS_KeyLessThan {
  bool operator()(const Messenger4::NestedMessage& v1, const Messenger4::NestedMessage& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.mess.short_field < v2.mess.short_field) return true;
    if (v2.mess.short_field < v1.mess.short_field) return false;
    if (v1.mess.unsigned_short_field < v2.mess.unsigned_short_field) return true;
    if (v2.mess.unsigned_short_field < v1.mess.unsigned_short_field) return false;
    if (v1.mess.long_field < v2.mess.long_field) return true;
    if (v2.mess.long_field < v1.mess.long_field) return false;
    if (v1.mess.unsigned_long_field < v2.mess.unsigned_long_field) return true;
    if (v2.mess.unsigned_long_field < v1.mess.unsigned_long_field) return false;
    if (v1.mess.long_long_field < v2.mess.long_long_field) return true;
    if (v2.mess.long_long_field < v1.mess.long_long_field) return false;
    if (v1.mess.unsigned_long_long_field < v2.mess.unsigned_long_long_field) return true;
    if (v2.mess.unsigned_long_long_field < v1.mess.unsigned_long_long_field) return false;
    if (v1.mess.char_field < v2.mess.char_field) return true;
    if (v2.mess.char_field < v1.mess.char_field) return false;
    if (v1.mess.wchar_field < v2.mess.wchar_field) return true;
    if (v2.mess.wchar_field < v1.mess.wchar_field) return false;
    if (v1.mess.float_field < v2.mess.float_field) return true;
    if (v2.mess.float_field < v1.mess.float_field) return false;
    if (v1.mess.double_field < v2.mess.double_field) return true;
    if (v2.mess.double_field < v1.mess.double_field) return false;
    if (v1.mess.long_double_field < v2.mess.long_double_field) return true;
    if (v2.mess.long_double_field < v1.mess.long_double_field) return false;
    if (v1.mess.boolean_field < v2.mess.boolean_field) return true;
    if (v2.mess.boolean_field < v1.mess.boolean_field) return false;
    if (v1.mess.octet_field < v2.mess.octet_field) return true;
    if (v2.mess.octet_field < v1.mess.octet_field) return false;
    if (v1.mess.enum_field < v2.mess.enum_field) return true;
    if (v2.mess.enum_field < v1.mess.enum_field) return false;
    if (v1.mess.string_field < v2.mess.string_field) return true;
    if (v2.mess.string_field < v1.mess.string_field) return false;
    if (v1.mess.wstring_field < v2.mess.wstring_field) return true;
    if (v2.mess.wstring_field < v1.mess.wstring_field) return false;
    return false;
  }
};
}


namespace Messenger4 {
class NestedMessageTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<Messenger4::NestedMessage> {
  typedef Messenger4::NestedMessage MessageType;
  typedef Messenger4::NestedMessageSeq MessageSequenceType;
  typedef Messenger4::NestedMessageTypeSupport TypeSupportType;
  typedef Messenger4::NestedMessageTypeSupportImpl TypeSupportTypeImpl;
  typedef Messenger4::NestedMessageDataWriter DataWriterType;
  typedef Messenger4::NestedMessageDataReader DataReaderType;
  typedef Messenger4::NestedMessage_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "Messenger4::NestedMessage"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger4 {
class KeyTest_Export NestedMessageTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<NestedMessageTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<NestedMessage> TraitsType;
  typedef NestedMessageTypeSupport TypeSupportType;
  typedef NestedMessageTypeSupport::_var_type _var_type;
  typedef NestedMessageTypeSupport::_ptr_type _ptr_type;

  NestedMessageTypeSupportImpl() {}
  virtual ~NestedMessageTypeSupportImpl() {}

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
  static NestedMessageTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
KeyTest_Export
const MetaStruct& getMetaStruct<Messenger4::NestedMessage>();
KeyTest_Export
void gen_skip_over(Serializer& ser, Messenger4::NestedMessage*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: NestedMessage */

/* End MODULE: Messenger4 */


/* Begin MODULE: Messenger5 */



/* Begin TYPEDEF: ResponseArray */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

KeyTest_Export
void gen_find_size(const Messenger5::ResponseArray_forany& arr, size_t& size, size_t& padding);

KeyTest_Export
bool operator<<(Serializer& strm, const Messenger5::ResponseArray_forany& arr);

KeyTest_Export
bool operator>>(Serializer& strm, Messenger5::ResponseArray_forany& arr);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

KeyTest_Export
void gen_skip_over(Serializer& ser, Messenger5::ResponseArray_forany*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: ResponseArray */


/* Begin STRUCT: HeaderType */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

KeyTest_Export
void gen_find_size(const Messenger5::HeaderType& stru, size_t& size, size_t& padding);

KeyTest_Export
bool operator<<(Serializer& strm, const Messenger5::HeaderType& stru);

KeyTest_Export
bool operator>>(Serializer& strm, Messenger5::HeaderType& stru);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
KeyTest_Export
const MetaStruct& getMetaStruct<Messenger5::HeaderType>();
KeyTest_Export
void gen_skip_over(Serializer& ser, Messenger5::HeaderType*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: HeaderType */


/* Begin STRUCT: Message */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

KeyTest_Export
void gen_find_size(const Messenger5::Message& stru, size_t& size, size_t& padding);

KeyTest_Export
bool operator<<(Serializer& strm, const Messenger5::Message& stru);

KeyTest_Export
bool operator>>(Serializer& strm, Messenger5::Message& stru);

KeyTest_Export
size_t gen_max_marshaled_size(const Messenger5::Message& stru, bool align);

KeyTest_Export
size_t gen_max_marshaled_size(KeyOnly<const Messenger5::Message> stru, bool align);

KeyTest_Export
void gen_find_size(KeyOnly<const Messenger5::Message> stru, size_t& size, size_t& padding);

KeyTest_Export
bool operator<<(Serializer& strm, KeyOnly<const Messenger5::Message> stru);

KeyTest_Export
bool operator>>(Serializer& strm, KeyOnly<Messenger5::Message> stru);

template <>
struct MarshalTraits<Messenger5::Message> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return false; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger5 {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct KeyTest_Export Message_OpenDDS_KeyLessThan {
  bool operator()(const Messenger5::Message& v1, const Messenger5::Message& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.header.wsubject < v2.header.wsubject) return true;
    if (v2.header.wsubject < v1.header.wsubject) return false;
    return false;
  }
};
}


namespace Messenger5 {
class MessageTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<Messenger5::Message> {
  typedef Messenger5::Message MessageType;
  typedef Messenger5::MessageSeq MessageSequenceType;
  typedef Messenger5::MessageTypeSupport TypeSupportType;
  typedef Messenger5::MessageTypeSupportImpl TypeSupportTypeImpl;
  typedef Messenger5::MessageDataWriter DataWriterType;
  typedef Messenger5::MessageDataReader DataReaderType;
  typedef Messenger5::Message_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "Messenger5::Message"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger5 {
class KeyTest_Export MessageTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<MessageTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<Message> TraitsType;
  typedef MessageTypeSupport TypeSupportType;
  typedef MessageTypeSupport::_var_type _var_type;
  typedef MessageTypeSupport::_ptr_type _ptr_type;

  MessageTypeSupportImpl() {}
  virtual ~MessageTypeSupportImpl() {}

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
  static MessageTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
KeyTest_Export
const MetaStruct& getMetaStruct<Messenger5::Message>();
KeyTest_Export
void gen_skip_over(Serializer& ser, Messenger5::Message*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Message */

/* End MODULE: Messenger5 */


/* Begin MODULE: Messenger6 */



/* Begin TYPEDEF: ResponseArray */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

KeyTest_Export
void gen_find_size(const Messenger6::ResponseArray_forany& arr, size_t& size, size_t& padding);

KeyTest_Export
bool operator<<(Serializer& strm, const Messenger6::ResponseArray_forany& arr);

KeyTest_Export
bool operator>>(Serializer& strm, Messenger6::ResponseArray_forany& arr);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

KeyTest_Export
void gen_skip_over(Serializer& ser, Messenger6::ResponseArray_forany*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: ResponseArray */


/* Begin STRUCT: HeaderType */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

KeyTest_Export
void gen_find_size(const Messenger6::HeaderType& stru, size_t& size, size_t& padding);

KeyTest_Export
bool operator<<(Serializer& strm, const Messenger6::HeaderType& stru);

KeyTest_Export
bool operator>>(Serializer& strm, Messenger6::HeaderType& stru);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
KeyTest_Export
const MetaStruct& getMetaStruct<Messenger6::HeaderType>();
KeyTest_Export
void gen_skip_over(Serializer& ser, Messenger6::HeaderType*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: HeaderType */


/* Begin STRUCT: PayloadType */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

KeyTest_Export
void gen_find_size(const Messenger6::PayloadType& stru, size_t& size, size_t& padding);

KeyTest_Export
bool operator<<(Serializer& strm, const Messenger6::PayloadType& stru);

KeyTest_Export
bool operator>>(Serializer& strm, Messenger6::PayloadType& stru);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
KeyTest_Export
const MetaStruct& getMetaStruct<Messenger6::PayloadType>();
KeyTest_Export
void gen_skip_over(Serializer& ser, Messenger6::PayloadType*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: PayloadType */


/* Begin STRUCT: Message */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

KeyTest_Export
void gen_find_size(const Messenger6::Message& stru, size_t& size, size_t& padding);

KeyTest_Export
bool operator<<(Serializer& strm, const Messenger6::Message& stru);

KeyTest_Export
bool operator>>(Serializer& strm, Messenger6::Message& stru);

KeyTest_Export
size_t gen_max_marshaled_size(const Messenger6::Message& stru, bool align);

KeyTest_Export
size_t gen_max_marshaled_size(KeyOnly<const Messenger6::Message> stru, bool align);

KeyTest_Export
void gen_find_size(KeyOnly<const Messenger6::Message> stru, size_t& size, size_t& padding);

KeyTest_Export
bool operator<<(Serializer& strm, KeyOnly<const Messenger6::Message> stru);

KeyTest_Export
bool operator>>(Serializer& strm, KeyOnly<Messenger6::Message> stru);

template <>
struct MarshalTraits<Messenger6::Message> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger6 {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct KeyTest_Export Message_OpenDDS_KeyLessThan {
  bool operator()(const Messenger6::Message& v1, const Messenger6::Message& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.payload.header.subject_id < v2.payload.header.subject_id) return true;
    if (v2.payload.header.subject_id < v1.payload.header.subject_id) return false;
    return false;
  }
};
}


namespace Messenger6 {
class MessageTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<Messenger6::Message> {
  typedef Messenger6::Message MessageType;
  typedef Messenger6::MessageSeq MessageSequenceType;
  typedef Messenger6::MessageTypeSupport TypeSupportType;
  typedef Messenger6::MessageTypeSupportImpl TypeSupportTypeImpl;
  typedef Messenger6::MessageDataWriter DataWriterType;
  typedef Messenger6::MessageDataReader DataReaderType;
  typedef Messenger6::Message_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "Messenger6::Message"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger6 {
class KeyTest_Export MessageTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<MessageTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<Message> TraitsType;
  typedef MessageTypeSupport TypeSupportType;
  typedef MessageTypeSupport::_var_type _var_type;
  typedef MessageTypeSupport::_ptr_type _ptr_type;

  MessageTypeSupportImpl() {}
  virtual ~MessageTypeSupportImpl() {}

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
  static MessageTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
KeyTest_Export
const MetaStruct& getMetaStruct<Messenger6::Message>();
KeyTest_Export
void gen_skip_over(Serializer& ser, Messenger6::Message*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Message */

/* End MODULE: Messenger6 */
#endif /* OPENDDS_IDL_GENERATED_KEYTESTTYPESUPPORTIMPL_H_AKZ95C */
