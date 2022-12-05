[back](./page06.md)

**ProductB1**

```cpp

#include "AbstractProductB.h"

class ProductB1 : public AbstractProductB {
public:
    std::string UsefulFunction2() const override {
        return "The result of Product B1.";
    }
    std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of B1 collaborating with ( " + result + " )";
    }
};

```

[page 8](./page08.md)
