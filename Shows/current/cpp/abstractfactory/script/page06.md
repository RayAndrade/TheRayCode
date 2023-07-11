[home](./page01.md)

[back](./page05.md)

```
WindowsScrollbar
```

```
class WindowsScrollbar {  };
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
        std::cout << "WindowsScrollbar is scrolling." << std::endl;
    }
```


[page 7](./page07.md)
