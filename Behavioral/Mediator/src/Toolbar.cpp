#include "Toolbar.h"
#include <iostream>

Toolbar::Toolbar(BaseButton* CopyBtn, BaseButton* NewFileBtn) {
    CopyBtn->SetMediator(this);
    NewFileBtn->SetMediator(this);
    m_TableEvent["copy"] = CopyBtn;
    m_TableEvent["create new file"] = NewFileBtn;
}

void Toolbar::Notify(BaseButton* button, const std::string& event) {
    if (m_TableEvent.find(event) == m_TableEvent.end()) {
        std::cout << event << " is an invalid event\n";
    }
    m_TableEvent[event]->Execute();
}

