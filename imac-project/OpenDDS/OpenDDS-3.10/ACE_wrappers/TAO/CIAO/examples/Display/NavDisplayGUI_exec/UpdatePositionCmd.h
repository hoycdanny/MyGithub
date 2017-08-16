// $Id: UpdatePositionCmd.h 935 2008-12-10 21:47:27Z mitza $

#ifndef __UPDATEPOSITIONCM_H
#define __UPDATEPOSITIONCM_H

#include "Command.h"

class RootPanel;
class NavUnit;

class UpdatePositionCmd : public CommandBase
{
public:
  static UpdatePositionCmd *create(
    RootPanel *form, NavUnit *unit);

public:
  virtual int execute(void *context = 0);

protected:
  UpdatePositionCmd();

  RootPanel *form_;
  NavUnit *unit_;
};


#endif // __UPDATEPOSITIONCM_H
