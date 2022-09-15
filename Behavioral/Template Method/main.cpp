#include "American.h"
#include "Chinese.h"
#include "Japanese.h"

int main() {
    Amerian american;
    Chinese chinese;
    Japanese japanese;

    std::cout << "American:\n";
    american.GotoVietnam();

    std::cout << "\nChinese:\n";
    chinese.GotoVietnam();

    std::cout << "\nJapanese:\n";
    japanese.GotoVietnam();

    return 0;
}