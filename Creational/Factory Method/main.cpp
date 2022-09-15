#include "WebDialog.h"
#include "WindowsDialog.h"

void run(const IDialog* dialog) {
    IButton* button = dialog->CreateButton();
    button->Render();
    button->onClick();
    delete button;
}

int main() {
    IDialog* dialog = new WebDialog;
    run(dialog);
    delete dialog;

    dialog = new WindowsDialog;
    run(dialog);
    delete dialog;

    return 0;
}