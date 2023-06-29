[home](./page01.md)

[back](./page03.md)

we go back to the **UIFactory** and add the methods that will create the Button and scroll the ScrollBar and verify
our errors were taken care of



So let's start with creating a **WindowsUIFactory**

```
class WindowsUIFactory {  };
```

```
: public UIFactory
```

```
public:
    Button* createButton() override {
        return new WindowsButton();
    }

    Scrollbar* createScrollbar() override {
        return new WindowsScrollbar();
    }
```

don't forget to add.
```
#include "UIFactory.h"
#include "WindowsButton.h"
#include "WindowsScrollbar.h"
```
 so let's create these


[page 5](./page05.md)
