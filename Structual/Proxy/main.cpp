#include "Database.h"
#include "ProxyDatabase.h"
#include <iostream>

int main() {
    Database db;
    ProxyDatabase proxy(&db);

    for (int id = 0; id < 10; ++id) {
        proxy.Insert(id, id * 10);
    }

    for (int id = 0; id < 10; ++id) {
        std::cout << id << ' ' << proxy.Request(id) << '\n';
    }
    return 0;
}
