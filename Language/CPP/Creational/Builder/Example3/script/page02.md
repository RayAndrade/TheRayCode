[home](./page01.md) | [back](./page01.md) | [next](./page03.md)

In our example, let's create a simple Pizza object that requires various ingredients like dough, sauce, and topping. 

We'll have a PizzaBuilder to encapsulate the construction logic for a Pizza object.

First, we'll define the Pizza class that represents the product created by the builder.

```
Pizza
```

```
#include <iostream>
#include <vector>
```

```
class Pizza {  };
```

```
private:
    std::string dough;
    std::string sauce;
    std::vector<std::string> toppings;
```

```
public:
    void setDough(const std::string& d) {
        dough = d;
    }
```

```
void addTopping(const std::string& topping) {
        toppings.push_back(topping);
    }
```

```
void display() const {
        std::cout << "Pizza with " << dough << " dough, " << sauce << " sauce, toppings: ";
        for (const auto& topping : toppings) {
            std::cout << topping << " ";
        }
        std::cout << std::endl;
}
```




[page 3](./page03.md)
