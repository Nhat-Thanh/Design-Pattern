#ifndef NEWFILE_BUTTON_H
#define NEWFILE_BUTTON_H

#include "BaseButton.h"

class NewFileButton : public BaseButton {
  public:
    NewFileButton();
    NewFileButton(IMediator* mediator);
    void onClick() override;
    void Execute() override;
};

NewFileButton::NewFileButton() : BaseButton() {}
NewFileButton::NewFileButton(IMediator* mediator) : BaseButton(mediator) {}

void NewFileButton::onClick() {
    m_Mediator->Notify(this, "create new file");
}

void NewFileButton::Execute() {
    std::cout << "Create new empty text file\n";
}

#endif