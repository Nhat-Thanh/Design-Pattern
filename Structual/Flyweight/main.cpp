#include "Bottle.h"
#include "ObjectManager.h"
#include "Phone.h"
#include "Tree.h"

int main() {
    float volume = 0.5f;
    Bottle coca("CocaCola", volume);
    volume = 0.55f;
    Bottle pepsi("Pepsi", volume);

    Phone samsumg("Samsung");
    Phone iphone("Apple");

    float height = 0.5f;
    AppleTree small_tree(height);
    height = 30.0f;
    AppleTree big_tree(height);

    ObjectManager manager;
    manager.AddObject(&coca);
    manager.AddObject(&pepsi);
    manager.AddObject(&samsumg);
    manager.AddObject(&iphone);
    manager.AddObject(&small_tree);
    manager.AddObject(&big_tree);

    ISharedObject* object = new Bottle("Mirinda", 0.7);
    manager.GetObject(object);
    delete object;

    height = 30.0f;
    object = new AppleTree(height);
    manager.GetObject(object);
    delete object;

    volume = 0.7f;
    object = new Bottle("Mirinda", volume);
    manager.GetObject(object);
    delete object;

    return 0;
}
