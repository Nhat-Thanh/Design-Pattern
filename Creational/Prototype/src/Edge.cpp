#include "Edge.h"
#include <iostream>

Edge::Edge(const std::string& version) {
    m_Version = version;
}

IPrototype* Edge::Clone() const {
    return new Edge(*this);
}

void Edge::PrintInfo() const {
    std::cout << "I'm Microsoft Edge - version: " << m_Version << '\n';
}

