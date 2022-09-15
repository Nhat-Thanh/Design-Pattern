#ifndef TOOLBAR_H
#define TOOLBAR_H

#include "CopyButton.h"
#include "NewFileButton.h"
#include <map>

class Toolbar : public IMediator {
  private:
    std::map<std::string, BaseButton*> m_TableEvent;

  public:
    Toolbar(BaseButton* CopyBtn, BaseButton* NewFileBtn);
    void Notify(BaseButton* button, const std::string& event) override;
};

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

#endif