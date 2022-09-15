#include "InternetServiceProvider.h"
#include "JapaneseUser.h"
#include "MalaysianUser.h"
#include "VietnameseUser.h"

int main() {
    InternetServiceProvider VNPT;
    JapaneseUser jp_user;
    VietnameseUser vn_user;
    MalaysianUser malay_user;
    jp_user.Register(&VNPT);
    vn_user.Register(&VNPT);
    malay_user.Register(&VNPT);

    float price_in_USD = 10.0f;
    VNPT.set_price(price_in_USD);

    malay_user.Unregister(&VNPT);
    price_in_USD = 20.0f;
    VNPT.set_price(price_in_USD);

    return 0;
}