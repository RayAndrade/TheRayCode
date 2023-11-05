[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

Now, let's use these classes in our main.cpp.

```
#include <iostream>
#include "Pizza.h"
#include "PizzaBuilder.h"
#include "HawaiianPizzaBuilder.h"
#include "PizzaDirector.h"
```

```
PizzaDirector director;
HawaiianPizzaBuilder hawaiianBuilder;

director.construct(hawaiianBuilder);
Pizza* pizza = hawaiianBuilder.getPizza();
pizza->display();

delete pizza; // Don't forget to deallocate memory!
```

[page 6](./page06.md)
