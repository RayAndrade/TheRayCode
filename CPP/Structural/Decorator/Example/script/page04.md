[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

At main:

At the top
```
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
```
in the main method **1**
```
Component* simple = new ConcreteComponent();
Component* decorated = new ConcreteDecoratorA(simple);
```
**2** Running basic component
```
std::cout << "Running basic component:\n";
simple->operation();
```
**3**Running **decorated** component
```
std::cout << "\nRunning decorated component:\n";
decorated->operation();
```
**4**clean up
```
delete simple;
delete decorated;
```
