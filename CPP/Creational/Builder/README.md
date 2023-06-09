# [TheRayCode](../../../README.md) is AWESOME!!!

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**C++ Builder Design Pattern**

|Pattern|   |   |   |   |
|---|---|---|---|---|
| **Builder**| [**C++**](../../../CPP/Creational/Builder/README.md) | [**C#**](../../../Csharp/Creational/Builder/README.md) | [Java](../../../Java/Creational/Builder/README.md) | [PHP](../../../PHP/Creational/Builder/README.md) |

[script](./script/page01.md)

The **Builder Design Pattern** is a *creational* pattern used for constructing complex objects step by step. It separates the construction of an object from its representation, so the same construction process can create different representations

Let's imagine a simple example of a Car object. A Car may have different components (like Engine, Wheels, Seats, etc.), and these components can vary from car to car. We could have a CarBuilder that allows the creation of Car objects in a step-by-step manner.

First, let's define our product class, **Car**:

```
#include <string>

class Car {
public:
    std::string Engine, Seats, Wheels;
};
```
This is a very simplified Car class with three string properties.

The **CarBuilder** is an abstract base class with a set of pure virtual functions for setting parts of a Car object. Each concrete builder will provide a different implementation of these methods.

```
#include "Car.h"

class CarBuilder {
public:
    virtual ~CarBuilder() {}
    virtual void setEngine(std::string type) = 0;
    virtual void setSeats(std::string type) = 0;
    virtual void setWheels(std::string type) = 0;
    virtual Car* getCar() = 0;
};
```
The **SportsCarBuilder** is a concrete builder implementation. It provides specific ways to build a sports car.

```
#include "CarBuilder.h"

class SportsCarBuilder : public CarBuilder{
private:
    Car *car;
public:
    SportsCarBuilder() { this->car = new Car(); }
    ~SportsCarBuilder() { delete car; }

    void setEngine(std::string type) override { car->Engine = type + " sports engine"; }
    void setSeats(std::string type) override { car->Seats = type + " sports seats"; }
    void setWheels(std::string type) override { car->Wheels = type + " sports wheels"; }
    Car* getCar() override { return car; }
};
```

In the main function, we create a SportsCarBuilder object, set its attributes, and then retrieve the built Car object.

```
#include <iostream>
#include "SportsCarBuilder.h"

int main() {
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
    return 0;
}
```


When we run and compile we get:

```
Car built with: V8 sports engine, Leather sports seats, Alloy sports wheels
free(): double free detected in tcache 2
```
Remember, this is a very simplified example of the Builder pattern. In real scenarios, you might have a Director class that guides the building process, especially when the process is more complex.


[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
