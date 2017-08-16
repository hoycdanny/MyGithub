//
// $Id: Stock_Factory_i.h 935 2008-12-10 21:47:27Z mitza $
//

#ifndef TAO_TUTORIAL_QUOTER_RT_EVENT_SERVICE_STOCK_FACTORY_I_H
#define TAO_TUTORIAL_QUOTER_RT_EVENT_SERVICE_STOCK_FACTORY_I_H

#include "QuoterS.h"
#include <orbsvcs/RtecEventChannelAdminS.h>

class Quoter_Stock_Factory_i : public POA_Quoter::Stock_Factory {
public:
  Quoter_Stock_Factory_i ();

  void load_stock_objects (PortableServer::POA_ptr poa,
                           PortableServer::POAManager_ptr poa_manager,
                           RtecEventChannelAdmin::SupplierAdmin_ptr supplier_admin);
  void destroy_stock_objects ();

  Quoter::Stock_ptr get_stock (const char *symbol);

private:
  PortableServer::POA_var stock_factory_poa_;
};

#endif /* TAO_TUTORIAL_QUOTER_RT_EVENT_SERVICE_STOCK_FACTORY_I_H */
