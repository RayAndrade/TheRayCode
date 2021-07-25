# TheRayCode
## Bridge pattern c++

We start with the **Implementation** *class*.

```c++
#include <iostream>

class Implementation {
public:
    virtual ~Implementation() {}
    virtual std::string OperationImplementation() const = 0;
};
```

Now let's create an **Abstraction**.
```c++
#include <string>
#include "Implementation.h"

class Abstraction {
protected:
    Implementation* implementation_;
public:
    Abstraction(Implementation* implementation) : implementation_(implementation) {
    }
    virtual ~Abstraction() {
    }
    virtual std::string Operation() const {
        return "Abstraction: Base operation with:\n" +
               this->implementation_->OperationImplementation();
    }
};
```












<br/>
Let's create a **ConcreteImplementationA** which will be extended be the class we just created, **Implementation**.
<br/>





```c++
#include "Implementation.h"

class ConcreteImplementationA : public Implementation {
public:
    std::string OperationImplementation() const override {
        return "ConcreteImplementationA: Here's the result on the platform A.\n";
    }
};
```
<br/>
Let's do the same with a **B** side.
Let's create a **ConcreteImplementationB** which will be extended with **Implementation** class also.
The **B** side looks like:
<br/>
```c++
#include "Implementation.h"

class ConcreteImplementationB : public Implementation {
public:
    std::string OperationImplementation() const override {
        return "ConcreteImplementationB: Here's the result on the platform B.\n";
    }
};
```

Now let create an **ExtendedAbstraction**.
The code for the **ExtendedAbstraction** will be:
```c++
#include "Abstraction.h"

class ExtendedAbstraction : public Abstraction {
public:
    ExtendedAbstraction(Implementation* implementation) : Abstraction(implementation) {
    }
    std::string Operation() const override {
        return "ExtendedAbstraction: Extended operation with:\n" +
               this->implementation_->OperationImplementation();
    }
};
```

Now let's but this all together in the **main** class.

We start with the *includes*.
```c++
#include <string>
#include "ConcreteImplementationA.h"
#include "ConcreteImplementationB.h"
#include "ExtendedAbstraction.h"
```

Except for the initialization phase, where an Abstraction object gets linked with a specific Implementation object, the client code should only depend on the Abstraction class. 
This way the client code can support any abstraction implementation combination.
```c++
void ClientCode(const Abstraction& abstraction) {
    // ...
    std::cout << abstraction.Operation();
    // ...
}
```
The client code should be able to work with any pre-configured abstraction implementation combination.
And lastly we create a main method:
```c++
int main() {
    Implementation* implementation = new ConcreteImplementationA;
    Abstraction* abstraction = new Abstraction(implementation);

    ClientCode(*abstraction);
    std::cout << std::endl;
    delete implementation;
    delete abstraction;

    implementation = new ConcreteImplementationB;
    abstraction = new ExtendedAbstraction(implementation);
    ClientCode(*abstraction);

    delete implementation;
    delete abstraction;
    
    std::cout << std::endl<< std::endl;
    std::cout << "The Ray Code is AWESOME!!!" << std::endl;
    return 0;
}
```

When we compile and run we should get:
```run
Abstraction: Base operation with:
ConcreteImplementationA: Here's the result on the platform A.

ExtendedAbstraction: Extended operation with:
ConcreteImplementationB: Here's the result on the platform B.
```

[Wikipedia](https://en.wikipedia.org/wiki/Bridge_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
