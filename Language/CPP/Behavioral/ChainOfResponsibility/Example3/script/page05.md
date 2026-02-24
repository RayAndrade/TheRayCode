[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

The cat is addicted to Catnip. So we make a
```
CatHandler
```
at the top
```
#include "AbstractHandler.h"
```
with code:
```

class CatHandler: public AbstractHandler {
public:
    std::string Handle(std::string request)  {
        if (request == "Catnip") {
            return "Cat: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
};
```


[page 6](./page06.md)
