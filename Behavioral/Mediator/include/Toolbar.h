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

#endif
