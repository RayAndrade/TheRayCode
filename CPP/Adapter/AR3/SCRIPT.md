## Advantage

- [ ] It allows two or more previously incompatible objects to interact
- [ ] It allows reusability of existing functionality

## Disadvantage
- [ ] All requests are forwarded so there is a slight in the overhead

## Look at code

We create a class we call **RemoteDisplay**. RemoteDisplay will need to include **<iostream>**.
So our code looks like:

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
Next we move on to **LocalDisplay**. LocalDisplay too will need to include **<iostream>** also. We will create an enum for our color
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

Now we go to createing the **DispayAdapter**. We will need to inlude **LocalDisplay** and **RemoteDisplay**.
We extend the DispayAdapter with the **LocalDisplay** and and **RemoteDisplay**. 
In eace case a color is choosen, that color is rerurned. Our code looks like:
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
to main we will add the includes we need.
```cpp
#include <iostream>
#include <memory>
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
    return 0;
```

When we run it we get:
```run
R: Cold Stone
```
