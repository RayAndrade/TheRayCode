[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

create header file
```
Decorator
```
at the top we add
```
#include "Component.h"
```
we add the class
```
class Decorator {  };
```
extend it with the
```
 : public Component
```
we have a protected **component** object
```
protected:
Component* component;
```
next for
```
public:
```
we have
```
Decorator(Component* c) : component(c) {}

void operation() override {
if (component)
component->operation();
}
```




[page 5](./page05.md)