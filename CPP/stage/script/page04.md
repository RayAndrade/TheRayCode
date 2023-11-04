[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

Now, let's create a concrete builder class that implements the PizzaBuilder interface.

```
PizzaBuilder
```

```
#include "PizzaBuilder.h"
```

 Director class that constructs an object using the Builder interface.
```
class PizzaDirector {  }:
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


[page 5](./page05.md)
