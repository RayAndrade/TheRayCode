[home](./page01.md)

[back](./page03.md)

to to main.cpp

```
#include <iostream>
#include "ConcretePrototype.h"
```


```
 ConcretePrototype original(10);
    ConcretePrototype* copy = static_cast<ConcretePrototype*>(original.clone());

    std::cout << "Original value: " << original.getValue() << std::endl;
    std::cout << "Copy value: " << copy->getValue() << std::endl;

    delete copy;
```

In the main function, we create an instance of ConcretePrototype and then clone it. We print out the values of the original and the copy to show that they are the same.

Please note that the Prototype pattern requires memory management. In the above code, we are using raw pointers which need to be manually deleted to prevent memory leaks. In a real-world application, it is recommended to use smart pointers such as std::unique_ptr or std::shared_ptr for automatic and safe memory management.

In DemoClass, the copy constructor performs a shallow copy of ConcretePrototype (which means it only copies the pointer). 
On the other hand, the copy assignment operator (operator=) performs a deep copy by calling clone(), ensuring a new copy of ConcretePrototype is created.

[page 5](./page05.md)
