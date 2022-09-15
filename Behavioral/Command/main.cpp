#include "Fan.h"
#include "Remote.h"

int main() {
    Fan MyFan;
    TurnOnCommand turnOnCommand(MyFan);
    TurnOffCommand turnOffCommand(MyFan);

    Remote MyRemote(&turnOnCommand, &turnOffCommand);
    MyRemote.TurnOnButtonClick();
    MyRemote.TurnOffButtonClick();
    return 0;
}