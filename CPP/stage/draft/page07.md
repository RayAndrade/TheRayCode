[home](./page01.md) | [back](./page06.md) | [next](./page08.md)

At the **main.cpp**

```
#include <iostream>
#include "Pizza.h"
#include "PizzaBuilder.h"
#include "HawaiianPizzaBuilder.h"
#include "PizzaDirector.h"
```

in main
```
PizzaDirector director;
HawaiianPizzaBuilder hawaiianBuilder;

director.construct(hawaiianBuilder);
Pizza* pizza = hawaiianBuilder.getPizza();
pizza->display();

delete pizza; // Don't forget to deallocate memory!
```



[page 8](./page08.md)
