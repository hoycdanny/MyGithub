// -*- C++ -*-
// $Id: Server_ORBInitializer.cpp 1861 2011-08-31 16:18:08Z mesnierp $

#include "ace/Log_Msg.h"

#include "Server_Request_Interceptor.h"
#include "Server_ORBInitializer.h"

namespace Test
{

  Server_ORBInitializer::Server_ORBInitializer
    (PortableInterceptor::ServerRequestInterceptor_ptr interceptor)
      : interceptor_
          (PortableInterceptor::ServerRequestInterceptor::_duplicate (interceptor))
  {
    /* no-op */
  }

  Server_ORBInitializer::~Server_ORBInitializer (void)
  {
    /* no-op */
  }

  void
  Server_ORBInitializer::pre_init(PortableInterceptor::ORBInitInfo*)
  {
    /* no-op */
  }

  // A specialization to handle client-side interceptors
  void Server_ORBInitializer::post_init (PortableInterceptor::ORBInitInfo* oii)
  {
    oii->add_server_request_interceptor (this->interceptor_.in ());
  }

}
