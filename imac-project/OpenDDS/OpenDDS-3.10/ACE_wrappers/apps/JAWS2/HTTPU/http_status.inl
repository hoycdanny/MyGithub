// -*- c++ -*-
// $Id: http_status.inl 14 2007-02-01 15:49:12Z mitza $

#if !defined (ACE_HAS_INLINED_OSCALLS)
# undef ACE_INLINE
# define ACE_INLINE
#endif /* ACE_HAS_INLINED_OSCALLS */

ACE_INLINE
HTTP_SCode_Node::operator int (void) const
{
  return this->code_;
}

ACE_INLINE
HTTP_SCode_Node::operator const char * (void) const
{
  return this->code_str_;
}