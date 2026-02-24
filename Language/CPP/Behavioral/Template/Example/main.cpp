#include "Tea.h"
#include "Coffee.h"

int main() {
    std::cout << "Making tea...\n";
    Tea tea;
    tea.prepareRecipe();

    std::cout << "\nMaking coffee...\n";
    Coffee coffee;
    coffee.prepareRecipe();

    return 0;
}
