[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

**ConcretePrototype1.h**
```
ConcretePrototype1
```

```
#include "Prototype.h"
```

```
class ConcretePrototype1  {  };
```

```
 : public Prototype 
```

```
public:
ConcretePrototype1();
ConcretePrototype1(const ConcretePrototype1& other);

Prototype* clone() const override;
```



[page 4](./page04.md)
