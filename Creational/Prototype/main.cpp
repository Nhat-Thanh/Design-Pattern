#include "Edge.h"
#include "Firefox.h"

void run(const IPrototype* browser) {
    IPrototype* new_browser = browser->Clone();
    browser->PrintInfo();
    new_browser->PrintInfo();
    delete new_browser;
}

int main() {
    std::string version = "19.6.7";
    IPrototype* browser = new Edge(version);
    run(browser);
    delete browser;

    version.assign("98");
    browser = new Firefox("98");
    run(browser);
    delete browser;

    return 0;
}
