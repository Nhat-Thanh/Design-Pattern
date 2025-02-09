#ifndef WEB_DIALOG_H
#define WEB_DIALOG_H

#include "IDialog.h"

class WebDialog : public IDialog {
  public:
    IButton* CreateButton() const override;
};

#endif

