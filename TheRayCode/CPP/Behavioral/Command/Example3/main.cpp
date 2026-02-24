#include "Light.h"
#include "TV.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "TVOnCommand.h"
#include "TVOffCommand.h"
#include "RemoteControl.h"

int main() {
    RemoteControl remote;

    Light light;
    TV tv;

    LightOnCommand lightOn(&light);
    LightOffCommand lightOff(&light);

    TVOnCommand tvOn(&tv);
    TVOffCommand tvOff(&tv);

    // Let's have some fun with the remote control
    remote.setCommand(&lightOn);
    remote.pressButton();

    remote.setCommand(&lightOff);
    remote.pressButton();

    remote.setCommand(&tvOn);
    remote.pressButton();

    remote.setCommand(&tvOff);
    remote.pressButton();
    return 0;
}
