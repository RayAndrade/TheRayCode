#include <iostream>
#include <vector>

#include "Handler.h"
#include "MouseHandler.h"
#include "CatHandler.h"
#include "DogHandler.h"


void ClientCode(Handler &handler) {
    std::vector<std::string> food = {"Catnip", "Cheese","Bone", "Cup of coffee"};
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
    MouseHandler *mouse = new MouseHandler;
    CatHandler *cat = new CatHandler;
    DogHandler *dog = new DogHandler;
    mouse->SetNext(cat)->SetNext(dog);

    std::cout << "Chain: Cat > Mouse > Dog\n\n";
    ClientCode(*mouse);
    std::cout << "\n";
    std::cout << "Subchain: Cat > Dog\n\n";
    ClientCode(*cat);

    delete mouse;
    delete cat;
    delete dog;
    return 0;
}
