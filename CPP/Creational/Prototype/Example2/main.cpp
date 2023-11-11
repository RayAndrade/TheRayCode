#include <iostream>
#include "DemoClass.h"

int main()
{
    // Creating original object
    DemoClass originalObj(10);
    std::cout << "Original Object's data: " << originalObj.getData() << std::endl;

    // Creating a shallow copy
    DemoClass shallowCopyObj = originalObj;
    std::cout << "Shallow Copy Object's data: " << shallowCopyObj.getData() << std::endl;

    // Creating a deep copy
    DemoClass deepCopyObj(0);
    deepCopyObj = originalObj;
    std::cout << "Deep Copy Object's data: " << deepCopyObj.getData() << std::endl;

    return 0;
}