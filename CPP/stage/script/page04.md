[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

Now, let's create a concrete builder class that implements the **PizzaBuilder interface**.

**HawaiianPizzaBuilder.h**
```
HawaiianPizzaBuilder
```
include  the **PizzaBuilder**
```
#include "PizzaBuilder.h"
```

Concrete Builder for Hawaiian pizza
```
class HawaiianPizzaBuilder {  };
```

```
 : public PizzaBuilder
```

```
public:
    virtual ~HawaiianPizzaBuilder() {}
```
for **buildDough** we want *cross*
```
void buildDough() override {
    pizza->setDough("cross");
}
```
for **buildSauce** we want *mild*
```
void buildSauce() override {
    pizza->setSauce("mild");
}
```
for **buildTopping** we want *ham* and *pineapple*
```
void buildTopping() override {
    pizza->addTopping("ham");
    pizza->addTopping("pineapple");
}
```


[page 5](./page05.md)
