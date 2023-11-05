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

```
public:
    PizzaBuilder() : pizza(nullptr) {}
```


```
virtual ~PizzaBuilder() {}
```

```
Pizza* getPizza() {
    return pizza;
}
```

```
void createNewPizzaProduct() {
    pizza = new Pizza();
}
```


```
virtual void buildDough() = 0;
virtual void buildSauce() = 0;
virtual void buildTopping() = 0;
```



[page 4](./page04.md)
