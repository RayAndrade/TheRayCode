[home](./page01.md)

[back](./page07.md)

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
        std::cout << "WindowsScrollbar scroll." << std::endl;
    }
```


[page 9](./page09.md)
