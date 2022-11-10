[back](./page06.md)


Now to create each one of theses objecet I create a **ToyFactory**. The toy factory consist of a switch statement that will swithc to the desired type of **Toy**

```cpp
 #include "SantasBag.h"

class ToyFactory{
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
    }
};
```

[page8](./page08.md)

