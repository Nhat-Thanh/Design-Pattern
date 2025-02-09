#ifndef MEMENTO_HISTORY_H
#define MEMENTO_HISTORY_H

#include "IMemento.h"
#include "TextEditor.h"
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

#endif
