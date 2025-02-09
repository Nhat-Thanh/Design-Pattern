#include "DocFileComponent.h"

DocFileComponent::DocFileComponent(DocFile* file) : m_DocFile(file) {}

std::string DocFileComponent::Convert(ITextFileConvertVisitor* visitor) {
    return visitor->ConvertDoc(this);
}

std::string DocFileComponent::GetText() const {
    return m_DocFile->GetText();
}

