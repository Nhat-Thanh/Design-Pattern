#ifndef OBJECT_MANAGER_H
#define OBJECT_MANAGER_H

#include "ISharedObject.h"
#include <unordered_map>

class ObjectManager {
  private:
    std::unordered_map<std::string, ISharedObject*> m_Objects;

  public:
    void AddObject(ISharedObject* object);
    ISharedObject* GetObject(ISharedObject* object);
};

#endif

