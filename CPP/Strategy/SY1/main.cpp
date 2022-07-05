
#include <iostream>
#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
void ClientCode()
{
    Context *context = new Context(new ConcreteStrategyA);
    std::cout << "Client: Strategy is set to normal sorting."<< std::endl;
    context->DoSomeBusinessLogic();
    std::cout << std::endl;
    std::cout << "Client: Strategy is set to reverse sorting."<< std::endl;
    context->set_strategy(new ConcreteStrategyB);
    context->DoSomeBusinessLogic();
    delete context;
}


int main()
{
    ClientCode();
    std::cout << std::endl;
    std::cout << "Welcome to The Ray Code...Be Good!" << std::endl;
    return 0;
}