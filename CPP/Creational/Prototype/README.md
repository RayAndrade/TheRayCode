# [TheRayCode](../../../README.md) is AWESOME!!!

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**C++ Prototype Design Pattern**

|Pattern|   |   |   |   |
|---|---|---|---|---|
| Prototype | [**C++**](../../../CPP/Creational/Prototype/README.md) | [**C#**](../../../Csharp/Creational/Prototype/README.md) | [Java](../../../Java/Creational/Prototype/README.md) | [PHP](../../../PHP/Creational/Prototype/README.md) |

[Show](./script/page01.md)

The prototype pattern is a creational design pattern in software development. It is used when the type of objects to create is determined by a prototypical instance, which is cloned to produce new objects. This pattern is used to:

* Avoid subclasses of an object creator in the client application, like the factory method pattern does.
* Avoid the inherent cost of creating a new object in the standard way (e.g., using the 'new' keyword) when it is prohibitively expensive for a given application.

The pattern involves implementing a prototype interface which tells to create a clone of the current object. This is done by creating a function that uses the clone method to create and return a copy of itself.

Here's how you might implement the prototype pattern in C++.

Create class **Prototype**

This is the Prototype base class. It declares a method for cloning itself.

```
class Prototype {  
public:
    virtual ~Prototype(){}
    virtual Prototype* clone() const = 0;
};
```
This is a concrete class implementing the Prototype interface. It defines the clone method to return a copy of itself.
```
#include "Prototype.h"

class ConcretePrototype : public Prototype { 
public:
    ConcretePrototype(int value): value_(value){}
    ConcretePrototype(const ConcretePrototype& other): value_(other.value_){}
    virtual ~ConcretePrototype(){}
    virtual Prototype* clone() const override {
        return new ConcretePrototype(*this);
    }
    int getValue() { return value_; }
private:
    int value_;
};
```
In the main function, we create an instance of ConcretePrototype and then clone it. We print out the values of the original and the copy to show that they are the same.

Please note that the Prototype pattern requires memory management. In the above code, we are using raw pointers which need to be manually deleted to prevent memory leaks. In a real-world application, it is recommended to use smart pointers such as std::unique_ptr or std::shared_ptr for automatic and safe memory management.

```
#include <iostream>
#include "ConcretePrototype.h"

int main() {
    ConcretePrototype original(10);
    ConcretePrototype* copy = static_cast<ConcretePrototype*>(original.clone());

    std::cout << "Original value: " << original.getValue() << std::endl;
    std::cout << "Copy value: " << copy->getValue() << std::endl;

    delete copy;
    
    return 0;
}
```

When we compile and run we get:

```
Original value: 10
Copy value: 10
```

[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
