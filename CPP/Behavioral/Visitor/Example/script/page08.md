[home](./page01.md)

[back](./page07.md)


Create .h file:
```
Visitor1
```

```
#include "ComponentA.h"
#include "ComponentB.h"
```

```
class Visitor1 {  };
```

```
 : public Visitor
```

```
public:
    void VisitConcreteComponentA(const ComponentA *element) const override {
        std::cout << element->ExclusiveMethodOfConcreteComponentA() << " + Visitor1" << std::endl;
    }
```


```
void VisitConcreteComponentB(const ComponentB *element) const override {
    std::cout << element->SpecialMethodOfConcreteComponentB() << " + Visitor1" << std::endl;
}
```




[page 9](./page09.md)
