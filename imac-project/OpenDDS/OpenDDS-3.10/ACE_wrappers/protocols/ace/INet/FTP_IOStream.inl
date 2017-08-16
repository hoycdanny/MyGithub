// -*- C++ -*-
//
// $Id: FTP_IOStream.inl 2205 2013-06-20 17:12:10Z mesnierp $

ACE_BEGIN_VERSIONED_NAMESPACE_DECL

namespace ACE
{
  namespace FTP
  {

    ACE_INLINE
    StreamBuffer* IOS::rdbuf ()
      {
        return &this->streambuf_;
      }

    ACE_INLINE
    void OStream::set_interceptor (StreamBuffer::interceptor_type& interceptor)
      {
        this->rdbuf ()->set_interceptor (interceptor);
      }

    ACE_INLINE
    void IStream::set_interceptor (StreamBuffer::interceptor_type& interceptor)
      {
        this->rdbuf ()->set_interceptor (interceptor);
      }

  }
}

ACE_END_VERSIONED_NAMESPACE_DECL
