#ifndef IDIALOG_H
#define IDIALOG_H

#include "IButton.h"

class IDialog {
  public:
    virtual IButton* CreateButton() const = 0;
};

#endif