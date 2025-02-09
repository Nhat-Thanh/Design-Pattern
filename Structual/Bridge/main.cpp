#include "ColorRectangle.h"
#include "ColorSquare.h"
#include "ColorTriangle.h"
#include "Red.h"
#include "Green.h"
#include "Blue.h"
#include <iostream>

void print_info(const ColorRectangle& rectangle,
                const ColorSquare& square,
                const ColorTriangle& triangle) {
    std::cout << triangle.GetInfo() << '\n';
    std::cout << rectangle.GetInfo() << '\n';
    std::cout << square.GetInfo() << '\n';
}

int main() {
    Red red;
    Blue blue;
    Green green;

    ColorRectangle rectangle(&blue);
    ColorSquare square(&red);
    ColorTriangle triangle(&green);
    print_info(rectangle, square, triangle);
    std::cout << '\n';

    triangle.SetColor(&red);
    rectangle.SetColor(&green);
    square.SetColor(&blue);
    print_info(rectangle, square, triangle);

    return 0;
}
