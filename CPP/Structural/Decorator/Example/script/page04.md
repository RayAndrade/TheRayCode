[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

create the **Decorator class**
```
Decorator
```
Abstract class inheriting from Component, used as a base for concrete decorator
```
class Decorator { };
```

and extend it with
```
 : public Component
```
which means we need to
```
#include "Component.h"
```
we add **protected** code
```
protected:
Component* component;
```
and for **public**
```
public:
Decorator(Component* c) : component(c) {}
void operation() override {
    if (component)
        component->operation();
}
```
with a **if** check for **operation** override
