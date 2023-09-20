
#include "GamingComputer.h"
#include "WorkstationComputer.h"

int main() {
    GamingComputer myGamingPC;
    WorkstationComputer myWorkstation;

    std::cout << "Assembling gaming computer:" << std::endl;
    myGamingPC.assembleComputer();

    std::cout << "\nAssembling workstation computer:" << std::endl;
    myWorkstation.assembleComputer();

    return 0;
}
