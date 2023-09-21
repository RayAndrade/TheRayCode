What does this code do that I have added to the end of this prompt written in c++? Explain each class and method: this code should be an example of the Memento design pattern

**Memento.h**

```
#include <iostream>

class Memento {

public:
    virtual std::string GetName() const = 0;
    virtual std::string date() const = 0;
    virtual std::string state() const = 0;

};
```

