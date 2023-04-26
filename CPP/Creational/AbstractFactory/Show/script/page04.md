[home](./page01.md)
[back](./page03.md)


ToyFactory is an abstract factory that defines the createToy() method for creating toy objects.

```
ToyFactory
```

ToyFactory is an abstract factory that defines the createToy() method for creating toy objects.

```
class ToyFactory { };
```

```
public:
    virtual ~ToyFactory() {}
    virtual Toy* createToy() = 0;
```

```
#include "Toy.h"
```

[page 05](./page05.md)
