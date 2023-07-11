[home](./page01.md)

[back](./page08.md)

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
        std::cout << "MacScrollbar scrolled." << std::endl;
    }
```


[page 10](./page10.md)
