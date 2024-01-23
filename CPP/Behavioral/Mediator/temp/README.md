[up](../README.md)

# TheRayCode
## Mediator pattern c++


The Mediator design pattern is used to centralize communication between objects, reducing their dependencies on each other. In this example, we'll create a simple superhero team where superheroes can communicate through a Mediator to coordinate their actions.

Here's the order in which we'll create the classes:

1. `Mediator.h` and `Mediator.cpp`: The Mediator class will manage communication between superheroes.
2. `Superhero.h` and `Superhero.cpp`: The Superhero class represents individual superheroes with a name and abilities.
3. `SuperheroTeam.h` and `SuperheroTeam.cpp`: The SuperheroTeam class will be a concrete implementation of the Mediator and will manage the superheroes in the team.

Let's start with the code:

### Mediator.h
```cpp
#pragma once
#include <string>

class Superhero;

class Mediator {
public:
    virtual void sendMessage(const Superhero* sender, const std::string& message) = 0;
};
```

### Mediator.cpp
```cpp
#include "Mediator.h"

// Empty implementation for base Mediator class
```

### Superhero.h
```cpp
#pragma once
#include <string>

class Mediator;

class Superhero {
public:
    Superhero(const std::string& name, Mediator* mediator);
    
    void sendMessage(const std::string& message);
    void receiveMessage(const std::string& message);
    
    const std::string& getName() const;

private:
    std::string name;
    Mediator* mediator;
};
```

### Superhero.cpp
```cpp
#include "Superhero.h"
#include "Mediator.h"
#include <iostream>

Superhero::Superhero(const std::string& name, Mediator* mediator)
    : name(name), mediator(mediator) {
}

void Superhero::sendMessage(const std::string& message) {
    std::cout << name << " sends message: " << message << std::endl;
    mediator->sendMessage(this, message);
}

void Superhero::receiveMessage(const std::string& message) {
    std::cout << name << " receives message: " << message << std::endl;
}

const std::string& Superhero::getName() const {
    return name;
}
```



![Mediator](/UMLs/images/Mediator/Mediator-1.gif)

### SuperheroTeam.h
```cpp
#pragma once
#include "Mediator.h"
#include <vector>

class Superhero;

class SuperheroTeam : public Mediator {
public:
    void addSuperhero(Superhero* superhero);
    void sendMessage(const Superhero* sender, const std::string& message) override;

private:
    std::vector<Superhero*> superheroes;
};
```

### SuperheroTeam.cpp
```cpp
#include "SuperheroTeam.h"
#include "Superhero.h"

void SuperheroTeam::addSuperhero(Superhero* superhero) {
    superheroes.push_back(superhero);
}

void SuperheroTeam::sendMessage(const Superhero* sender, const std::string& message) {
    for (Superhero* superhero : superheroes) {
        if (superhero != sender) {
            superhero->receiveMessage(message);
        }
    }
}
```

### main.cpp
```cpp
#include "Superhero.h"
#include "SuperheroTeam.h"

int main() {
    // Create a Mediator (SuperheroTeam)
    SuperheroTeam team;

    // Create superheroes and add them to the team
    Superhero superman("Superman", &team);
    Superhero batman("Batman", &team);
    Superhero wonderWoman("Wonder Woman", &team);

    team.addSuperhero(&superman);
    team.addSuperhero(&batman);
    team.addSuperhero(&wonderWoman);

    // Send messages between superheroes
    superman.sendMessage("I need backup!");
    batman.sendMessage("On my way!");
    wonderWoman.sendMessage("I'm here to help!");

    return 0;
}
```

In this code, we have defined a Mediator (`SuperheroTeam`) that allows superheroes (`Superhero`) to send and receive messages through it. The `main` function demonstrates how superheroes in the team communicate with each other through the Mediator.

When you run this code, it will display the messages sent and received by the superheroes, demonstrating the Mediator design pattern in action.


The Ray Code is AWESOME!!!
 
[Wikipedia](https://en.wikipedia.org/wiki/Mediator_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/@TheRayCode/featured)

[The Ray Code](https://www.TheRayCode.org)

[Ray Andrade](https://www.RayAndrade.com)
