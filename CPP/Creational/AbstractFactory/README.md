# [TheRayCode](../../../README.md) is AWESOME!!!

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**C++ Abstract Factory Design Pattern**

|Pattern|   |   |   |   |
|---|---|---|---|---|
| Abstract Factory | [**C++**](../../../CPP/Creational/AbstractFactory/README.md) | [**C#**](../../../Csharp/Creational/AbstractFactory/README.md) | [Java](../../../Java/Creational/AbstractFactory/README.md) | [PHP](../../../PHP/Creational/AbstractFactory/README.md) |
| Builder| [**C++**](../../../CPP/Creational/Builder/README.md) | [**C#**](../../../Csharp/Creational/Builder/README.md) | [Java](../../../Java/Creational/Builder/README.md) | [PHP](../../../PHP/Creational/Builder/README.md) |
| Factory | [**C++**](../../../CPP/Creational/Builder/README.md) | [**C#**](../../../Csharp/Creational/Builder/README.md) | [Java](../../../Java/Creational/Builder/README.md) | [PHP](../../../PHP/Creational/Builder/README.md) |
| Prototype | [**C++**](../../../CPP/Creational/Prototype/README.md) | [**C#**](../../../Csharp/Creational/Prototype/README.md) | [Java](../../../Java/Creational/Prototype/README.md) | [PHP](../../../PHP/Creational/Prototype/README.md) |
| Singleton | [**C++**](../../../CPP/Creational/Singleton/README.md) | [**C#**](../../../Csharp/Creational/Singleton/README.md) | [Java](../../../Java/Creational/Singleton/README.md) | [PHP](../../../PHP/Creational/Singleton/README.md) |

**[C++](../README.md)** 


[Show](./script/page01.md)

The Abstract Factory pattern provides an interface for creating families of related or dependent objects without specifying their concrete classes. In this case, we'll have a UIFactory that can create Button and Scrollbar objects, and we'll have **WindowsUIFactory** and **MacUIFactory** that each implement **UIFactory**.

We start with **WindowsUIFactory**

```
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
This promsts us to create **WindowsButton** and **WindowsScrollbar**

For **WindowsButton** we need to first an interface that we will use for all buttons we deside to add. In our example both **WindowsButton** and **MacButton** shoud be of the *same* type. The interface for that we will call just **Button**.

```
class Button {
public:
    virtual void click() = 0;
};
```
And for 
 the **WindowsButton** we have:
 
```
 class WindowsButton : public Button{
public:
    void click() override {
        std::cout << "WindowsButton scroll." << std::endl;
    }
};
```
now for **WindowsScrollbar** we should create a **Scrollbar** interface

```
class Scrollbar {
public:
    virtual void scroll() = 0;
};
```
Now for the **WindowsScrollbar** we have
```
class WindowsScrollbar : public Scrollbar{
public:
    void scroll() override {
        std::cout << "WindowsScrollbar scroll." << std::endl;
    }
};
```
now let's create some for Macs.. we first start with the **MacUIFactory** which is of **UIFactory** type

```
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
so we need to create the MacButton






[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
