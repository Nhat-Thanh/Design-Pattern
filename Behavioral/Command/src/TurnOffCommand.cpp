#include "TurnOffCommand.h"
#include <iostream>

TurnOffCommand::TurnOffCommand(Fan& fan) : m_Fan(fan) {}

void TurnOffCommand::Execute() {
    m_Fan.TurnOff();
}

