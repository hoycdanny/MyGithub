/* -*- C++ -*- */
/* Generated by /Users/yc/MyGithub/imac-project/OpenDDS/OpenDDS-3.10/bin/opendds_idl version 3.10 (ACE version 6.2a_p11) running on input file Foo1Def.idl */
#ifndef OPENDDS_IDL_GENERATED_FOO1DEFTYPESUPPORTIMPL_H_SNB88Y
#define OPENDDS_IDL_GENERATED_FOO1DEFTYPESUPPORTIMPL_H_SNB88Y
#include "Foo1DefC.h"
#include "dds/DCPS/Definitions.h"
#include "Foo1DefTypeSupportC.h"
#include "dds/DCPS/Serializer.h"
#include "dds/DCPS/TypeSupportImpl.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: T1 */



/* Begin STRUCT: Foo1 */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

ManyFooLib_Export
void gen_find_size(const T1::Foo1& stru, size_t& size, size_t& padding);

ManyFooLib_Export
bool operator<<(Serializer& strm, const T1::Foo1& stru);

ManyFooLib_Export
bool operator>>(Serializer& strm, T1::Foo1& stru);

ManyFooLib_Export
size_t gen_max_marshaled_size(const T1::Foo1& stru, bool align);

ManyFooLib_Export
size_t gen_max_marshaled_size(KeyOnly<const T1::Foo1> stru, bool align);

ManyFooLib_Export
void gen_find_size(KeyOnly<const T1::Foo1> stru, size_t& size, size_t& padding);

ManyFooLib_Export
bool operator<<(Serializer& strm, KeyOnly<const T1::Foo1> stru);

ManyFooLib_Export
bool operator>>(Serializer& strm, KeyOnly<T1::Foo1> stru);

template <>
struct MarshalTraits<T1::Foo1> {
  static bool gen_is_bounded_size() { return true; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace T1 {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct ManyFooLib_Export Foo1_OpenDDS_KeyLessThan {
  bool operator()(const T1::Foo1& v1, const T1::Foo1& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.key < v2.key) return true;
    if (v2.key < v1.key) return false;
    return false;
  }
};
}


namespace T1 {
class Foo1TypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<T1::Foo1> {
  typedef T1::Foo1 MessageType;
  typedef T1::Foo1Seq MessageSequenceType;
  typedef T1::Foo1TypeSupport TypeSupportType;
  typedef T1::Foo1TypeSupportImpl TypeSupportTypeImpl;
  typedef T1::Foo1DataWriter DataWriterType;
  typedef T1::Foo1DataReader DataReaderType;
  typedef T1::Foo1_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "T1::Foo1"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace T1 {
class ManyFooLib_Export Foo1TypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<Foo1TypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<Foo1> TraitsType;
  typedef Foo1TypeSupport TypeSupportType;
  typedef Foo1TypeSupport::_var_type _var_type;
  typedef Foo1TypeSupport::_ptr_type _ptr_type;

  Foo1TypeSupportImpl() {}
  virtual ~Foo1TypeSupportImpl() {}

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
  static Foo1TypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

class MetaStruct;

template<typename T>
const MetaStruct& getMetaStruct();

template<>
ManyFooLib_Export
const MetaStruct& getMetaStruct<T1::Foo1>();
ManyFooLib_Export
void gen_skip_over(Serializer& ser, T1::Foo1*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Foo1 */

/* End MODULE: T1 */
#endif /* OPENDDS_IDL_GENERATED_FOO1DEFTYPESUPPORTIMPL_H_SNB88Y */