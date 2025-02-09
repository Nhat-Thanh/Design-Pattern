#include "Remote.h"

Remote::Remote(ICommand* turnOnCommand, ICommand* turnOffCommand)
    : m_TurnOnCommand(turnOnCommand),
      m_TurnOffCommand(turnOffCommand) {}

void Remote::TurnOnButtonClick() {
    m_TurnOnCommand->Execute();
}

void Remote::TurnOffButtonClick() {
    m_TurnOffCommand->Execute();
}

