#include "MementoHistory.h"
#include <iostream>

MementoHistory::MementoHistory(TextEditor& text_editor) : m_TextEditor(text_editor) {}

void MementoHistory::Backup() {
    m_Stack.emplace_back(m_TextEditor.SaveState());
}

void MementoHistory::Undo() {
    IMemento* memento = m_Stack.back();
    m_TextEditor.Restore(memento);
    m_Stack.pop_back();
    delete memento;
}

void MementoHistory::Show() const {
    std::cout << "History: ";
    for (IMemento* memento : m_Stack) {
        std::cout << memento->GetState() << " ";
    }
    std::cout << '\n';
}

