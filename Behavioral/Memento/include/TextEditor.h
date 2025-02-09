#ifndef TEXT_EDITOR_H
#define TEXT_EDITOR_H

#include "MementoCopy.h"

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

#endif
