[home](./page01.md)

[back](./page11.md)



now let's but these together in main


```
#include "UIFactory.h"
#include "WindowsUIFactory.h"
#include "MacUIFactory.h"
```
```
UIFactory* factory;

// Use WindowsUIFactory
factory = new WindowsUIFactory();
Button* windowsButton = factory->createButton();
windowsButton->click();
Scrollbar* windowsScrollbar = factory->createScrollbar();
windowsScrollbar->scroll();
delete windowsButton;
delete windowsScrollbar;
delete factory;

// Use MacUIFactory
factory = new MacUIFactory();
Button* macButton = factory->createButton();
macButton->click();
Scrollbar* macScrollbar = factory->createScrollbar();
macScrollbar->scroll();
delete macButton;
delete macScrollbar;
delete factory;
```



[page 13](./page13.md)
