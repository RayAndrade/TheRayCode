[up](../README.md)

This C++ code is a demonstration of the Creational Abstract Factory design pattern. This pattern provides a way to encapsulate a group of individual factories that have a common theme without specifying their concrete classes. In this code, the common theme is the creation of UI elements, specifically buttons and scrollbars, that have different behaviors depending on their operating system (OS) - in this case, Windows or Mac. Here's a breakdown of each file and its role in the pattern:

1. **Scrollbar.h:**
   - Defines an abstract class named `Scrollbar` with a pure virtual function `scroll()`. This function is intended to be overridden by derived classes to exhibit specific behavior when a scrollbar is scrolled.
   
**Scrollbar.h**

```cpp
class Scrollbar {
public:
    virtual void scroll() = 0;
};
```

2. **Button.h:**
   - Defines an abstract class named `Button` with a pure virtual function `click()`. This function is intended to be overridden by derived classes to exhibit specific behavior when a button is clicked.

```cpp
class Button {
public:
    virtual void click() = 0;
};
```

3. **UIFactory.h:**
   - Defines an abstract class named `UIFactory` with two pure virtual functions: `createButton()` and `createScrollbar()`. These functions are expected to be overridden by derived classes to create objects of types `Button` and `Scrollbar` respectively. This class acts as the abstract factory for creating UI elements.


```cpp
#include "Button.h"
#include "Scrollbar.h"
class UIFactory {
public:
    virtual Button* createButton() = 0;
    virtual Scrollbar* createScrollbar() = 0;
};
```

4. **MacButton.h & MacScrollbar.h:**
   - These files define classes `MacButton` and `MacScrollbar` that inherit from `Button` and `Scrollbar` respectively and override their virtual functions to provide specific implementations for Mac style UI elements (printing "MacButton click." and "MacScrollbar scroll.").


**MacButton.h**
```cpp
#include <iostream>
#include "Button.h"

class  MacButton : public Button{
public:
    void click() override {
        std::cout << "MacButton click." << std::endl;
    }
};
```

**MacScrollbar.h**
```cpp
#include <iostream>
#include "Scrollbar.h"

class MacScrollbar : public Scrollbar{
public:
    void scroll() override {
        std::cout << "MacScrollbar scroll." << std::endl;
    }
};
```

5. **MacUIFactory.h:**
   - Defines a class `MacUIFactory` that inherits from `UIFactory`. It overrides the functions `createButton()` and `createScrollbar()` to return instances of `MacButton` and `MacScrollbar`, respectively. This class acts as a concrete factory for creating Mac-themed UI elements.

```cpp
#include "UIFactory.h"
#include "MacButton.h"
#include "MacScrollbar.h"

class MacUIFactory : public UIFactory{
public:
    Button* createButton() override {
        return new MacButton();
    }

    Scrollbar* createScrollbar() override {
        return new MacScrollbar();
    }
};
```

6. **WindowsButton.h & WindowsScrollbar.h:**
   - These files define classes `WindowsButton` and `WindowsScrollbar` that inherit from `Button` and `Scrollbar` respectively and override their virtual functions to provide specific implementations for Windows style UI elements (printing "WindowsButton scroll." and "WindowsScrollbar scroll."). There's a minor typo in the `WindowsButton`'s `click` method where it prints "scroll" instead of "click".

**WindowsButton.h**
```cpp
#include <iostream>
#include "Button.h"
class WindowsButton : public Button{
public:
    void click() override {
        std::cout << "WindowsButton scroll." << std::endl;
    }
};
```

**WindowsScrollbar.h**
```cpp
#include <iostream>
#include "Scrollbar.h"

class WindowsScrollbar : public Scrollbar{
public:
    void scroll() override {
        std::cout << "WindowsScrollbar scroll." << std::endl;
    }
};
```



7. **WindowsUIFactory.h:**
   - Defines a class `WindowsUIFactory` that inherits from `UIFactory`. It overrides the functions `createButton()` and `createScrollbar()` to return instances of `WindowsButton` and `WindowsScrollbar`, respectively. This class acts as a concrete factory for creating Windows-themed UI elements.

```cpp
#include "UIFactory.h"
#include "WindowsButton.h"
#include "WindowsScrollbar.h"

class WindowsUIFactory : public UIFactory{
public:
    Button* createButton() override {
        return new WindowsButton();
    }

    Scrollbar* createScrollbar() override {
        return new WindowsScrollbar();
    }
};
```


8. **main.cpp:**
   - This file contains the `main` function where the program execution begins. It demonstrates the use of the Abstract Factory pattern by:
     - First creating a `WindowsUIFactory` instance, using it to create a `WindowsButton` and a `WindowsScrollbar`, and invoking their `click` and `scroll` methods, respectively.
     - Then, doing the same for the `MacUIFactory`, creating Mac-themed UI elements and invoking their methods.
     - Each created object is properly deleted after use to prevent memory leaks.
   - The output reflects the actions performed on the UI elements, demonstrating that different types of objects (Mac and Windows themed) can be created and used in a similar manner, while the actual creation process of these objects is abstracted away from the client code.
```cpp
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
    //std::cout << "The Ray Code is AWESOME!!!" << std::endl;
    return 0;
}
```

The Abstract Factory pattern is particularly useful when a system needs to be independent from the way the products it works with are created, or when the system is configured to work with multiple families of products which in this case are UI elements that belong to different OS themes.

Run:
```run
WindowsButton scroll.
WindowsScrollbar scroll.
MacButton click.
MacScrollbar scroll.
```




