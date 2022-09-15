#ifndef TEXT_EDITOR_H
#define TEXT_EDITOR_H

#include "MementoCopy.h"
#include <iostream>

class TextEditor {
  private:
    std::string m_State;

  public:
    TextEditor() = default;
    void Copy(const std::string& selected_text);
    IMemento* SaveState() const;
    void Restore(IMemento* memento);
    void ShowState() const;
};

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

#endif