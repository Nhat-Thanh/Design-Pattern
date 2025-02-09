#include "Bottle.h"

Bottle::Bottle(const std::string& name, const float& volume) : m_Name(name), m_Volume(volume) {}

std::string Bottle::GetKey() const {
    return m_Name + std::to_string(m_Volume);
}

std::string Bottle::GetName() const {
    std::string name("[");
    name.append(m_Name);
    name.append(" ");
    name.append(std::to_string(m_Volume));
    name.append("]");
    return name;
}

