[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

**Clown.h**

The Clown class, which inherits from ClownPrototype, represents a specific type of clown. It implements the clone method.

```
Clown
```

```
#include "ClownPrototype.h"
#include <string>
```

```
class Clown {  };
```

```
 : public ClownPrototype
 ```

```
private:
std::string name;
```

```
public:
Clown(std::string name) : name(name) {}

ClownPrototype* clone() override {
    return new Clown(*this);
}
```

```
void perform() {
    // Example action
    std::cout << "Clown " << name << " is performing!" << std::endl;
}
```



[page 4](./page04.md)
