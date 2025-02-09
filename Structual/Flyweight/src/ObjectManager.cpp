#include "ObjectManager.h"
#include <iostream>

void ObjectManager::AddObject(ISharedObject* object) {
    m_Objects[object->GetKey()] = object;
}

ISharedObject* ObjectManager::GetObject(ISharedObject* object) {
    std::string key = object->GetKey();
    if (m_Objects.find(key) == m_Objects.end()) {
        std::cout << "Cache new object: " << object->GetName() << '\n';
        m_Objects[key] = object;
    } else {
        std::cout << "Reuse cached object: " << object->GetName() << '\n';
    }

    return m_Objects.at(key);
}

