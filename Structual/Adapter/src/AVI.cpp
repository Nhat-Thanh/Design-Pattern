#include "AVI.h"

AVI::AVI(const std::string& content) : AudioBase(content) {}

std::string AVI::Convert() {
    std::string Content(this->GetContent());
    Content.append(".avi");
    return Content;
}

