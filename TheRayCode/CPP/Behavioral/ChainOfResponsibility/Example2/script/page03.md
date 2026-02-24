[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

Create **class Child**
```
Child
```
include
```
#include "Listener.h"
```
add class structure
```
class Child : public Listener {  };
```
add code
```
public:
void shareFeelings(const std::string& feeling) override {
    if (feeling == "loneliness") {
        std::cout << "Child: I feel lonely too, but I don't know how to help...\n";
        if (nextListener) nextListener->shareFeelings(feeling);
    } else {
        std::cout << "Child: I'm just a kid, maybe someone else will understand better...\n";
        if (nextListener) nextListener->shareFeelings(feeling);
    }
}
```

[page 4](./page04.md)
