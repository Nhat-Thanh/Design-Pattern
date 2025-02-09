#include "WindowsDialog.h"
#include "WindowsButton.h"

IButton* WindowsDialog::CreateButton() const {
    return new WindowsButton;
}

