[home](./page01.md) | [back](./page06.md) | [next](./page08.md)

So in the **main**

```
#include <iostream>
#include <vector>

#include "Handler.h"
#include "MouseHandler.h"
#include "CatHandler.h"
#include "DogHandler.h"
```
Let's also create some **ClientCode** to hand passing out food or feeding the animales
```
void ClientCode(Handler &handler) {
    std::vector<std::string> food = {"Catnip", "Cheese","Bone", "Cup of coffee"};
    for (const std::string &f : food) {
        std::cout << "Client: Who wants a " << f << "?\n";
        const std::string result = handler.Handle(f);
        if (!result.empty()) {
            std::cout << "  " << result;
        } else {
            std::cout << "  " << f << " was left untouched.\n";
        }
    }
}
```
In the main method we declear some new animals and pass put food.

The client should be able to send a request to any handler, not just the first one in the chain.

```
MouseHandler *mouse = new MouseHandler;
CatHandler *cat = new CatHandler;
DogHandler *dog = new DogHandler;
mouse->SetNext(cat)->SetNext(dog);

std::cout << "Chain: Cat > Mouse > Dog\n\n";
ClientCode(*mouse);
std::cout << "\n";
std::cout << "Subchain: Cat > Dog\n\n";
ClientCode(*cat);

delete mouse;
delete cat;
delete dog;
```


[page 8](./page08.md)
