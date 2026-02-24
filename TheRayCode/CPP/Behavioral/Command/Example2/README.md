[up](../README.md)

Certainly! The Command design pattern is a behavioral design pattern that turns a request into a stand-alone object, which contains all information about the request. This transformation allows you to parameterize methods with different requests, delay or queue a request's execution, and support undoable operations.

Let's create a simple C++ example that humorously simulates a smart home system where commands like turning on the light, playing music, and making coffee can be issued. We'll follow the structure and naming conventions from the "Design Patterns" book by the Gang of Four (GoF) but add a twist of humor to our implementation.

### Project Structure

1. **Command.h** - Abstract base class for all commands.
2. **LightOnCommand.h** - Concrete command to turn on the light.
3. **MusicOnCommand.h** - Concrete command to play music.
4. **CoffeeMakerOnCommand.h** - Concrete command to start the coffee maker.
5. **Invoker.h** - Invokes commands.
6. **Receiver.h** - The receiver classes (Light, MusicPlayer, CoffeeMaker).
7. **Client.h** - Where commands are created and associated with their receivers.
8. **main.cpp** - Demonstrates the Command pattern in action.

### Step-by-Step Creation Order and Explanation

#### 1. Receiver.h

```cpp
// Receiver.h
#ifndef RECEIVER_H
#define RECEIVER_H

#include <iostream>

class Light {
public:
    void on() {
        std::cout << "Light is now blazing like a mini-sun!" << std::endl;
    }
};

class MusicPlayer {
public:
    void on() {
        std::cout << "Music Player is now blasting your favorite tunes!" << std::endl;
    }
};

class CoffeeMaker {
public:
    void on() {
        std::cout << "Coffee Maker is brewing some strong wake-up juice!" << std::endl;
    }
};

#endif // RECEIVER_H
```

#### 2. Command.h

```cpp
// Command.h
#ifndef COMMAND_H
#define COMMAND_H

class Command {
public:
    virtual ~Command() {}
    virtual void execute() = 0;
};

#endif // COMMAND_H
```

#### 3. Concrete Commands

**LightOnCommand.h**

```cpp
// LightOnCommand.h
#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H

#include "Command.h"
#include "Receiver.h"

class LightOnCommand : public Command {
    Light& light;
public:
    LightOnCommand(Light& light) : light(light) {}
    void execute() override {
        light.on();
    }
};

#endif // LIGHTONCOMMAND_H
```

**MusicOnCommand.h**

```cpp
// MusicOnCommand.h
#ifndef MUSICONCOMMAND_H
#define MUSICONCOMMAND_H

#include "Command.h"
#include "Receiver.h"

class MusicOnCommand : public Command {
    MusicPlayer& musicPlayer;
public:
    MusicOnCommand(MusicPlayer& musicPlayer) : musicPlayer(musicPlayer) {}
    void execute() override {
        musicPlayer.on();
    }
};

#endif // MUSICONCOMMAND_H
```

**CoffeeMakerOnCommand.h**

```cpp
// CoffeeMakerOnCommand.h
#ifndef COFFEEMAKERONCOMMAND_H
#define COFFEEMAKERONCOMMAND_H

#include "Command.h"
#include "Receiver.h"

class CoffeeMakerOnCommand : public Command {
    CoffeeMaker& coffeeMaker;
public:
    CoffeeMakerOnCommand(CoffeeMaker& coffeeMaker) : coffeeMaker(coffeeMaker) {}
    void execute() override {
        coffeeMaker.on();
    }
};

#endif // COFFEEMAKERONCOMMAND_H
```

#### 4. Invoker.h

```cpp
// Invoker.h
#ifndef INVOKER_H
#define INVOKER_H

#include "Command.h"

class Invoker {
    Command* slot;
public:
    void setCommand(Command* command) {
        slot = command;
    }

    void buttonWasPressed() {
        slot->execute();
    }
};

#endif // INVOKER_H
```

#### 5. main.cpp

```cpp
// main.cpp
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
```

### What to Expect When Running the Code

When you run the code, you should see humorous messages indicating that each device (light, music player, and coffee maker) has been turned on, in response to the invoker's commands:

```
Light is now blazing like a mini-sun!
Music Player is now blasting your favorite tunes!
Coffee Maker is brewing some strong wake-up juice!
```

This example demonstrates the Command pattern's ability to encapsulate a request as an object, allowing for parameterization of clients with queues, requests, and operations. It humorously simulates a smart home system, showcasing how different commands can be executed to interact with various home devices.
