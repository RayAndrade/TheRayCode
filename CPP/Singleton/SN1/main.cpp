#include <iostream>
#include "Singleton.h"

using std::cout;
using std::endl;

int main(int argc, char* argv[] ) {

    cout << "The Ray Code is AWESOME!!" << endl;

    cout << "The value is the " << Singleton::getInstance()->getSingelton() << endl;

    Singleton::getInstance()->setSingleton("Changed Value");
    cout << "The value is the " << Singleton::getInstance()->getSingelton() << endl;

    return 0;
}
