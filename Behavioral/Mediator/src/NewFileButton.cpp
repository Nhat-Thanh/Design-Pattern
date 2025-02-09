#include "NewFileButton.h"
#include <iostream>

NewFileButton::NewFileButton() : BaseButton() {}
NewFileButton::NewFileButton(IMediator* mediator) : BaseButton(mediator) {}

void NewFileButton::onClick() {
    m_Mediator->Notify(this, "create new file");
}

void NewFileButton::Execute() {
    std::cout << "Create new empty text file\n";
}

