# [TheRayCode](../../../README.md) is AWESOME!!!

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**C++ Abstract Factory Design Pattern**

|Pattern|   |   |   |   |
|---|---|---|---|---|
| Abstract Factory | [**C++**](../../../CPP/Creational/AbstractFactory/README.md) | [**C#**](../../../Csharp/Creational/AbstractFactory/README.md) | [Java](../../../Java/Creational/AbstractFactory/README.md) | [PHP](../../../PHP/Creational/AbstractFactory/README.md) |

**C++ Abstract Factory Design Pattern**

[script](./script/page01.md)

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
This is the abstract factory class. It provides an interface to create objects of Button and Scrollbar types. 
It declares two pure virtual methods: **createButton** and **createScrollbar**.


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

**Button** and **Scrollbar** classes:
These are abstract product classes. Each of them declares a pure virtual function (**click()** for Button and **scroll()** for Scrollbar) to be overridden in derived classes.

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
This is a concrete factory class. It implements the UIFactory interface and overrides the createButton and createScrollbar methods to create Windows-specific objects (**WindowsButton** and **WindowsScrollbar**).

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
**WindowsButton** and **WindowsScrollbar** classes:
These are concrete product classes. They implement the **Button** and **Scrollbar** interfaces respectively and override their virtual functions.

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
Similar to **WindowsUIFactory**, this is a concrete factory that creates Mac-specific objects (**MacButton** and **MacScrollbar**).

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
Like the Windows counterparts, these are concrete product classes for Mac that implement Button and Scrollbar interfaces respectively.

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
In the main() function:


```
WindowsButton scroll.
WindowsScrollbar scroll.
MacButton click.
MacScrollbar scroll.
```

We instantiate the specific UIFactory (Windows or Mac), and then use it to create the Button and Scrollbar objects. This demonstrates the benefit of the Abstract Factory pattern: the client code (here main()) works with abstract interfaces (UIFactory, Button, Scrollbar) and is agnostic to the concrete classes.

We use the factory to create the concrete Button and Scrollbar objects and invoke their actions.

After usage, the objects are deleted to free up memory resources.

When we compile and run we get

When the code is executed, depending on the UIFactory used, you get the corresponding **Button** and **Scrollbar** actions. This abstract factory pattern provides a way to encapsulate a group of individual factories that have a common theme without specifying their concrete classes. It allows for new types of themes to be easily incorporated with minimal changes to the client code.


[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
