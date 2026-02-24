#include "Invoker.h"
#include "LightOnCommand.h"
#include "MusicOnCommand.h"
#include "CoffeeMakerOnCommand.h"

int main() {
    Light light;
    MusicPlayer musicPlayer;
    CoffeeMaker coffeeMaker;

    LightOnCommand lightOn(light);
    MusicOnCommand musicOn(musicPlayer);
    CoffeeMakerOnCommand coffeeOn(coffeeMaker);

    Invoker invoker;

    invoker.setCommand(&lightOn);
    invoker.buttonWasPressed();

    invoker.setCommand(&musicOn);
    invoker.buttonWasPressed();

    invoker.setCommand(&coffeeOn);
    invoker.buttonWasPressed();
    return 0;
}
