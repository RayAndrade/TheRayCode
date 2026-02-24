[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

Next create the **Parent.h**

with **include**

```
#include "DishWasher.h"
```
So we can have
```
class Parent : public DishWasher {  };
```
with code
```
public:
void washDishes(const std::string& dishType) override {
    if (dishType == "Pot") {
        std::cout << "Parent: Alright, I'll wash the pot.\n";
    } else {
        std::cout << "Parent: Not my responsibility! Passing it on...\n";
        if (nextWasher) nextWasher->washDishes(dishType);
    }
}
```

[page 5](./page05.md)
