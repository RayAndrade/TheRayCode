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