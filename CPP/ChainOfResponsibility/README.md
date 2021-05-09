# TheRayCode
## Chain-of-responsibility pattern c++

The Handler interface declares a method for building the chain of handlers.
It also declares a method for executing a request.

```c++
#include <iostream>

class Handler {
public:
    virtual Handler *SetNext(Handler *handler) = 0;
    virtual std::string Handle(std::string request) = 0;
};
```
The default chaining behavior can be implemented inside a base handler class.
Returning a handler from here will let us link handlers in a convenient way like this:
$mouse->setNext($cat)->setNext($dog);

```c++
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

All Concrete Handlers either handle a request or pass it to the next handler in the chain.
The mouse take the chees.
```c++
#include "AbstractHandler.h"

class MouseHandler : public AbstractHandler  {

public:
    std::string Handle(std::string request)  {
        if (request == "Cheese") {
            return "Mouse: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
};
```
The cat is addicted to Catnip.

```c++
#include "AbstractHandler.h"

class CatHandler: public AbstractHandler {
public:
    std::string Handle(std::string request)  {
        if (request == "Catnip") {
            return "Cat: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
};
```
The dog wants the bone.

```c++
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

Let's put this all together in the main.cpp.
We first start with our includes.

```c++
#include <iostream>
#include <vector>

#include "Handler.h"
#include "MouseHandler.h"
#include "CatHandler.h"
#include "DogHandler.h"
```

Let's also create some ClientCode to hand passing out food or feeding the animales.

```c+++
void ClientCode(Handler &handler) {
    std::vector<std::string> food = {"Catnip", "Cheese","Bone", "Cup of coffee"};
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

In the main method we declear some new animals and pass put food.

The client should be able to send a request to any handler, not just the first one in the chain.


```c++
int main() {
    MouseHandler *mouse = new MouseHandler;
    CatHandler *cat = new CatHandler;
    DogHandler *dog = new DogHandler;
    mouse->SetNext(cat)->SetNext(dog);

    std::cout << "Chain: Cat > Mouse > Dog\n\n";
    ClientCode(*mouse);
    std::cout << "\n";
    std::cout << "Subchain: Cat > Dog\n\n";
    ClientCode(*cat);

    delete mouse;
    delete cat;
    delete dog;
    return 0;
}
```

Let's compile an run, we should get:

```run
Chain: Cat > Mouse > Dog

Client: Who wants a Catnip?
  Cat: I'll eat the Catnip.
Client: Who wants a Cheese?
  Mouse: I'll eat the Cheese.
Client: Who wants a Bone?
  Dog: I'll eat the Bone.
Client: Who wants a Cup of coffee?
  Cup of coffee was left untouched.

Subchain: Cat > Dog

Client: Who wants a Catnip?
  Cat: I'll eat the Catnip.
Client: Who wants a Cheese?
  Cheese was left untouched.
Client: Who wants a Bone?
  Dog: I'll eat the Bone.
Client: Who wants a Cup of coffee?
  Cup of coffee was left untouched.
```

The Ray Code is AWESOME!!!

[Wikipedia](https://en.wikipedia.org/wiki/Chain-of-responsibility_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
