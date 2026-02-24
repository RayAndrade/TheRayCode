[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

**PizzaDirector**
```
PizzaDirector
```

```
#include "PizzaBuilder.h"
```

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





[page 6](./page06.md)
