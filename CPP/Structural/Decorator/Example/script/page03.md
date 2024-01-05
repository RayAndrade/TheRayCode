[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

 Implement the basic functionality with

create **Concrete Component** 
```
ConcreteComponent
```
At the top we add:
```
#include "Component.h"
#include <iostream>
```
for class
```
class ConcreteComponent { };
```
So we can extend it with
```
 : public Component
```
and add code:
```
public:
void operation() override {
    std::cout << "Basic functionality.\n";
}
```
