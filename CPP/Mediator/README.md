# TheRayCode
## Mediator pattern c++

The most popular usage of the Mediator pattern in C++ code is facilitating communications between GUI components of an app. The synonym of the Mediator is the Controller part of MVC pattern.

We create a class we call the **Mediator**.
The Mediator interface declares a method used by components to notify the mediator about various events. 
The Mediator may react to these events and  pass the execution to other components.
```c++
#include <string>

class BaseComponent;
class Mediator {
public:
    virtual void Notify(BaseComponent *sender, std::string event) const = 0;
};
```

So let's create our **BaseComponent**
```c+
#include <string>

class BaseComponent;
class Mediator {
public:
    virtual void Notify(BaseComponent *sender, std::string event) const = 0;
};
```

Concrete Components implement various functionality. 
They don't depend on other components. 
They also don't depend on any concrete mediator classes.

Let's create a couple of Components. 
We will name the **FirstComponent** and **SecondComponent**.
Let's start with the **FirstComponent**.

```c++
#include <iostream>
#include "BaseComponent.h"

class FirstComponent : public BaseComponent {
public:
    void DoAction() {
        std::cout << "The First Component does Action.\n";
        this->mediator_->Notify(this, "Action");
    }
    void DoB() {
        std::cout << "The First Component does B.\n";
        this->mediator_->Notify(this, "B");
    }
};
```
Let create the **SecondComponent**.
It's code will be:
```c++
#include <iostream>
#include "BaseComponent.h"

class SecondComponent : public BaseComponent  {
public:
    void DoC() {
        std::cout << "The Second Component does C.\n";
        this->mediator_->Notify(this, "C");
    }
    void DoD() {
        std::cout << "The Second Component does Deed.\n";
        this->mediator_->Notify(this, "D");
    }
};
```
We also need a **ConcreteMediator**.

```c++
#include "FirstComponent.h"
#include "SecondComponent.h"
class ConcreteMediator : public Mediator   {
private:
    FirstComponent *component1_;
    SecondComponent *component2_;
public:
    ConcreteMediator(FirstComponent *c1, SecondComponent *c2) : component1_(c1), component2_(c2) {
        this->component1_->set_mediator(this);
        this->component2_->set_mediator(this);
    }
    void Notify(BaseComponent *sender, std::string event) const override {
        if (event == "A") {
            std::cout << "Mediator reacts on A and triggers following operations:\n";
            this->component2_->DoC();
        }
        if (event == "D") {
            std::cout << "Mediator reacts on the Deed and triggers following operations:\n";
            this->component1_->DoB();
            this->component2_->DoC();
        }
    }
};
```

and lasly we go to the main.cpp and add some client code.

```c++
#include "ConcreteMediator.h"

void ClientCode() {
    FirstComponent *c1 = new FirstComponent;
    SecondComponent *c2 = new SecondComponent;
    ConcreteMediator *mediator = new ConcreteMediator(c1, c2);
    std::cout << "Client triggers operation A.\n";
    c1->DoAction();
    std::cout << "\n";
    std::cout << "Client triggers operation D.\n";
    c2->DoD();

    delete c1;
    delete c2;
    delete mediator;
}
```
Lastly we put the **ClientCode** in the main method...

```c++
int main() {
    ClientCode();
    return 0;
}
```

Whe compile and run we should get:
```run
Client triggers operation A.
The First Component does Action.

Client triggers operation D.
The Second Component does Deed.
Mediator reacts on the Deed and triggers following operations:
The First Component does B.
The Second Component does C.
```
The Ray Code is AWESOME!!!
 
[Wikipedia](https://en.wikipedia.org/wiki/Mediator_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
