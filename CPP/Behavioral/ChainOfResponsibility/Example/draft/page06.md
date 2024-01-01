[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

create class
```
MouseHandler
```
at the top
```
#include "AbstractHandler.h"
```
create **class**
```
class MouseHandler { };
```
extend it
```
: public AbstractHandler
```
add code:
```
public:
    std::string Handle(std::string request)  {
        if (request == "Cheese") {
            return "Mouse: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
```

[page 7](./page07.md)
