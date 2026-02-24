[home](./page01.md)

[back](./page08.md)

**Visitor2.h**


```
Visitor2
```

```
#include <iostream>
#include <array>
#include "ComponentA.h"
#include "ComponentB.h"
```

```
class Visitor2 {  };
```

```
 : public Visitor
```

```
public:
    void VisitConcreteComponentA(const ComponentA *element) const override {
        std::cout << element->ExclusiveMethodOfConcreteComponentA() << " + Visitor2" << std::endl;
    }
```

```
void VisitConcreteComponentB(const ComponentB *element) const override {
        std::cout << element->SpecialMethodOfConcreteComponentB() << " + Visitor2" << std::endl;
    }
```


[page 10](./page10.md)
