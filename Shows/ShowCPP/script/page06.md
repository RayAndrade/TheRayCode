[home](./page01.md)

[back](./page05.md)

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

[page 7](./page07.md)
