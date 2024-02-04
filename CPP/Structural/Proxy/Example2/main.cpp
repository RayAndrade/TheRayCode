#include "WizardProxy.h"
#include <iostream>

int main() {
    WizardProxy proxy;
    proxy.castSpell("Fireball");
    proxy.castSpell("Levitation");

    std::cout << "End of the magical demonstration. Remember, with great power comes great responsibility... and sometimes a sneaky proxy." << std::endl;

    return 0;
}
