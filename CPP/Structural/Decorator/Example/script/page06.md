[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

now to main
at the top
```
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
```
**1**
```
Component* simple = new ConcreteComponent();
Component* decorated = new ConcreteDecoratorA(simple);
```
**2**
```
std::cout << "Running basic component:\n";
simple->operation();
```
**3**
```
std::cout << "\nRunning decorated component:\n";
decorated->operation();
```
**4**
```
delete simple;
delete decorated;
```



[page 7](./page07.md)
