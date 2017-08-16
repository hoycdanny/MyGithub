/**
 * @author Johnny Willemsen (jwillemsen@remedy.nl)
 *
 * $Id: OwnershipStrengthQosPolicy.h 2179 2013-05-28 22:16:51Z mesnierp $
 *
 * Wrapper facade for NDDS.
 */

#ifndef DDS4CCM_OWNERSHIPSTRENGTHQOSPOLICY_H
#define DDS4CCM_OWNERSHIPSTRENGTHQOSPOLICY_H

#include "dds4ccm/impl/dds4ccm_conf.h"

inline void
operator<<= (::DDS::OwnershipStrengthQosPolicy &ddsqos, const ::DDS_OwnershipStrengthQosPolicy & qos)
{
  ddsqos.value = qos.value;
}

inline void
operator<<= (::DDS_OwnershipStrengthQosPolicy &ddsqos, const ::DDS::OwnershipStrengthQosPolicy & qos)
{
  ddsqos.value = qos.value;
}

#endif /* DDS4CCM_OWNERSHIPSTRENGTHQOSPOLICY_H */
