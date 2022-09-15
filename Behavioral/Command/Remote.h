#ifndef REMOTE_H
#define REMOTE_H

#include "TurnOffCommand.h"
#include "TurnOnCommand.h"

class Remote {
  private:
    ICommand* m_TurnOnCommand;
    ICommand* m_TurnOffCommand;

  public:
    Remote(ICommand* turnOnCommand, ICommand* turnOffCommand);
    void TurnOnButtonClick();
    void TurnOffButtonClick();
};

Remote::Remote(ICommand* turnOnCommand, ICommand* turnOffCommand)
    : m_TurnOnCommand(turnOnCommand),
      m_TurnOffCommand(turnOffCommand) {}

void Remote::TurnOnButtonClick() {
    m_TurnOnCommand->Execute();
}

void Remote::TurnOffButtonClick() {
    m_TurnOffCommand->Execute();
}

#endif