[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

Create **class SandwichBuilder**

```
SandwichBuilder
```

```
#include "Sandwich.h"
```

**1 of 7**
```
class SandwichBuilder {  };
```

**2 of 7**
```
protected:
    Sandwich* sandwich;
```

**3 of 7**
```
public:
    SandwichBuilder() : sandwich(nullptr) {}
```

**4 of 7**
```
virtual ~SandwichBuilder() {
    delete sandwich;
}
```

**5 of 7**
```
Sandwich* getSandwich() {
    return sandwich;
}
```

**6 of 7**
```
void createNewSandwichProduct() {
    sandwich = new Sandwich();
}
```

**7 of 7**
```
virtual void buildBread() = 0;
virtual void buildMeat() = 0;
virtual void buildCheese() = 0;
virtual void buildVegetables() = 0;
virtual void buildCondiments() = 0;
```


[page 6](./page06.md)
