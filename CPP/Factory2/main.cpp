#include <iostream>
using namespace std;
/**
 *  https://www.youtube.com/watch?v=XyNWEWUSa5E&list=PLfZqJwaRZ_4P_yqN38sfNQL9O7FDh8vKb
 *  Factory Design Pattern in C++
 *  CppNuts
 *  Failed to complete
 * @return
 */

int main() {
    int type;
    while (1){
        cout << "Enter type of Zero to exit" << endl;
        cin >> type;
        if(!type)
            break;
        Toy *v = ToyFactory(type);
    }
    cout << "Hello, World!" << endl;
    return 0;
}
