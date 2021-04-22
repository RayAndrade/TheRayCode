# TheRayCode
## Decorator pattern c++

Decorator is a structural pattern that allows adding new behaviors to objects dynamically by placing them inside special wrapper objects.

This example illustrates the structure of the Decorator design pattern. It focuses on answering these questions:
<ol>
<li>What classes does it consist of?</li>
<li>What roles do these classes play?</li>
<li>In what way the elements of the pattern are related?</li>
</ol>

The base Component interface defines operations that can be altered by decorators.


```cpp
#include <iostream>

class Component {
public:
    virtual ~Component() {}
    virtual std::string Operation() const = 0;
};
```
Concrete Components provide default implementations of the operations. 
There might be several variations of these classes.

```cpp
#include "Component.h"

class ConcreteComponent : public Component {
public:
    std::string Operation() const override {
        return "ConcreteComponent";
    }
};
```

The base Decorator class follows the same interface as the other components.
The primary purpose of this class is to define the wrapping interface for all concrete decorators. 
The default implementation of the wrapping code might include a field for storing a wrapped component and the means to initialize it.
The Decorator delegates all work to the wrapped component.
```cpp
#include "Component.h"

class Decorator : public Component {
protected:
    Component* component_;

public:
    Decorator(Component* component) : component_(component) {
    }

    std::string Operation() const override {
        return this->component_->Operation();
    }
};
```
![Decorator](/UMLs/images/Decorator/Decorator-1.jpg)

Decorators may call parent implementation of the operation, instead of calling the wrapped object directly. 
This approach simplifies extension of decorator classes.
Let's create a decorator called **ConcreteDecoratorA**
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
Let's create another decorator called **ConcreteDecoratorB**.
Decorators can execute their behavior either before or after the call to a wrapped object.
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

The client code works with all objects using the Component interface. 
This way it can stay independent of the concrete classes of components it works with.

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
Now let's compile and run, we should get:
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
