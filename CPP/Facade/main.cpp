
#include "Facade.h"


/**
 * The client code works with complex subsystems through a simple interface
 * provided by the Facade. When a facade manages the lifecycle of the subsystem,
 * the client might not even know about the existence of the subsystem. This
 * approach lets you keep the complexity under control.
 */
void ClientCode(Facade *facade) {
    // ...
    std::cout << facade->Operation();
    // ...
}
/**
 * The client code may have some of the system's objects already created. In
 * this case, it might be worthwhile to initialize the Facade with these objects
 * instead of letting the Facade create new instances.
 */

int main() {
    System1 *system1 = new System1;
    System2 *system2 = new System2;
    Facade *facade = new Facade(system1, system2);
    ClientCode(facade);

    delete facade;

    return 0;
}