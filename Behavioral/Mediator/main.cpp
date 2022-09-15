#include "Toolbar.h"

int main() {
    CopyButton CopyBtn;
    NewFileButton NewFileBtn;
    Toolbar toolbar(&CopyBtn, &NewFileBtn);
    CopyBtn.onClick();
    NewFileBtn.onClick();
    return 0;
}