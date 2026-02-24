[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

Create our saviur the **Robot.h**
```
#include "DishWasher.h"
```
and
```
class Robot : public DishWasher {  };
```
with code
```
public:
void washDishes(const std::string& dishType) override {
   std::cout << "Robot: Fine humans, I'll wash the " << dishType << ".\n";
}
```



[page 6](./page06.md)
