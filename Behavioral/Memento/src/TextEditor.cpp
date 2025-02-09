#include "TextEditor.h"
#include <iostream>

void TextEditor::Copy(const std::string& selected_text) {
    m_State = selected_text;
}

IMemento* TextEditor::SaveState() const {
    return new MementoCopy(m_State);
}

void TextEditor::Restore(IMemento* memento) {
    m_State = memento->GetState();
}

void TextEditor::ShowState() const {
    std::cout << "Text editor: " << m_State << '\n';
}

