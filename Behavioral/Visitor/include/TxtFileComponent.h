#ifndef TXT_FILE_COMPONENT_H
#define TXT_FILE_COMPONENT_H

#include "ITextFileComponent.h"
#include "TxtFile.h"

class TxtFileComponent : public ITextFileComponent {
  private:
    const TxtFile* m_TxtFile;

  public:
    TxtFileComponent(TxtFile* file);
    std::string GetText() const;
    std::string Convert(ITextFileConvertVisitor* visitor) override;
};

#endif

