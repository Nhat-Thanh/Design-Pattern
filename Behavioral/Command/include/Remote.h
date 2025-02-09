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

#endif
