#include "HalfDiscountStrategy.h"
#include "NoDiscountStrategy.h"
#include "QuarterDiscountStrategy.h"
#include "Ticket.h"
#include <iostream>

int main() {
    NoDiscountStrategy no_discount;
    QuarterDiscountStrategy quarter_discount;
    HalfDiscountStrategy half_discount;
    Ticket ticket;
    ticket.SetPrice(120.0f);
    std::cout << "Ticket price: " << ticket.GetPrice() << '\n';

    ticket.SetDiscount(&quarter_discount);
    std::cout << "Ticket price: " << ticket.GetPrice() << '\n';

    ticket.SetDiscount(&half_discount);
    std::cout << "Ticket price: " << ticket.GetPrice() << '\n';

    ticket.SetDiscount(&no_discount);
    std::cout << "Ticket price: " << ticket.GetPrice() << '\n';

    return 0;
}