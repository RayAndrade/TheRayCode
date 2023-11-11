[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

**ConcretePrototype2.h** Similar to **ConcretePrototype1.h** but with its specifics


**ConcretePrototype2.h**
```
ConcretePrototype2
```

```
#include "Prototype.h"
```

```
class ConcretePrototype2  {  };
```

```
 : public Prototype 
```

```
public:
ConcretePrototype2();
ConcretePrototype2(const ConcretePrototype2& other);

Prototype* clone() const override;
```



[page 5](./page05.md)
