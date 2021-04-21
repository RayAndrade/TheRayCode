# TheRayCode
## Decorator pattern c++

This example illustrates the structure of the Decorator design pattern. It focuses on answering these questions:
<ol>
<li>What classes does it consist of?</li>
<li>What roles do these classes play?</li>
<li>In what way the elements of the pattern are related?</li>
</ol>

```cpp
#include <iostream>

class Component {
public:
    virtual ~Component() {}
    virtual std::string Operation() const = 0;
};
```
```cpp
#include "Component.h"

class ConcreteComponent : public Component {
public:
    std::string Operation() const override {
        return "ConcreteComponent";
    }
};
```
```cpp
#include "Component.h"

class Decorator : public Component {
protected:
    Component* component_;

public:
    Decorator(Component* component) : component_(component) {
    }
    /**
     * The Decorator delegates all work to the wrapped component.
     */
    std::string Operation() const override {
        return this->component_->Operation();
    }
};
```
![Composite](/UMLs/images/Composite/Composite.jpg)
Decorators may call parent implementation of the operation, instead of calling the wrapped object directly. 
This approach simplifies extension of decorator classes.
```cpp
#include "Decorator.h"

class ConcreteDecoratorA : public Decorator {
public:
    ConcreteDecoratorA(Component* component) : Decorator(component) {
    }
    std::string Operation() const override {
        return "ConcreteDecoratorA(" + Decorator::Operation() + ")";
    }
};
```
```cpp
#include "Decorator.h"

class ConcreteDecoratorB : public Decorator {
public:
    ConcreteDecoratorB(Component* component) : Decorator(component) {
    }

    std::string Operation() const override {
        return "ConcreteDecoratorB(" + Decorator::Operation() + ")";
    }
};
```
This way the client code can support both simple components as well as decorated ones.

Note how decorators can wrap not only simple components but the other decorators as well.
```cpp
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"

void ClientCode(Component* component) {
    // ...
    std::cout << "RESULT: " << component->Operation();
    // ...
}

int main() {

    Component* simple = new ConcreteComponent;
    std::cout << "Client: I've got a simple component:\n";
    ClientCode(simple);
    std::cout << "\n\n";
    
    Component* decorator1 = new ConcreteDecoratorA(simple);
    Component* decorator2 = new ConcreteDecoratorB(decorator1);
    std::cout << "Client: Now I've got a decorated component:\n";
    ClientCode(decorator2);
    std::cout << "\n";

    delete simple;
    delete decorator1;
    delete decorator2;

    return 0;
}
```

```run
Client: I've got a simple component:
RESULT: ConcreteComponent

Client: Now I've got a decorated component:
RESULT: ConcreteDecoratorB(ConcreteDecoratorA(ConcreteComponent))
```

The Ray Code is AWESOME!!!

[Wikipedia](https://en.wikipedia.org/wiki/Decorator_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
