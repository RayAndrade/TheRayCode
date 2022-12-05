[back](./page02.md)


Now create a dot h file named **AbstractProductB**

```cpp

#include <string>
#include "AbstractProductA.h"

class AbstractProductB {
public:
    ~AbstractProductB(){};
    virtual std::string UsefulFunction2() const = 0;
    virtual std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const = 0;
};


```



[page 4](./page04.md)
