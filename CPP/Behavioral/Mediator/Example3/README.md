[up](../README.md)

The Mediator design pattern is used to reduce coupling between classes by centralizing external communications. It promotes the principle of single responsibility and separation of concerns.

For our superhero theme, let's consider a `JusticeLeagueMediator` that manages communication between different superheroes.

**1. Create the classes in the following order:**

1. `Superhero` (Abstract class for all superheroes)
2. `JusticeLeagueMediator` (Mediator)
3. Concrete superheroes (e.g., `Batman`, `Superman`, `WonderWoman`)

**Superhero.h**

```cpp
#ifndef SUPERHERO_H
#define SUPERHERO_H

#include <string>
#include "JusticeLeagueMediator.h"

class Superhero {
protected:
    JusticeLeagueMediator* mediator;
    std::string name;

public:
    Superhero(JusticeLeagueMediator* m, const std::string& n) : mediator(m), name(n) {}
    virtual ~Superhero() {}
    virtual void send(const std::string& message) = 0;
    virtual void receive(const std::string& from, const std::string& message) = 0;
};

#endif // SUPERHERO_H
```

**JusticeLeagueMediator.h**

```cpp
#ifndef JUSTICELEAGUEMEDIATOR_H
#define JUSTICELEAGUEMEDIATOR_H

#include <string>

class Superhero; // forward declaration

class JusticeLeagueMediator {
public:
    virtual ~JusticeLeagueMediator() {}
    virtual void sendMessage(Superhero* sender, const std::string& message) = 0;
};

#endif // JUSTICELEAGUEMEDIATOR_H
```

**Batman.h**

```cpp
#ifndef BATMAN_H
#define BATMAN_H

#include "Superhero.h"

class Batman : public Superhero {
public:
    Batman(JusticeLeagueMediator* m) : Superhero(m, "Batman") {}

    void send(const std::string& message) override {
        mediator->sendMessage(this, message);
    }

    void receive(const std::string& from, const std::string& message) override {
        std::cout << name << " received a message from " << from << ": " << message << std::endl;
    }
};

#endif // BATMAN_H
```

Likewise, create `Superman.h` and `WonderWoman.h`.


Certainly, let's define the `Superman.h` and `WonderWoman.h` files. These files will be similar to `Batman.h` since they'll also derive from the `Superhero` class.

**Superman.h**

```cpp
#ifndef SUPERMAN_H
#define SUPERMAN_H

#include "Superhero.h"

class Superman : public Superhero {
public:
    Superman(JusticeLeagueMediator* m) : Superhero(m, "Superman") {}

    void send(const std::string& message) override {
        mediator->sendMessage(this, message);
    }

    void receive(const std::string& from, const std::string& message) override {
        std::cout << name << " received a message from " << from << ": " << message << std::endl;
    }
};

#endif // SUPERMAN_H
```

**WonderWoman.h**

```cpp
#ifndef WONDERWOMAN_H
#define WONDERWOMAN_H

#include "Superhero.h"

class WonderWoman : public Superhero {
public:
    WonderWoman(JusticeLeagueMediator* m) : Superhero(m, "WonderWoman") {}

    void send(const std::string& message) override {
        mediator->sendMessage(this, message);
    }

    void receive(const std::string& from, const std::string& message) override {
        std::cout << name << " received a message from " << from << ": " << message << std::endl;
    }
};

#endif // WONDERWOMAN_H
```

**Explanation:**

Both `Superman` and `WonderWoman` classes extend the `Superhero` class. Their constructors set their names and pass the mediator object to the base class.

The `send` method is used to send a message to other superheroes using the mediator. The mediator ensures the message is broadcast to all members except the sender.

The `receive` method displays a message that the superhero has received from another member.


**JusticeLeagueMediatorImpl.h** (This is an implementation of the `JusticeLeagueMediator`)

```cpp
#ifndef JUSTICELEAGUEMEDIATORIMPL_H
#define JUSTICELEAGUEMEDIATORIMPL_H

#include <vector>
#include "JusticeLeagueMediator.h"
#include "Superhero.h"

class JusticeLeagueMediatorImpl : public JusticeLeagueMediator {
    std::vector<Superhero*> members;

public:
    void addMember(Superhero* hero) {
        members.push_back(hero);
    }

    void sendMessage(Superhero* sender, const std::string& message) override {
        for (Superhero* hero : members) {
            if (hero != sender) {
                hero->receive(sender->name, message);
            }
        }
    }
};

#endif // JUSTICELEAGUEMEDIATORIMPL_H
```

**main.cpp**

```cpp
#include <iostream>
#include "Batman.h"
#include "Superman.h"
#include "WonderWoman.h"
#include "JusticeLeagueMediatorImpl.h"

int main() {
    JusticeLeagueMediatorImpl mediator;

    Batman bruce(&mediator);
    Superman clark(&mediator);
    WonderWoman diana(&mediator);

    mediator.addMember(&bruce);
    mediator.addMember(&clark);
    mediator.addMember(&diana);

    bruce.send("I've located the Joker.");
    diana.send("I'll be there in a minute.");

    return 0;
}
```

**Expected Output:**

```
Superman received a message from Batman: I've located the Joker.
WonderWoman received a message from Batman: I've located the Joker.
Batman received a message from WonderWoman: I'll be there in a minute.
Superman received a message from WonderWoman: I'll be there in a minute.
```

**CMakeLists.txt**

```
cmake_minimum_required(VERSION 3.10)

project(JusticeLeagueMediator)

set(CMAKE_CXX_STANDARD 14)

add_executable(JusticeLeagueMediator main.cpp Batman.h Superman.h WonderWoman.h JusticeLeagueMediatorImpl.h Superhero.h JusticeLeagueMediator.h)
```

**Explanation:**

- `Superhero` is the base class for all heroes. It has a reference to a mediator, which is used to send messages.
- Concrete superheroes (`Batman`, `Superman`, and `WonderWoman`) implement the sending and receiving of messages.
- The `JusticeLeagueMediatorImpl` manages the communication between different superheroes. When a superhero sends a message, the mediator relays it to all other superheroes.

With the Mediator pattern, we decouple the superheroes from each other, allowing for easy addition of new heroes without changing existing code.





