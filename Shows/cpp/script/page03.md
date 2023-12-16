[home](./page01.md) | [back](./page02.md) | [next](./page04.md)


create
```
ConcreteComponent
```
header file

```
#include "Component.h"
#include <iostream>
```
create
```
class ConcreteComponent {  };
```
extend with
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


[page 4](./page04.md)
