# [TheRayCode](../../../README.md) is AWESOME!!!

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**C++ Abstract Factory Design Pattern**

|Pattern|   |   |   |   |
|---|---|---|---|---|
| Abstract Factory | [**C++**](../../../CPP/Creational/AbstractFactory/README.md) | [**C#**](../../../Csharp/Creational/AbstractFactory/README.md) | [Java](../../../Java/Creational/AbstractFactory/README.md) | [PHP](../../../PHP/Creational/AbstractFactory/README.md) |

[Show](./script/page01.md)

In our example, the Abstract Factory pattern provides an interface for creating families of related or dependent objects without specifying their concrete classes. In our case, we will create a **UIFactory** that can create a **Button** and **Scrollbar** objects, and well also create the **WindowsUIFactory** and **MacUIFactory** that each implement the **UIFactory**.

```
#include "Button.h"
#include "Scrollbar.h"
class UIFactory { 
public:
    virtual Button* createButton() = 0;
    virtual Scrollbar* createScrollbar() = 0;
};
```

For **Button** object
```
class Button {
public:
    virtual void click() = 0;
};
```
For **ScrollBar** object
```
class Scrollbar { 
public:
    virtual void scroll() = 0;
};
```

So let's start with creating a **WindowsUIFactory**

```
#include "UIFactory.h"
#include "WindowsButton.h"
#include "WindowsScrollbar.h"

class WindowsUIFactory : public UIFactory {  
public:
    Button* createButton() override {
        return new WindowsButton();
    }

    Scrollbar* createScrollbar() override {
        return new WindowsScrollbar();
    }
};
```

For the **WindowsButton**

```
class WindowsButton : public Button{ 
public:
    void click() override {
        std::cout << "WindowsButton scroll." << std::endl;
    }
};
```
... and for the **WindowsScrollbar**,

```
#include <iostream>
#include "Scrollbar.h"

class WindowsScrollbar : public Scrollbar{ 
public:
    void scroll() override {
        std::cout << "WindowsScrollbar scroll." << std::endl;
    }
};
```

Now let's look at the Mac side so we have the **MacUIFactory**.


```
#include "UIFactory.h"
#include "MacButton.h"
#include "MacScrollbar.h"

class MacUIFactory : public UIFactory { 
public:
Button* createButton() override {
    return new MacButton();
}
 Scrollbar* createScrollbar() override {
    return new MacScrollbar();
}
};
```

For the **MacButton**,

```
#include <iostream>
#include "Button.h"

class  MacButton : public Button { 
public:
    void click() override {
        std::cout << "MacButton click." << std::endl;
    }
};
```
and the **MacScrollbar**

```
#include <iostream>
#include "Scrollbar.h"

class MacScrollbar : public Scrollbar{  
public:
    void scroll() override {
        std::cout << "MacScrollbar scroll." << std::endl;
    }
};
```
now let's but these together in main:

```
#include <iostream>

#include "UIFactory.h"
#include "WindowsUIFactory.h"
#include "MacUIFactory.h"

int main() {
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
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```


When we compile and run we get

```
WindowsButton scroll.
WindowsScrollbar scroll.
MacButton click.
MacScrollbar scroll.
```

[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
