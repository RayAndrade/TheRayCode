[home](./page01.md)

The Abstract Factory pattern provides an interface for creating families of related or dependent objects **without specifying their concrete classes**. 
In this example, we will have a **UIFactory** that can create **Button** and **Scrollbar** objects, and with create a **WindowsUIFactory** and **MacUIFactory** to implement our **UIFactory**.

We start with the

```
UIFactory
```

We'll place it in **UIFactory.h**:

```
UIFactory
```


```
class UIFactory {  };
```

this class will mangae a couple of interfases for the **Button** and **ScrollBar** interfaces.

```
public:
    virtual Button* createButton() = 0;
    virtual Scrollbar* createScrollbar() = 0;
```


```
#include "Button.h"
#include "Scrollbar.h"
```

So let create these interfaces



[page 2](./page02.md)
