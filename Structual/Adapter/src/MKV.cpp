#include "MKV.h"

MKV::MKV(const std::string& content) : AudioBase(content) {}

std::string MKV::Convert() {
    std::string Content(this->GetContent());
    Content.append(".mkv");
    return Content;
}

