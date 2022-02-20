#include <iostream>
using namespace std;

// https://www.youtube.com/watch?v=XyNWEWUSa5E
// Factory Design Pattern in C++
// CppNuts

#include "ToyFactory.cpp"

int main() {
// client code starts
   int type;
   while(1){
        cout << "Enter type of Zero for exit" << endl;
        cin >> type;
        if(!type)
            break;
        Toy *v = ToyFactory::createToy(type);
        if(v){
            v->showProduct();
            delete v;
        }
   }
   cout << "Exit...";
//Client code ends
    return 0;
}
