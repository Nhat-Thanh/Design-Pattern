#ifndef WEB_DIALOG_H
#define WEB_DIALOG_H

#include "HTMLButton.h"
#include "IDialog.h"

class WebDialog : public IDialog {
  public:
    IButton* CreateButton() const override;
};

IButton* WebDialog::CreateButton() const {
    return new HTMLButton;
}

#endif