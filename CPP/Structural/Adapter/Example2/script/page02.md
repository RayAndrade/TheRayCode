[home](./page01.md)

[back](./page01.md)

**Object1.h**

```
Object1
```

Here, you have a class Object1 which inherits from Interface1. 
It provides an implementation for the Method1() function, though the body of the method is empty.
This class is a concrete implementation of the Interface1 interface.

```
#include "Interface1.h"
```

```
class Object1 {  };
```

```
 : public Interface1
```

add code:

```
public:
    virtual void Method1() override {}
```

[page 3](./page03.md)
