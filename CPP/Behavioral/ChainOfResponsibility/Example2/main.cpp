#include "Child.h"
#include "Mother.h"
#include "Grandmother.h"

int main() {
    auto child = std::make_shared<Child>();
    auto mother = std::make_shared<Mother>();
    auto grandmother = std::make_shared<Grandmother>();

    child->setNext(mother);
    mother->setNext(grandmother);

    std::cout << "Sharing a feeling of loneliness:\n";
    child->shareFeelings("loneliness");

    std::cout << "\nSharing a feeling of loss:\n";
    child->shareFeelings("loss");

    return 0;
}
