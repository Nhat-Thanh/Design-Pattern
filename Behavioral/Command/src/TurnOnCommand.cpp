#include "TurnOnCommand.h"
#include <iostream>

TurnOnCommand::TurnOnCommand(Fan& fan) : m_Fan(fan) {}

void TurnOnCommand::Execute() {
    m_Fan.TurnOn();
}

