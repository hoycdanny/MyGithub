/**
 * @author Johnny Willemsen (jwillemsen@remedy.nl)
 *
 * $Id: PublisherQos.h 2179 2013-05-28 22:16:51Z mesnierp $
 *
 * Wrapper facade for NDDS.
 */

#ifndef DDS4CCM_PUBLISHERQOS_H
#define DDS4CCM_PUBLISHERQOS_H

#include "PresentationQosPolicy.h"
#include "PartitionQosPolicy.h"
#include "GroupDataQosPolicy.h"
#include "EntityFactoryQosPolicy.h"

#include "dds4ccm/impl/dds4ccm_conf.h"

inline void
operator<<= (::DDS::PublisherQos &ddsqos, const ::DDS_PublisherQos & qos)
{
  ddsqos.presentation <<= qos.presentation;
  ddsqos.partition <<= qos.partition;
  ddsqos.group_data <<= qos.group_data;
  ddsqos.entity_factory <<= qos.entity_factory;
}

inline void
operator<<= (::DDS_PublisherQos &ddsqos, const ::DDS::PublisherQos & qos)
{
  ddsqos.presentation <<= qos.presentation;
  ddsqos.partition <<= qos.partition;
  ddsqos.group_data <<= qos.group_data;
  ddsqos.entity_factory <<= qos.entity_factory;
}

#endif /* DDS4CCM_PUBLISHERQOS_H */
