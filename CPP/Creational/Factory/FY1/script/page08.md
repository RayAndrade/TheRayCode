[back](./page07.md)

If the choioce os not 1, 2 or 3, the program defaiults to messaging to invalid selection.
If zero is chosen the routine is exited.

Let's put this together in the nain method.

```cpp
  #include "ToyFactory.h"

int main() {
// client code starts

    int type;
    while(1){
        std::cout << "1 Car, 2 Bike, 3 Plane Enter type or Zero for exit" << std::endl;
        std::cin >> type;
        if(!type)
            break;
        Toy *v = ToyFactory::createToy(type);
        if(v){
            v->showProduct();
            delete v;
        }
    }
    std::cout << "Exit...";


//Client code ends
    return 0;
}
```
[page9](./page09.md)

[home](./script.md)
