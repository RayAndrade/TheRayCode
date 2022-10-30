[back](./page7.md)

If the choioce os not 1, 2 or 3, the program defaiults to messaging to invalid selection.
If zero is chosen the routine is exited.

Let's put this together in the nain method.

```cpp
#include "ToyFactory.h"

int main() {
// client code starts
    int type;
    while(1){
        std::cout << "Enter type of Zero for exit" << std::endl;
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
[page9](./page9.md)

Now we are ready to compile and run.
here is our run:

```run
Enter type of Zero for exit
1
Preparing Car Parts
combining Car Parts
Assembling Car Parts
Preparing Car Label 
Preparing Car Parts
Enter type of Zero for exit
2
Preparing Plane Parts
combining Plane Parts
Assembling Plane Parts
Preparing Plane Label 
Preparing Plane Parts
Enter type of Zero for exit
3
Preparing Plane Parts
combining Plane Parts
Assembling Plane Parts
Preparing Plane Label 
Preparing Plane Parts
Enter type of Zero for exit
4
Invalid toy type please re-enter type
Enter type of Zero for exit
0
Exit...
Process finished with exit code 0
