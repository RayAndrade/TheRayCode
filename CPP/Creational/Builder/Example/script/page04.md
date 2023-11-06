[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

Now, let's create a concrete builder class that implements the PizzaBuilder interface.

Let's create a **HawaiianPizzaBuilder** 
```
HawaiianPizzaBuilder
```

```
#include "PizzaBuilder.h"
```
Concrete Builder for Hawaiian pizza.
```
class HawaiianPizzaBuilder {  };
```

```
 : public PizzaBuilder
```

with
```
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
And for the Topping we want ham and pineapple
```
void buildTopping() override {
    pizza->addTopping("ham");
    pizza->addTopping("pineapple");
}
```




[page 5](./page05.md)
