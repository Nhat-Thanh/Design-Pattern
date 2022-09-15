#ifndef TURN_ON_COMMAND_H
#define TURN_ON_COMMAND_H

#include "Fan.h"
#include "ICommand.h"
#include <iostream>

class TurnOnCommand : public ICommand {
  private:
    Fan& m_Fan;

  public:
    TurnOnCommand(Fan& fan);
    void Execute() override;
};

TurnOnCommand::TurnOnCommand(Fan& fan) : m_Fan(fan) {}

void TurnOnCommand::Execute() {
    m_Fan.TurnOn();
}

#endif