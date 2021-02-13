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

So, the next class we to create is called **AbstractHandler**.h.

We will extend **AbstractHandler** with **Handler**. We will also add two methods. One we call **SetNext** and the other will be called **Handle** 
Let's look at the following code. First we add the private variable **next_handler_** which is of type  **Handler**. We can autogenerate **SetNext**. 
If you are using Clone, place the cursor next to **Handler** right-click and select Generate (or you can use alt+insert) impelment functions a select **SetNext**
To the auto generated code we add and have the following:

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
Next we create the players of our program. 
The first animal we will add to our program will be called **DogHandler**.h. 
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
as you can see the **DogHandler** handels the object if it is a **Bone** and passes all other items down the chain.

Let's add a **MonkeyHandler**.h to our program
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
It has the same structure as **DogHandler** but it seen to accept the food item the monkey likes a Banana and will eat that.
Other food items will be passed down the **chain**.

The last animal to add to our menagerie of anamials will be a **squirrel** and as you know squirrels <3 nuts. 
This is our code: 
 
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

Now let's navagate to **main.cpp** and add the code.
The list of include files we have are:


```cpp
#include "Handler.h"
#include "MonkeyHandler.h"
#include "SquirrelHandler.h"
#include "DogHandler.h"
```
for our demo we also need to include
```cpp
#include <vector>
```
let's add some client code:

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
and lastly we goto **main** and play around with a demonstration:
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
```
lastly we do some clean up
```cpp
delete monkey;
delete squirrel;
delete dog;
```
now let's run

[Github](https://www.TheRayCode.com)
