#include "DesktopBuilder.h"
#include "LaptopBuilder.h"
#include <iostream>

int main() {
    IComputerBuilder* builder = new DesktopBuilder;
    builder->BuildMainboard("Gigabyte Aorus master Z690");
    builder->BuildCPU("Intel Core i9 12900k");
    builder->BuildRAM("Gskill Triden Z Royal 32GB (2x16)");
    builder->BuildPSU("ASUS Thor 1000");
    builder->PrintComponents();
    delete builder;

    std::cout << std::endl;

    builder = new LaptopBuilder;
    builder->BuildMainboard("Dell Mainboard");
    builder->BuildCPU("Intel Core i5 8265U");
    builder->BuildRAM("Samsung 16GB (2x8)");
    builder->BuildPSU("Adapter 65W");
    builder->PrintComponents();
    delete builder;
 
    return 0;
}
