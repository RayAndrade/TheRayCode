[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

Now we go to the **main.cpp**

Let's incude the file we just created:
```
#include <iostream>
#include "Pizza.h"
#include "PizzaBuilder.h"
#include "HawaiianPizzaBuilder.h"
#include "PizzaDirector.h"
```
at the **main** methed:

```
PizzaDirector director;
HawaiianPizzaBuilder hawaiianBuilder;
```

```
director.construct(hawaiianBuilder);
Pizza* pizza = hawaiianBuilder.getPizza();
pizza->display();
```

```
delete pizza; // Don't forget to deallocate memory!
```


[page 7](./page07.md)
