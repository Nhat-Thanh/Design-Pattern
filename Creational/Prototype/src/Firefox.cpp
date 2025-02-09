#include "Firefox.h"
#include <iostream>

Firefox::Firefox(const std::string& version) {
    m_Version = version;
}

IPrototype* Firefox::Clone() const {
    return new Firefox(*this);
}

void Firefox::PrintInfo() const {
    std::cout << "I'm Moliza Firefox - version: " << m_Version << '\n';
}

