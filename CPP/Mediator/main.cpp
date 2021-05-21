
#include "ConcreteMediator.h"

void ClientCode() {
    FirstComponent *c1 = new FirstComponent;
    Component2 *c2 = new Component2;
    ConcreteMediator *mediator = new ConcreteMediator(c1, c2);
    std::cout << "Client triggers operation A.\n";
    c1->DoA();
    std::cout << "\n";
    std::cout << "Client triggers operation D.\n";
    c2->DoD();

    delete c1;
    delete c2;
    delete mediator;
}



int main() {

    ClientCode();
    std::cout << "The Ray Code is AWESOME!!!" << std::endl;
    return 0;
}
