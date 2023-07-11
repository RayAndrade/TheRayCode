[home](./page01.md)

[back](./page09.md)


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


[page 11](./page11.md)
