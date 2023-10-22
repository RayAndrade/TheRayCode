#include <iostream>
#include "ConcreteMealFactory.h"
#include "LunchFactory.h"
#include "DinnerFactory.h"
#include "DessertFactory.h"
//#include "ConcreteMealFactory.h"

int main() {
    // Create concrete factories
    BreakfastFactory breakfastFactory;
    LunchFactory lunchFactory;
    DinnerFactory dinnerFactory;
    DessertFactory dessertFactory;

    // Create meals using the factories
    Meal* breakfast = breakfastFactory.createMeal();
    Meal* lunch = lunchFactory.createMeal();
    Meal* dinner = dinnerFactory.createMeal();
    Meal* dessert = dessertFactory.createMeal();

    // Output the names of the meals
    std::cout << "1) " << breakfast->getName() << std::endl;
    std::cout << "2) " << lunch->getName() << std::endl;
    std::cout << "3) " << dinner->getName() << std::endl;
    std::cout << "4) " << dessert->getName() << std::endl;

    // Cleanup
    delete breakfast;
    delete lunch;
    delete dinner;
    delete dessert;
    return 0;
}
