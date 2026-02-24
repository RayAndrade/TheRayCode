[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

create **class Mother**
```
Mother
```
at the top
```
#include "Listener.h"
```
for class
```
class Mother : public Listener {  };
```
add code
```
public:
void shareFeelings(const std::string& feeling) override {
    if (feeling == "loss") {
        std::cout << "Mother: I've experienced loss too, but I'm overwhelmed...\n";
        if (nextListener) nextListener->shareFeelings(feeling);
    } else {
        std::cout << "Mother: I wish I could help, but I have my own sorrows...\n";
        if (nextListener) nextListener->shareFeelings(feeling);
    }
}
```



[page 5](./page05.md)
