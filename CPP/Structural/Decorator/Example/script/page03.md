[home](./page01.md) | [back](./page02.md) | [next](./page04.md)


create **Concrete implementation** 
```
ConcreteComponent
```
Which will be a Concrete implementation of Component.
```
Component
```
include the **Component** and the IO stream
```
#include "Decorator.h"
#include <iostream>
```
create the class
```
class ConcreteDecoratorA {  };
```
and extend it with
```
 : public Decorator
```
puplic code
```
public:
ConcreteDecoratorA(Component* c) : Decorator(c) {}

void operation() override {
    Decorator::operation();
    addedBehavior();
}
```
and **privite Added behavior**
```
private:
void addedBehavior() {
    std::cout << "Added behavior A.\n";
}
```

