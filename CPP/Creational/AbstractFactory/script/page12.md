[home](./page01.md)

[back](./page11.md)

Create **MacUIFactory**


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
We Need 
```
#include "UIFactory.h"
#include "MacButton.h"
#include "MacScrollbar.h"
```


[page 13](./page13.md)
