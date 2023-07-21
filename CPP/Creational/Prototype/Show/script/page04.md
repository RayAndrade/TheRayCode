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


When you run this program, all of the std::cout calls will print '10', as the DemoClass object originalObj, the shallow copy shallowCopyObj, and the deep copy deepCopyObj are all initially identical.

However, the difference comes into play when changes are made to the originalObj after the copying. The changes will reflect in the shallowCopyObj as they both point to the same ConcretePrototype object, while the deepCopyObj will remain the same because it points to a different ConcretePrototype object.

[page 5](./page05.md)
