[home](./page01.md)

[back](./page02.md)


Create

```
Component
```

```
#include "Visitor.h"
```

```
class Component {  };
```

```
public:
    virtual ~Component() {}
    virtual void Accept(Visitor *visitor) const = 0;
```



[page 4](./page04.md)
