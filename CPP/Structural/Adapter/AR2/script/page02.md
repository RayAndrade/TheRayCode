[home](./page01.md)

[back](./page01.md)

Next we create the class 

```
LocalDisplay
```
add the emum

```
#include <iostream>
```
the class
```
class LocalDisplay{  };
```

add
```
public:
    enum Color{
        Red = 0,
        Blue = 1,
        Green = 2,
        Yellow = 3
    };
```
add
```
virtual void Message(Color color, std::string message) = 0;
```



[page 3](./page03.md)
