[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

At main
```
#include "Child.h"
#include "Mother.h"
#include "Grandmother.h"
```
add code to the main methond
```
auto child = std::make_shared<Child>();
auto mother = std::make_shared<Mother>();
auto grandmother = std::make_shared<Grandmother>();

child->setNext(mother);
mother->setNext(grandmother);

std::cout << "Sharing a feeling of loneliness:\n";
child->shareFeelings("loneliness");

std::cout << "\nSharing a feeling of loss:\n";
child->shareFeelings("loss");
```


[page 7](./page07.md)
