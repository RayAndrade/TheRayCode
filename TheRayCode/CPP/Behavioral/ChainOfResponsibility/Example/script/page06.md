[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

Now let's create a display in main

```
#include "Teenager.h"
#include "Parent.h"
#include "Robot.h"
```
add to main:
```
auto teen = std::make_shared<Teenager>();
auto parent = std::make_shared<Parent>();
auto robot = std::make_shared<Robot>();

teen->setNext(parent);
parent->setNext(robot);

std::cout << "Attempting to wash a Plate:\n";
teen->washDishes("Plate");

std::cout << "\nAttempting to wash a Glass:\n";
teen->washDishes("Glass");
```


[page 7](./page07.md)
