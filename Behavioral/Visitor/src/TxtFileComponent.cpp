#include "TxtFileComponent.h"

TxtFileComponent::TxtFileComponent(TxtFile* file) : m_TxtFile(file) {}

std::string TxtFileComponent::Convert(ITextFileConvertVisitor* visitor) {
    return visitor->ConvertTxt(this);
}

std::string TxtFileComponent::GetText() const {
    return m_TxtFile->GetText();
}

