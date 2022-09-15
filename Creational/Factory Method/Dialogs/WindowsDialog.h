#ifndef WINDOWS_DIALOG_H
#define WINDOWS_DIALOG_H

#include "IDialog.h"
#include "WindowsButton.h"

class WindowsDialog : public IDialog {
  public:
    IButton* CreateButton() const override;
};

IButton* WindowsDialog::CreateButton() const {
    return new WindowsButton;
}

#endif