[home](./page01.md)

[back](./page02.md)

```
CarBuilder
```

```
class CarBuilder {  };
```

```
#include "Car.h"
```


```
public:
    virtual ~CarBuilder() {}
    virtual void setEngine(std::string type) = 0;
    virtual void setSeats(std::string type) = 0;
    virtual void setWheels(std::string type) = 0;
    virtual Car* getCar() = 0;
```

The CarBuilder is an abstract base class with a set of pure virtual functions for setting parts of a Car object. Each concrete builder will provide a different implementation of these methods.


[page 4](./page04.md)
