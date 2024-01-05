[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

create a header file called
```
ConcreteDecoratorA
```
 Concrete ConcreteDecoratorA ans B extending Decorator with **additional functionalities**.
 
for class
```
class ConcreteDecoratorA { };
```

at the top
```
#include "Decorator.h"
#include <iostream>
```
create the class
```
class ConcreteDecoratorA {  };
```
extend it
```
 : public Decorator
```
for
```
public:
ConcreteDecoratorA(Component* c) : Decorator(c) {}

void operation() override {
Decorator::operation();
addedBehavior();
}
```
and for
```
private:
void addedBehavior() {
std::cout << "Added behavior A.\n";
}
```


[page 6](./page06.md)
