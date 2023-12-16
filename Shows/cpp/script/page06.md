[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

now to main
at the top
**1**
```
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
```
**2**
```
Component* simple = new ConcreteComponent();
Component* decorated = new ConcreteDecoratorA(simple);
```
**3**
```
std::cout << "Running basic component:\n";
simple->operation();
```
**4**
```
std::cout << "\nRunning decorated component:\n";
decorated->operation();
```

and to clean up

**5**
```
delete simple;
delete decorated;
```



[page 7](./page07.md)
