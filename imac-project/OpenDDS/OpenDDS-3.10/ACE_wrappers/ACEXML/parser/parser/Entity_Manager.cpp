// $Id: Entity_Manager.cpp 14 2007-02-01 15:49:12Z mitza $

#include "ACEXML/parser/parser/Entity_Manager.h"

#if !defined (__ACEXML_INLINE__)
# include "ACEXML/parser/parser/Entity_Manager.inl"
#endif /* __ACEXML_INLINE__ */


ACEXML_Entity_Manager::ACEXML_Entity_Manager (void)
  : entities_ (0)
{

}

ACEXML_Entity_Manager::~ACEXML_Entity_Manager (void)
{
  this->reset();
}

