[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

**Concrete Prototype (ConcretePrototype.h)**

This class implements the Prototype interface and defines the concrete object that will be cloned.

```
ConcretePrototype
```

```
#include "Prototype.h"
#include <string>
```

```
class ConcretePrototype {  };
```

```
 : public Prototype
```
**1 of 5**
```
private:
std::string data;
```
**2 of 5**
```
public:
ConcretePrototype(std::string data) : data(data) {}
```
**3 of 5**
```
ConcretePrototype(const ConcretePrototype& other) : data(other.data) {}
```
**4 of 5**
```
Prototype* clone() const override {
    return new ConcretePrototype(*this);
}
```
**5 of 5**
```
std::string getData() const {
    return data;
}
```



[page 5](./page05.md)
