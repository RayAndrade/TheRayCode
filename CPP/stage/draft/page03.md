[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

**Pizza.h**

```
Pizza
```

```
#include <string>
#include <vector>
```

**Pizza** is the complex object that is created by the builder.
```
class Pizza {  };
```


```
private:
    std::string dough;
    std::string sauce;
    std::vector<std::string> toppings;
```

Public to **setDough**
```
public:
    void setDough(const std::string& d) {
        dough = d;
    }
```
To **setSauce**
```
void setSauce(const std::string& s) {
    sauce = s;
}
```
To **addTopping**
```
void addTopping(const std::string& topping) {
    toppings.push_back(topping);
}
```
For **display**
``` 
void display() const {
    std::cout << "Pizza with " << dough << " dough, " << sauce << " sauce, toppings: ";
    for (const auto& topping : toppings) {
        std::cout << topping << " ";
    }
    std::cout << std::endl;
}
```

[page 4](./page04.md)
