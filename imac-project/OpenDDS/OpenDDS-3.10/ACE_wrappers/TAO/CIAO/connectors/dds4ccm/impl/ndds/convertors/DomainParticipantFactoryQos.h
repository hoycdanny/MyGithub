/**
 * @author Johnny Willemsen (jwillemsen@remedy.nl)
 *
 * $Id: DomainParticipantFactoryQos.h 2179 2013-05-28 22:16:51Z mesnierp $
 *
 * Wrapper facade for NDDS.
 */

#ifndef DDS4CCM_DOMAINPARTICIPANTFACTORYQOSPOLICY_H
#define DDS4CCM_DOMAINPARTICIPANTFACTORYQOSPOLICY_H

#include "EntityFactoryQosPolicy.h"
#include "dds4ccm/impl/dds4ccm_conf.h"

inline void
operator<<= (::DDS::DomainParticipantFactoryQos &ddsqos, const ::DDS_DomainParticipantFactoryQos & qos)
{
  ddsqos.entity_factory <<= qos.entity_factory;
}

inline void
operator<<= (::DDS_DomainParticipantFactoryQos &ddsqos, const ::DDS::DomainParticipantFactoryQos & qos)
{
  ddsqos.entity_factory <<= qos.entity_factory;
}

#endif /* DDS4CCM_DOMAINPARTICIPANTFACTORYQOSPOLICY_H */