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

TxtFileComponent::TxtFileComponent(TxtFile* file) : m_TxtFile(file) {}

std::string TxtFileComponent::Convert(ITextFileConvertVisitor* visitor) {
    return visitor->ConvertTxt(this);
}

std::string TxtFileComponent::GetText() const {
    return m_TxtFile->GetText();
}

#endif
