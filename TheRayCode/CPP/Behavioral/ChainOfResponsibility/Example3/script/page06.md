[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

The dog wants the bone.

so the **class**
```
DogHandler
```
has the following code
```
#include "AbstractHandler.h"

class DogHandler : public AbstractHandler{
public:
    std::string Handle(std::string request)  {
        if (request == "Bone") {
            return "Dog: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
};
```


[page 7](./page07.md)
