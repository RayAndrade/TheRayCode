[home](./page01.md) | [back](./page02.md) | [next](./page04.md)


create
**1**
```
ConcreteComponent
```
header file
**2**
```
#include "Component.h"
#include <iostream>
```
create
**3**
```
class ConcreteComponent {  };
```
**4**
extend with
```
 : public Component 
```
This class implementing the Component interface

code
**5**
```
public:
void operation() override {
std::cout << "Basic functionality.\n";
}
```


[page 4](./page04.md)
