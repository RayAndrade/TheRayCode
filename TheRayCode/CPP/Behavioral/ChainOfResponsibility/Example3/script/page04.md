[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

Let's create a
```
MouseHandler
```
at the top we add:
```
#include "AbstractHandler.h"
```
so we can
```
class MouseHandler : public AbstractHandler  {  };
```
with code:
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


[page 5](./page05.md)
