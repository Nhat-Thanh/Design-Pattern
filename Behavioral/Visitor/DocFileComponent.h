#ifndef DOC_FILE_COMPONENT_H
#define DOC_FILE_COMPONENT_H

#include "ITextFileComponent.h"
#include "DocFile.h"

class DocFileComponent : public ITextFileComponent {
  private:
    const DocFile* m_DocFile;

  public:
    DocFileComponent(DocFile* file);
    std::string GetText() const;
    std::string Convert(ITextFileConvertVisitor* visitor) override;
};

DocFileComponent::DocFileComponent(DocFile* file) : m_DocFile(file) {}

std::string DocFileComponent::Convert(ITextFileConvertVisitor* visitor) {
    return visitor->ConvertDoc(this);
}

std::string DocFileComponent::GetText() const {
    return m_DocFile->GetText();
}

#endif
