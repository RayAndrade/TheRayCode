[home](./page01.md)

[back](./page05.md)

**ComponentB.h**

```
ComponentB
```

```
#include <iostream>
#include <array>
#include "Visitor.h"
#include "Component.h"
```

```
class ComponentB {  };
```

```
 : public Component
```

```
public:
    void Accept(Visitor *visitor) const override {
        visitor->VisitConcreteComponentB(this);
    }
```

```
std::string SpecialMethodOfConcreteComponentB() const {
        return "B";
    }
```

[page 7](./page07.md)
