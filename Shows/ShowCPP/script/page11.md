[home](./page01.md)

[back](./page10.md)

```
MacScrollbar
```

```
class MacScrollbar {  };
```

```
: public Scrollbar
```

```
#include <iostream>
#include "Scrollbar.h"
```

```
public:
    void scroll() override {
        std::cout << "MacScrollbar scroll." << std::endl;
    }
```


[page 12](./page12.md)
