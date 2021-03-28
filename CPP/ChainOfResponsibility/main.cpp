#include <iostream>
#include <vector>

#include "Handler.h"
#include "MonkeyHandler.h"
#include "RabbitHandler.h"
#include "DogHandler.h"


void ClientCode(Handler &handler) {
    std::vector<std::string> food = {"Carrot", "Banana","Bone", "Cup of coffee"};
    for (const std::string &f : food) {
        std::cout << "Client: Who wants a " << f << "?\n";
        const std::string result = handler.Handle(f);
        if (!result.empty()) {
            std::cout << "  " << result;
        } else {
            std::cout << "  " << f << " was left untouched.\n";
        }
    }
}




int main() {

    MonkeyHandler *monkey = new MonkeyHandler;
    RabbitHandler *rabbit = new RabbitHandler;
    DogHandler *dog = new DogHandler;
    monkey->SetNext(rabbit)->SetNext(dog);

    /**
     * The client should be able to send a request to any handler, not just the
     * first one in the chain.
     */
    std::cout << "Chain: Monkey > Rabbit > Dog\n\n";
    ClientCode(*monkey);
    std::cout << "\n";
    std::cout << "Subchain: Rabbit > Dog\n\n";
    ClientCode(*rabbit);

    delete monkey;
    delete rabbit;
    delete dog;

    std::cout << "The Ray Code is AWESOME!!!\n";
    return 0;
}