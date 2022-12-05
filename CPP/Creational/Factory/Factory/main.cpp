#include <iostream>
//using namespace std;

// https://www.youtube.com/watch?v=XyNWEWUSa5E
// Factory Design Pattern in C++
// CppNuts

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