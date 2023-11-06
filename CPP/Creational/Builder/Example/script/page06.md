[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

At **main.cpp**

```
#include <iostream>
#include "Pizza.h"
#include "PizzaBuilder.h"
#include "HawaiianPizzaBuilder.h"
#include "PizzaDirector.h"
```

inilize the **director** and the **hawaiianBuilder**
```
PizzaDirector director;
HawaiianPizzaBuilder hawaiianBuilder;
```
put the **director** to work
```
director.construct(hawaiianBuilder);
Pizza* pizza = hawaiianBuilder.getPizza();
pizza->display();
```
cleanup
```
delete pizza; // Don't forget to deallocate memory!
```


[page 7](./page07.md)
