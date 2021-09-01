#include <iostream>

#include "SystemManagementFactory.h"
#include "UnisysSMFactory.h"

int main() {
    ConfigurationManager *cm;
    OperationManager *om;

    SystemManagementFactory* factory1 = new UnisysSMFactory;

    return 0;
}
