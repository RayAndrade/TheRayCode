#include <iostream>
#include "Singleton.h"

using std::cout;
using std::endl;

int main(int argc, char* argv[] ) {

    cout << "The Ray Code is AWESOME!!" << endl;

    cout << "Boss is " << Singleton::getInstance()->getBoss() << endl;

    Singleton::getInstance()->setBoss("Bill Gates");
    cout << "Boss is " << Singleton::getInstance()->getBoss() << endl;

    return 0;
}
