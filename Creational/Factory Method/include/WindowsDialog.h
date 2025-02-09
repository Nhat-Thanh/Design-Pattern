#ifndef WINDOWS_DIALOG_H
#define WINDOWS_DIALOG_H

#include "IDialog.h"

class WindowsDialog : public IDialog {
  public:
    IButton* CreateButton() const override;
};

#endif
