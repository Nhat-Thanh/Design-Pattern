#ifndef OBJECT_MANAGER_H
#define OBJECT_MANAGER_H

#include "ISharedObject.h"
#include <iostream>
#include <unordered_map>

class ObjectManager {
  private:
    std::unordered_map<std::string, ISharedObject*> m_Objects;

  public:
    void AddObject(ISharedObject* object);
    ISharedObject* GetObject(ISharedObject* object);
};

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

#endif
