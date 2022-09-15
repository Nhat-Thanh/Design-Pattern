#include "Box.h"
#include "Product.h"
#include <iostream>

int main() {
    float price = 15.0f;
    Product* bottle = new Product("Pepsi", price);
    price = 450.0f;
    Product* cookie = new Product("Danisa", price);
    price = 7.0f;
    Product* notebook = new Product("Thuan Tien", price);

    Box* small_box = new Box;
    small_box->Add(notebook);
    small_box->Add(notebook);

    Box* medium_box = new Box;
    medium_box->Add(cookie);
    medium_box->Add(notebook);
    medium_box->Add(small_box);

    Box* big_box = new Box;
    big_box->Add(bottle);
    big_box->Add(small_box);
    big_box->Add(medium_box);

    std::cout << "Small box price: " << small_box->GetPrice() << '\n';
    std::cout << "Medium box price: " << medium_box->GetPrice() << '\n';
    std::cout << "Big box price: " << big_box->GetPrice() << '\n';

    delete big_box;
    delete medium_box;
    delete small_box;
    delete notebook;
    delete cookie;
    delete bottle;
    return 0;
}
