#include "MementoHistoy.h"

void run(TextEditor& text_editor, MementoHistory& history, const std::string& text) {
    history.Backup();
    history.Show();
    text_editor.Copy(text);
    text_editor.ShowState();
    std::cout << '\n';
}

int main() {
    TextEditor text_editor;
    MementoHistory history(text_editor);

    std::string text{"C++11"};
    run(text_editor, history, text);

    text.assign("C++14");
    run(text_editor, history, text);

    text.assign("C++17");
    run(text_editor, history, text);

    text.assign("C++20");
    run(text_editor, history, text);

    history.Show();
    history.Undo();
    text_editor.ShowState();

    return 0;
}