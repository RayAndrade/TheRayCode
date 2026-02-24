[up](../README.md)

Certainly! The Command design pattern is a behavioral design pattern that turns a request into a stand-alone object, which contains all information about the request. This transformation allows you to parameterize methods with different requests, delay or queue a request's execution, and support undoable operations.

Let's create a simple example that humorously simulates a Remote Control (Invoker) operating various Devices (Receivers) through Commands. We'll have a Light object that can be turned on/off and a TV object with more complex behavior (on, off, and change channel).

### Step 1: Command Interface

**Command.h**

```cpp
#ifndef COMMAND_H
#define COMMAND_H

// The Command interface declares a method for executing a command
class Command {
public:
    virtual ~Command() = default;
    virtual void execute() = 0;
};

#endif // COMMAND_H
```

### Step 2: Receiver Classes

**Light.h**

```cpp
#ifndef LIGHT_H
#define LIGHT_H

#include <iostream>

// Receiver class
class Light {
public:
    void on() {
        std::cout << "Light is on. Let there be light!" << std::endl;
    }

    void off() {
        std::cout << "Light is off. Hello darkness, my old friend." << std::endl;
    }
};

#endif // LIGHT_H
```

**TV.h**

```cpp
#ifndef TV_H
#define TV_H

#include <iostream>

// Another Receiver class
class TV {
public:
    void on() {
        std::cout << "TV is on. Welcome to the endless entertainment!" << std::endl;
    }

    void off() {
        std::cout << "TV is off. Back to reality..." << std::endl;
    }

    void changeChannel() {
        std::cout << "Changing the TV channel. What's on the other channel?" << std::endl;
    }
};

#endif // TV_H
```

### Step 3: Concrete Command Classes

**LightOnCommand.h**

```cpp
#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H

#include "Command.h"
#include "Light.h"

// Concrete Command for turning on the light
class LightOnCommand : public Command {
private:
    Light* light;

public:
    explicit LightOnCommand(Light* l) : light(l) {}

    void execute() override {
        light->on();
    }
};

#endif // LIGHTONCOMMAND_H
```

**LightOffCommand.h**

```cpp
#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H

#include "Command.h"
#include "Light.h"

// Concrete Command for turning off the light
class LightOffCommand : public Command {
private:
    Light* light;

public:
    explicit LightOffCommand(Light* l) : light(l) {}

    void execute() override {
        light->off();
    }
};

#endif // LIGHTOFFCOMMAND_H
```

**TVOnCommand.h**

```cpp
#ifndef TVONCOMMAND_H
#define TVONCOMMAND_H

#include "Command.h"
#include "TV.h"

// Concrete Command for turning on the TV
class TVOnCommand : public Command {
private:
    TV* tv;

public:
    explicit TVOnCommand(TV* t) : tv(t) {}

    void execute() override {
        tv->on();
    }
};

#endif // TVONCOMMAND_H
```

**TVOffCommand.h**

```cpp
#ifndef TVOFFCOMMAND_H
#define TVOFFCOMMAND_H

#include "Command.h"
#include "TV.h"

// Concrete Command for turning off the TV
class TVOffCommand : public Command {
private:
    TV* tv;

public:
    explicit TVOffCommand(TV* t) : tv(t) {}

    void execute() override {
        tv->off();
    }
};

#endif // TVOFFCOMMAND_H
```

### Step 4: Invoker Class

**RemoteControl.h**

```cpp
#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H

#include "Command.h"

// The Invoker class
class RemoteControl {
private:
    Command* slot;

public:
    void setCommand(Command* command) {
        slot = command;
    }

    void pressButton() {
        std::cout << "Remote control button was pressed: ";
        slot->execute();
    }
};

#endif // REMOTECONTROL_H
```

### Step 5: main.cpp (Demonstration)

```cpp
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
```

### Order of Creation

1. **Command.h**: Define the Command interface.
2. **Receiver Classes** (`Light.h`, `TV.h`): These are the classes that will perform the actual actions.
3. **Concrete Command Classes** (`LightOnCommand.h`, `LightOffCommand.h`, `TVOnCommand.h`, `TVOffCommand.h`): Implementations of the Command interface for each action.
4. **Invoker Class** (`RemoteControl.h`): The class that triggers the commands.
5. **main.cpp**: To demonstrate the usage of the pattern.

### What to Expect When Running the Code

When you run the code, you'll see output from the console indicating the actions taken, such as turning the light and TV on and off, accompanied by humorous messages. This demonstrates how commands encapsulate actions and how an invoker can execute these actions without knowing the specifics of the action being performed.
