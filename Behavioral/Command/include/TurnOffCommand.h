#ifndef TURN_OFF_COMMAND_H
#define TURN_OFF_COMMAND_H

#include "Fan.h"
#include "ICommand.h"
#include <iostream>

class TurnOffCommand : public ICommand {
  private:
    Fan& m_Fan;

  public:
    TurnOffCommand(Fan& fan);
    void Execute() override;
};

#endif
