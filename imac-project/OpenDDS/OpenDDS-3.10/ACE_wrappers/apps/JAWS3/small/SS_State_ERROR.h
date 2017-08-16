/* -*- c++ -*- */
// $Id: SS_State_ERROR.h 1861 2011-08-31 16:18:08Z mesnierp $

#ifndef TERA_SS_STATE_ERROR_H
#define TERA_SS_STATE_ERROR_H

#include "ace/Singleton.h"

#include "jaws3/Protocol_Handler.h"

class TeraSS_State_ERROR : public JAWS_Protocol_State
{
public:

  int service (JAWS_Event_Completer *, void *data);

  JAWS_Protocol_State * transition ( const JAWS_Event_Result &result
                                   , void *data
                                   , void *act
                                   );

  static JAWS_Protocol_State * instance (void)
  {
    return ACE_Singleton<TeraSS_State_ERROR, ACE_SYNCH_MUTEX>::instance ();
  }

};

#endif /* TERA_SS_STATE_ERROR_H */
