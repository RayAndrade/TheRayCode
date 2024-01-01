[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

Create class
```
MouseHandler
```
at the top add
```
#include "AbstractHandler.h"
```
create **class**
```
class MouseHandler { };
```
extend the class
```
: public AbstractHandler
```
add code
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



[page 4](./page04.md)
