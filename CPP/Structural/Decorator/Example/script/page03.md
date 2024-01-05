[home](./page01.md) | [back](./page02.md) | [next](./page04.md)


create **Concrete implementation/Component** 
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
 : public Component
```
puplic code
```
public:
void operation() override {
    std::cout << "Basic functionality.\n";
}
```
