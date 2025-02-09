#include "AbstractPerson.h"
#include <iostream>

void AbstractPerson::Prepare() {
    std::cout << "Preparing\n";
}

void AbstractPerson::GotoVietnam() {
    Prepare();
    Go("Vietnam");
}

