[home](./page01.md)

we start with createing  our **RemoteDisplay** enum.

```
RemoteDisplay
```
the class
```
class RemoteDisplay{  };
```

include add the

```
#include <iostream>
```
the enum
```
public:
    enum Color{
        Red = 0,
        Blue = 1,
        Green = 2,
        Yellow = 3
    };
```

and we add

```
virtual void Message(Color color, std::string message) = 0;
```

[page 2](./page02.md)
