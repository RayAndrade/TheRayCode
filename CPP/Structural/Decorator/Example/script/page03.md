[home](./page01.md) | [back](./page02.md) | [next](./page04.md)


create **A Concrete Component** 
```
ConcreteComponent
```
Which will be a Concrete implementation of Component.
```
Component
```
include the **Component** and the IO stream
```
#include "Component.h"
#include <iostream>
```
create the class
```
class ConcreteComponent {  };
```
and extend it with
```
 : public Component 
```
code
```
public:
void operation() override {
    std::cout << "Basic functionality.\n";
}
```

