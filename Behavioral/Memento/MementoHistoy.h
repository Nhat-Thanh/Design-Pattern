#ifndef MEMENTO_HISTORY_H
#define MEMENTO_HISTORY_H

#include "IMemento.h"
#include "TextEditor.h"
#include <iostream>
#include <vector>

class MementoHistory {
  private:
    std::vector<IMemento*> m_Stack;
    TextEditor& m_TextEditor;

  public:
    MementoHistory(TextEditor& text_editor);
    void Backup();
    void Undo();
    void Show() const;
};

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

#endif
