[home](./page01.md)

[back](./page06.md)

Now let's look at the Mac side
so we have the **MacUIFactory**

```
MacUIFactory
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


```
#include "UIFactory.h"
#include "MacButton.h"
#include "MacScrollbar.h"
```


Let make these objects



[page 8](./page08.md)
