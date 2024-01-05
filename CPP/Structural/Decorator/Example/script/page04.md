[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

Create a **base decorator**
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
we have a protected **component** object for **protected**
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
we pass in the **Component** and overide the **operation** operation with a if check



[page 5](./page05.md)
