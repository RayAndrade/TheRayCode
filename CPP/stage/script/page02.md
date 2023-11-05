[home](./page01.md) | [back](./page01.md) | [next](./page03.md)

Create Class:
```
Pizza
```
include string and vector
```
#include <string>
#include <vector>
```
**Pizza** is the complex object that is created by the builder.
```
class Pizza {  };
```
private varables
```
private:
    std::string dough;
    std::string sauce;
    std::vector<std::string> toppings;
```
public **setDough**
```
public:
    void setDough(const std::string& d) {
        dough = d;
    }
```
**setSauce**
```
void setSauce(const std::string& s) {
    sauce = s;
}
```
**addTopping**
```
void addTopping(const std::string& topping) {
    toppings.push_back(topping);
}
```
for **display**
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
