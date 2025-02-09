#include "Phone.h"

Phone::Phone(const std::string& name) : m_Brand(name) {}

std::string Phone::GetKey() const {
    return m_Brand;
}

std::string Phone::GetName() const {
    std::string name("[");
    name.append(m_Brand);
    name.append("]");
    return name;
}

