/* Generated by /Users/yc/MyGithub/imac-project/OpenDDS/OpenDDS-3.10/bin/opendds_idl version 3.10 (ACE version 6.2a_p11) running on input file CorbaSeq/OctetSeq.idl */
#include "DCPS/DdsDcps_pch.h"
#include "OctetSeqTypeSupportImpl.h"

#include "dds/CorbaSeq/OctetSeqTypeSupportImpl.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: OctetSeq */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const CORBA::OctetSeq& seq, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(seq);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  find_size_ulong(size, padding);
  if (seq.length() == 0) {
    return;
  }
  size += seq.length() * max_marshaled_size_octet();
}

bool operator<<(Serializer& strm, const CORBA::OctetSeq& seq)
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
  return strm.write_octet_array(seq.get_buffer(), length);
}

bool operator>>(Serializer& strm, CORBA::OctetSeq& seq)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(seq);
  CORBA::ULong length;
  if (!(strm >> length)) {
    return false;
  }
  seq.length(length);
  if (length == 0) {
    return true;
  }
  return strm.read_octet_array(seq.get_buffer(), length);
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_skip_over(Serializer& ser, CORBA::OctetSeq*)
{
  ACE_UNUSED_ARG(ser);
  ACE_CDR::ULong length;
  ser >> length;
  ser.skip(length, 1);
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: OctetSeq */

/* End MODULE: CORBA */
