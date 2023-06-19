[home](./page01.md)

[back](./page01.md)

Let's start with the base class **UIFactory**. We'll place it in **UIFactory.h**:

```
UIFactory
```


```
class UIFactory {  };
```

this class will mangae a couple of interfases for the Button and ScrollBar

```
public:
    virtual Button* createButton() = 0;
    virtual Scrollbar* createScrollbar() = 0;
```


```
#include "Button.h"
#include "Scrollbar.h"
```

So let create these objects



[page 3](./page03.md)
