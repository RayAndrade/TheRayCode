# TheRayCode
TheRayCode C++ 
files:
create **Handler**.h
edit
```cpp
#include <iostream>

class Handler {
public:
    virtual Handler *SetNext(Handler *handler) = 0;
    virtual std::string Handle(std::string request) = 0;
};
```
create **AbstractHandler**.h

```cpp
#include <iostream>

class Handler {
public:
    virtual Handler *SetNext(Handler *handler) = 0;
    virtual std::string Handle(std::string request) = 0;
};
```
create **DogHandler**.h

```cpp
#include "AbstractHandler.h"

class DogHandler : public AbstractHandler{
public:
    std::string Handle(std::string request)  {
        if (request == "Bone") {
            return "Dog: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
};
```
create file **MonkeyHandler**.h
```cpp
#include "AbstractHandler.h"

class MonkeyHandler : public AbstractHandler  {

public:
    std::string Handle(std::string request)  {
        if (request == "Banana") {
            return "Monkey: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
};

```
create file **SquirrelHandler**.h
```cpp
#include "AbstractHandler.h"

class SquirrelHandler: public AbstractHandler {
public:
    std::string Handle(std::string request)  {
        if (request == "Nut") {
            return "Squirrel: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
};
```
navagate to **main.cpp** and add the code:
```cpp
#include <vector>

#include "Handler.h"
#include "MonkeyHandler.h"
#include "SquirrelHandler.h"
#include "DogHandler.h"
```
we add some cliesnt code:
```cpp
void ClientCode(Handler &handler) {
    std::vector<std::string> food = {"Nut", "Banana", "Cup of coffee", "Bone"};
    for (const std::string &f : food) {
        std::cout << "Client: Who wants a " << f << "?\n";
        const std::string result = handler.Handle(f);
        if (!result.empty()) {
            std::cout << "  " << result;
        } else {
            std::cout << "  " << f << " was left untouched.\n";
        }
    }
}

```
and lastly we goto **main** and we add:
```cpp
MonkeyHandler *monkey = new MonkeyHandler;
SquirrelHandler *squirrel = new SquirrelHandler;
DogHandler *dog = new DogHandler;
monkey->SetNext(squirrel)->SetNext(dog);

/**
 * The client should be able to send a request to any handler, not just the
 * first one in the chain.
 */
std::cout << "Chain: Monkey > Squirrel > Dog\n\n";
ClientCode(*monkey);
std::cout << "\n";
std::cout << "Subchain: Squirrel > Dog\n\n";
ClientCode(*squirrel);

delete monkey;
delete squirrel;
delete dog;
```


[Github](https://www.TheRayCode.com)
