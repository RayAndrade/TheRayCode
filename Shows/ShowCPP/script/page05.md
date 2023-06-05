[home](./page01.md)

[back](./page04.md)

Finally, the client code:

```
#include "SportsCarBuilder.h"
```


```
SportsCarBuilder builder;
builder.setEngine("V8");
builder.setSeats("Leather");
builder.setWheels("Alloy");

Car* car = builder.getCar();

std::cout << "Car built with: " 
          << car->Engine << ", " 
          << car->Seats << ", " 
          << car->Wheels << std::endl;

delete car;
```

In the main function, we create a SportsCarBuilder object, set its attributes, and then retrieve the built Car object.

Remember, this is a very simplified example of the Builder pattern. In real scenarios, you might have a Director class that guides the building process, especially when the process is more complex.


[page 6](./page06.md)
