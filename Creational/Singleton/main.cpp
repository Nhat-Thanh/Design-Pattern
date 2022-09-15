#include "Singleton.h"
#include <iostream>

int main() {
    Singleton* object = Singleton::GetInstance();
    Singleton* new_object = Singleton::GetInstance();
    std::cout << "object: " << object << " - " << "new_object: " << new_object << '\n';

    new_object->SetValue(10);
    std::cout << "object: " << object->GetValue() << '\n';
    std::cout << "new_object: " << new_object->GetValue() << '\n';

    object->SetValue(200);
    std::cout << "object: " << object->GetValue() << '\n';
    std::cout << "new_object: " << new_object->GetValue() << '\n';

    delete object;

    return 0;
}