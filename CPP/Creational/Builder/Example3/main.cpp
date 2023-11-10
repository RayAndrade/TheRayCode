#include <iostream>
#include "Dessert.h"
#include "DessertBuilder.h"
#include "CakeBuilder.h"
#include "DessertDirector.h"



int main() {
    DessertDirector director;
    CakeBuilder cakeBuilder;

    director.construct(cakeBuilder);
    Dessert* dessert = cakeBuilder.getDessert();
    dessert->display();

    delete dessert; // Clean up the allocated memory
    return 0;
}
