#include "WebDialog.h"
#include "HTMLButton.h"

IButton* WebDialog::CreateButton() const {
    return new HTMLButton;
}

