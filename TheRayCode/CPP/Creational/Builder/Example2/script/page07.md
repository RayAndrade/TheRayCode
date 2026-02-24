[home](./page01.md) | [back](./page06.md) | [next](./page08.md)

**SandwichDirector**

```
SandwichDirector
```

```
#include "SandwichBuilder.h"
```

```
class SandwichDirector {  };
```

```
public:
    void construct(SandwichBuilder& builder) {
        builder.createNewSandwichProduct();
        builder.buildBread();
        builder.buildMeat();
        builder.buildCheese();
        builder.buildVegetables();
        builder.buildCondiments();
    }
```


[page 8](./page08.md)
