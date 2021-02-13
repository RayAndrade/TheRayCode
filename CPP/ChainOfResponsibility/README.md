# TheRayCode
TheRayCode C++ 

Let's create a class header file called **Handler**.h. 
In this file we place the following code:

```cpp
#include <iostream>

class Handler {
public:
    virtual Handler *SetNext(Handler *handler) = 0;
    virtual std::string Handle(std::string request) = 0;
};
```
We will use **Handler** as an interface for our **AbstractHandler**.

So, the next class we to create is called **AbstractHandler**.h

We will extend it with **Handler**. We will also add two methods. One we call **SetNext** and the other will be called **Handle** 
Let's look at the following code:

```cpp
#include "Handler.h"

class AbstractHandler : public Handler {

private:
    Handler *next_handler_;

public:
    AbstractHandler() : next_handler_(nullptr) {
    }
    Handler *SetNext(Handler *handler) override {
        this->next_handler_ = handler;
        return handler;
    }
    std::string Handle(std::string request) override {
        if (this->next_handler_) {
            return this->next_handler_->Handle(request);
        }

        return {};
    }
};

```
The first animal we will add to our program will be a **DogHandler**.h. 
To that file we need to include will be the **AbstractHandler**.h and by doing that we
extend the class the class of the same name.

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
