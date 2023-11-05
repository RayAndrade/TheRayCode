[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

Next, we define the abstract Builder class, which declares the building steps

**PizzaBuilder.h**
```
PizzaBuilder
```

```
#include "Pizza.h"
```
Abstract Builder
```
class PizzaBuilder {  };
```
A protected pointer to the pizza object
```
protected:
    Pizza* pizza;
```
public **PizzaBuilder**
```
public:
    PizzaBuilder() : pizza(nullptr) {}
```
virtual deconstructer
```
virtual ~PizzaBuilder() {}
```
To **getPizza**
```
Pizza* getPizza() {
    return pizza;
}
```
To **createNewPizzaProduct**
```
void createNewPizzaProduct() {
    pizza = new Pizza();
}
```
Intialize the methods
```
virtual void buildDough() = 0;
virtual void buildSauce() = 0;
virtual void buildTopping() = 0;
```

[page 5](./page05.md)
