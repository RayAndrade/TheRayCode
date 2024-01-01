[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

create **class**
```
CatHandler
```
add
```
#include "AbstractHandler.h"
```
create class
```
class CatHandler  { };
```
extend the class
```
: public AbstractHandler
```
add code
```
public:
    std::string Handle(std::string request)  {
        if (request == "Catnip") {
            return "Cat: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
```


[page 5](./page05.md)
