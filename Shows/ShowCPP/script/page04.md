[home](./page01.md)

[back](./page03.md)

Now, let's create a concrete builder class:
**SportsCarBuilder**

```
SportsCarBuilder
```

```
class SportsCarBuilder {  };
```

```
: public CarBuilder
```

```
#include "CarBuilder.h"
```


```
private:
    Car *car;
public:
    SportsCarBuilder() { this->car = new Car(); }
    ~SportsCarBuilder() { delete car; }
    
    void setEngine(std::string type) override { car->Engine = type + " sports engine"; }
    void setSeats(std::string type) override { car->Seats = type + " sports seats"; }
    void setWheels(std::string type) override { car->Wheels = type + " sports wheels"; }
    Car* getCar() override { return car; }
```

The SportsCarBuilder is a concrete builder implementation. It provides specific ways to build a sports car.



[page 5](./page05.md)
