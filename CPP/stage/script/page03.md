[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

Next create class 
```
PizzaBuilder
```

```
#include "Pizza.h"
```

```
class PizzaBuilder {  };
```
Abstract Builder
```
protected:
    Pizza* pizza;
```
The **PizzaBuilder** retuns a pointer to the pizza
```
public:
    PizzaBuilder() : pizza(nullptr) {}
```
deconstructor
```
virtual ~PizzaBuilder() {}
```

**getPizza**
```
Pizza* getPizza() {
    return pizza;
}
```

**createNewPizzaProduct**
```
void createNewPizzaProduct() {
    pizza = new Pizza();
}
```

Inilize **buildDough**, **buildSauce**, and **buildTopping**
```
virtual void buildDough() = 0;
virtual void buildSauce() = 0;
virtual void buildTopping() = 0;
```




[page 4](./page04.md)
