## Advantage

- [ ] It allows two or more previously incompatible objects to interact
- [ ] It allows reusability of existing functionality

## Disadvantage
- [ ] All requests are forwarded so there is a slight in the overhead

## Look at code
To create an understanding of the **Adapter** design pattern, I will provide an example for you.
First we will create a class that we call the **RemoteDisplay**. The RemoteDisplay will need to include the **<iostream>** because we are using **std**.
Our code looks like:

```c++
#include <iostream>

class RemoteDisplay{
public:
    void MsgRed(std::string mrssage) const;
    void MsgBlue(std::string message) const;
    void MsgGreen(std::string message) const;
    void MsgYellow(std::string message) const;
};
```
Next we create a **LocalDisplay** class. LocalDisplay too will need to include **<iostream>** also. We will create an enum for our color
selection and we message out which color is selected for our demo.
```cpp
#include <iostream>

class LocalDisplay{
public:
    enum Color{
        Red = 0,
        Blue = 1,
        Green = 2,
        Yellow = 3
    };
    virtual void Message(Color color, std::string message) = 0;
};
```
Our next clss to create will be the **DispayAdapter**.
In the **DispayAdapter** we will need to inlude **LocalDisplay** and **RemoteDisplay**.
We extend the **Dispay**Adapter with the **LocalDisplay** and and **RemoteDisplay**. 
When the color is choosen
The code looks like:
```cpp
#include "LocalDisplay.h"
#include "RemoteDisplay.h"

class DispayAdapter : public LocalDisplay, public RemoteDisplay{
    virtual void Message(Color color, std::string message)
    {
        switch(color)
        {
            case Red:
                MsgRed(message);
                break;
            case Blue:
                MsgBlue (message);
                break;
            case Green:
                MsgGreen (message);
                break;
            case Yellow:
                MsgYellow (message);
                break;
            default:
                std::cout << "Error: Message format not supported" << std::endl;
                break;
        }
    }
};

```
We put this all together in main
we will add the includes we need.
```cpp
#include <iostream>
#include <memory>
```
I will be using the memory libray function the **unique_ptr**

we will need these classes for our demostration
```cpp
#include "RemoteDisplay.h"
#include "LocalDisplay.h"
#include "DispayAdapter.h"
```
we add some client code to main:


```cpp
void RemoteDisplay::MsgRed(std::string message) const {
    std::cout << "R: " << message << std::endl;
}
void RemoteDisplay::MsgBlue(std::string message) const {
    std::cout << "B: " << message << std::endl;
}
void RemoteDisplay::MsgGreen(std::string message) const {
    std::cout << "G: " << message << std::endl;
}
void RemoteDisplay::MsgYellow(std::string message) const {
    std::cout << "Y: " << message << std::endl;
}
```

and we put it all together in the main method:
```cpp
    std::unique_ptr<LocalDisplay> displayPtr(new DispayAdapter);
    displayPtr->Message(displayPtr->Red,"Cold Stone");
    displayPtr->Message(displayPtr->Blue,"Earth Stone");
    displayPtr->Message(displayPtr->Green,"Mars Stone");
    displayPtr->Message(displayPtr->Yellow,"Yogi Stone");   

    return 0;
```

When we run it we get:
```run
R: Cold Stone
B: Earth Stone
G: Mars Stone
Y: Yogi Stone
```
