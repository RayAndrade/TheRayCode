#include <iostream>
#include <vector>

#include "Handler.h"
#include "MonkeyHandler.h"
#include "SquirrelHandler.h"
#include "DogHandler.h"


void ClientCode(Handler &handler) {
    std::vector<std::string> food = {"Nut", "Banana", "Bone" ,"Cup of coffee"};
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
    SquirrelHandler *squirrel = new SquirrelHandler;
    DogHandler *dog = new DogHandler;
    monkey->SetNext(squirrel)->SetNext(dog);

    /**
     * The client should be able to send a request to any handler, not just the
     * first one in the chain.
     */
    std::cout << "Chain: Monkey > Squirrel > Dog\n\n";
    ClientCode(*monkey);
    std::cout << "\n";
    std::cout << "Subchain: Squirrel > Dog\n\n";
    ClientCode(*squirrel);

    delete monkey;
    delete squirrel;
    delete dog;

    std::cout << "The Ray Code is AWESOME!!!\n";
    return 0;
}
