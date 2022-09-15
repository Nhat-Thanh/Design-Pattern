#include "LockScreenState.h"
#include "OffScreenState.h"
#include "OnScreenState.h"
#include "Phone.h"

int main() {
    LockScreenState lock_screen_state;
    OnScreenState on_screen_state;
    OffScreenState off_screen_state;
    Phone phone(&off_screen_state);
    phone.DoubleTap();

    phone.SetScreenState(&lock_screen_state);
    phone.DoubleTap();

    phone.SetScreenState(&on_screen_state);
    phone.DoubleTap();

    return 0;
}