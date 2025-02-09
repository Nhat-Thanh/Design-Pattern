#ifndef TURN_ON_COMMAND_H
#define TURN_ON_COMMAND_H

#include "Fan.h"
#include "ICommand.h"

class TurnOnCommand : public ICommand {
  private:
    Fan& m_Fan;

  public:
    TurnOnCommand(Fan& fan);
    void Execute() override;
};

#endif
