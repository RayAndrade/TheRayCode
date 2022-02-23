#include <iostream>

// https://www.youtube.com/watch?v=_fYW9iabyEo
// The Factory Method and Abstract Factory Design Patterns in C++ pt-1
// Eduard Karesli

#include "vehicle.h"
#include "factory.h"

using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    Vehicle* p = Factory::createInstance(1);
    if (p)
    {
        p->doRun();
    }

    Vehicle* q = Factory::createInstance(2);
    if (q)
    {
        q->doRun();
    }

    int result = Factory::destroyInstance(p);
    cout << "Destroying p: " << result << endl;

    result = Factory::destroyInstance(q);
    cout << "Destroying q: " << result << endl;

    return 0;
}