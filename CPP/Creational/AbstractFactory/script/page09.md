[home](./page01.md)

[back](./page08.md)

Now let's look at the Mac side
so we have the **MacUIFactory**

```
#include "UIFactory.h"
#include "MacButton.h"
#include "MacScrollbar.h"
```


```
class MacUIFactory {  };
```

```
: public UIFactory
```

```
public:
Button* createButton() override {
    return new MacButton();
}

Scrollbar* createScrollbar() override {
    return new MacScrollbar();
}
```

Let make these objects


[page 10](./page10.md)
