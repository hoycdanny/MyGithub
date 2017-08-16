// $Id: Smart_Proxy_Impl.h 935 2008-12-10 21:47:27Z mitza $

#include "testC.h"

class Smart_Test_Proxy : public virtual TAO_Test_Smart_Proxy_Base
{
public:
  Smart_Test_Proxy (Test_ptr proxy);

  virtual CORBA::Short method (CORBA::Short boo);
  // "Smartify" the method call!

  // Don't need to add any extra functionality into <shutdown>, hence
  // we don't define it.
};
