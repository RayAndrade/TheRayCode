[back](./page06.md)


Now let's create a **ToyFactory**. We will use a switch statement create to the desired **Toy** type.

```
ToyFactory
```

```
#include "SantasBag.h"
```

```
class ToyFactory {  };
```

and here is the code for the **ToyFactory**

```
public:
static Toy * createToy(int type){
    Toy *toy = NULL;

    switch(type){
        case 1:{
            toy = new Car;
            break;
        }
        case 2:{
            toy = new Bike;
            break;
        }
        case 3:{
            toy = new Plane;
            break;
        }
        default:{
            std::cout << "Invalid toy type please re-enter type" << std::endl;
            return NULL;
        }
    }
    toy->prepareParts();
    toy->combineParts();
    toy->assembleParts();
    toy->applyLabel();
    return toy;
```


[page8](./page08.md)

