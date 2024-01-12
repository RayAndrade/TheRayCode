[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

Create **Teenager.h**
```
Teenager
```
and have it
```
#include "DishWasher.h"
```
so you can
```
class Teenager : public DishWasher {  };
```
with code:
```
public:
void washDishes(const std::string& dishType) override {
    if (dishType == "Plate") {
        std::cout << "Teenager: Fine! I'll wash the plate.\n";
    } else {
        std::cout << "Teenager: Not my job! Passing it on...\n";
        if (nextWasher) nextWasher->washDishes(dishType);
    }
}
```


[page 4](./page04.md)
