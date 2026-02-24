[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

**PizzaBuilder.h**
```
PizzaBuilder
```

```
#include "Pizza.h"
```

```
class PizzaBuilder {  };
```

```
protected:
    Pizza* pizza;
```
The **PizzaBuilder** returns a pointer to the **pizza**
```
public:
    PizzaBuilder() : pizza(nullptr) {}
```
virtual **PizzaBuilder deconstrutor**
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
initialize **buildDough**, **buildSauce**, and **buildTopping**
```
virtual void buildDough() = 0;
virtual void buildSauce() = 0;
virtual void buildTopping() = 0;
```





[page 4](./page04.md)
