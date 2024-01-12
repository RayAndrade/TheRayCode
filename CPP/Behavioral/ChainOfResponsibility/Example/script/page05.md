[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

clreate **class**
```
DogHandler
```
at the top
```
#include "AbstractHandler.h"
```
create class
```
class DogHandler  { };
```
extend the class
```
: public AbstractHandler
```
add code
```
public:
    std::string Handle(std::string request)  {
        if (request == "Bone") {
            return "Dog: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
```


[page 6](./page06.md)
