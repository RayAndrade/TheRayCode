[home](./page01.md)
[back](./page05.md)

DollToyFactory.h - Concrete factory class for creating doll toys:

```
DollToyFactory
```

```
class DollToyFactory { };
```

```
: public ToyFactory
```

DollToyFactory is another concrete factory that creates doll toys by implementing the createToy() method.

```
public:
    Toy* createToy() override {
        return new DollToy();
    }
```


```
#include "ToyFactory.h"
```

```
#include "DollToy.h"
```


[page 06](./page07.md)
