[home](./page01.md)

[back](./page04.md)

**ComponentA.h**

```
ComponentA
```

```
#include <iostream>
#include <array>
#include "Component.h"
```

```
class ComponentA {  };
```

```
 : public Component
```


```
public:
    void Accept(Visitor *visitor) const  {
        visitor->VisitConcreteComponentA(this);
    }
```

```
std::string ExclusiveMethodOfConcreteComponentA() const {
    return "A";
}
```

[page 6](./page06.md)
