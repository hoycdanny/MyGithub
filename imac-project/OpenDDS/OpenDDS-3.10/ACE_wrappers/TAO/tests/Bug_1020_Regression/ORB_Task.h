#ifndef ORB_Task__h_
#define ORB_Task__h_
/**
 * @file ORB_Task.h
 *
 * $Id: ORB_Task.h 14 2007-02-01 15:49:12Z mitza $
 *
 * @author Carlos O'Ryan <coryan@atdesk.com>
 *
 */
#include "tao/ORB.h"
#include "ace/Task.h"

class ORB_Task : public ACE_Task_Base
{
public:
  ORB_Task(CORBA::ORB_ptr orb);

  virtual int svc (void);

private:
  CORBA::ORB_var orb_;
};

#endif /* ORB_Task__h_ */
