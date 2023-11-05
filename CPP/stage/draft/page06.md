[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

Finally, we need a Director class that defines the order of construction steps.
**PizzaDirector.h**
```
PizzaDirector
```

```
#include "PizzaBuilder.h"
```

Director class that constructs an object using the Builder interface.
```
class PizzaDirector {  };
```

```
public:
    void construct(PizzaBuilder& builder) {
        builder.createNewPizzaProduct();
        builder.buildDough();
        builder.buildSauce();
        builder.buildTopping();
    }
```


[page 7](./page07.md)
