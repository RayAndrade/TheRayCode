[home](./page01.md)
[back](./page06.md)

Let's include the files that we created

```
#include "Toy.h"
#include "ToyFactory.h"
#include "CarToyFactory.h"
#include "DollToyFactory.h"
```


in main our code will be

```
ToyFactory* carFactory = new CarToyFactory();
ToyFactory* dollFactory = new DollToyFactory();

Toy* carToy = carFactory->createToy();
Toy* dollToy = dollFactory->createToy();

carToy->play();
dollToy->play();

delete carToy;
delete dollToy;
delete carFactory;
delete dollFactory;
```
compile and run


[page 06](./page08.md)
