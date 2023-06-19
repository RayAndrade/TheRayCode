[home](./page01.md)

[back](./page04.md)

we go back to the **UIFactory** and add the methods that will create the Button and scroll the ScrollBar

```
public:
    virtual Button* createButton() = 0;
    virtual Scrollbar* createScrollbar() = 0;
```

```
#include "Button.h"
#include "Scrollbar.h"
```

[page 6](./page06.md)
