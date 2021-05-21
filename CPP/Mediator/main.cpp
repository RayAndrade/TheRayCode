
#include "ConcreteMediator.h"

void ClientCode() {
    FirstComponent *c1 = new FirstComponent;
    SecondComponent *c2 = new SecondComponent;
    ConcreteMediator *mediator = new ConcreteMediator(c1, c2);
    std::cout << "Client triggers operation A.\n";
    c1->DoAction();
    std::cout << "\n";
    std::cout << "Client triggers operation D.\n";
    c2->DoD();

    delete c1;
    delete c2;
    delete mediator;
}



int main() {

    ClientCode();
    //std::cout << "The Ray Code is AWESOME!!!" << std::endl;
    return 0;
}
