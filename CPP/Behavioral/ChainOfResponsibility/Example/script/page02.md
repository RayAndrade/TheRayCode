[home](./page01.md) | [back](./page01.md) [next](./page03.md)

Create **DishWasher.h**
```
DishWasher
```
add:
```
#include <iostream>
#include <memory>
```
and for the class structure:
```
class DishWasher {  };
```
and then add:
```
public:
    virtual ~DishWasher() = default;
    void setNext(std::shared_ptr<DishWasher> nextWasher) { this->nextWasher = nextWasher; }
    virtual void washDishes(const std::string& dishType) = 0;

protected:
    std::shared_ptr<DishWasher> nextWasher;
```


[page 3](./page03.md)
