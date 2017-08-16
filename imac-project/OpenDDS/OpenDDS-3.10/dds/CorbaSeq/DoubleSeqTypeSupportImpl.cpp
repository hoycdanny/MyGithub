/* Generated by /Users/yc/MyGithub/imac-project/OpenDDS/OpenDDS-3.10/bin/opendds_idl version 3.10 (ACE version 6.2a_p11) running on input file CorbaSeq/DoubleSeq.idl */
#include "DCPS/DdsDcps_pch.h"
#include "DoubleSeqTypeSupportImpl.h"

#include "dds/CorbaSeq/DoubleSeqTypeSupportImpl.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: DoubleSeq */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const CORBA::DoubleSeq& seq, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(seq);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  find_size_ulong(size, padding);
  if (seq.length() == 0) {
    return;
  }
  if ((size + padding) % 8) {
    padding += 4;
  }
  size += seq.length() * gen_max_marshaled_size(CORBA::Double());
}

bool operator<<(Serializer& strm, const CORBA::DoubleSeq& seq)
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
  return strm.write_double_array(seq.get_buffer(), length);
}

bool operator>>(Serializer& strm, CORBA::DoubleSeq& seq)
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
  return strm.read_double_array(seq.get_buffer(), length);
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_skip_over(Serializer& ser, CORBA::DoubleSeq*)
{
  ACE_UNUSED_ARG(ser);
  ACE_CDR::ULong length;
  ser >> length;
  ser.skip(length, 8);
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: DoubleSeq */

/* End MODULE: CORBA */
