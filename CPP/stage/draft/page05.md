[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

Now, let's create a concrete builder class that implements the PizzaBuilder interface.
**HawaiianPizzaBuilder.h**
```
HawaiianPizzaBuilder
```

```
#include "PizzaBuilder.h"
```

```
class HawaiianPizzaBuilder {  }
```
Extend it with the **PizzaBuilder** class
```
 : public PizzaBuilder
```
For the code:
```
public:
    virtual ~HawaiianPizzaBuilder() {}
```
To **buildDough**
```
void buildDough() override {
    pizza->setDough("cross");
}
```
To **buildSauce**
```
void buildSauce() override {
    pizza->setSauce("mild");
}
```

To **buildTopping**
````
void buildTopping() override {
    pizza->addTopping("ham");
    pizza->addTopping("pineapple");
}
```




[page 6](./page06.md)
