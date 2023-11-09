#include <iostream>
#include "Pizza.h"
#include "PizzaBuilder.h"
#include "HawaiianPizzaBuilder.h"
#include "PizzaDirector.h"

int main() {
    PizzaDirector director;
    HawaiianPizzaBuilder hawaiianBuilder;

    director.construct(hawaiianBuilder);
    Pizza* pizza = hawaiianBuilder.getPizza();
    pizza->display();

    delete pizza; // Don't forget to deallocate memory!

    return 0;
}
