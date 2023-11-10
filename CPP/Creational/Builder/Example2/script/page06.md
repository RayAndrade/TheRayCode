[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

**ClubSandwichBuilder**

```
ClubSandwichBuilder
```

```
#include "SandwichBuilder.h"
```

```
class ClubSandwichBuilder  {  };
```

```
 : public SandwichBuilder
```

**1 of 6**
```
public:
    virtual ~ClubSandwichBuilder() {}
```
**2 of 6**
```
void buildBread() override {
    sandwich->setBread("toasted");
}
```
**3 of 6**
```
void buildMeat() override {
    sandwich->setMeat("turkey");
}
```
**4 of 6**
```
void buildCheese() override {
    sandwich->setCheese("Swiss");
}
```
**5 of 6**
```
void buildVegetables() override {
    sandwich->addVegetable("lettuce");
    sandwich->addVegetable("tomato");
}
```
**6 of 6**
```
void buildCondiments() override {
    sandwich->addCondiment("mayonnaise");
}
```



[page 7](./page07.md)
