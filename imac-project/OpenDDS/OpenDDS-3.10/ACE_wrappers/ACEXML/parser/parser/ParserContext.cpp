// $Id: ParserContext.cpp 14 2007-02-01 15:49:12Z mitza $

#include "ACEXML/parser/parser/ParserContext.h"

#if !defined (__ACEXML_INLINE__)
# include "ACEXML/parser/parser/ParserContext.inl"
#endif /* __ACEXML_INLINE__ */

ACEXML_Parser_Context::~ACEXML_Parser_Context()
{
  delete this->instream_;
  this->instream_ = 0;
  delete this->locator_;
  this->locator_ = 0;
}

