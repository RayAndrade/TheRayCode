#include <iostream>
#include "SportsCarBuilder.h"

int main() {
    SportsCarBuilder builder;
    builder.setEngine("V8");
    builder.setSeats("Leather");
    builder.setWheels("Alloy");

    Car* car = builder.getCar();

    std::cout << "Car built with: "
              << car->Engine << ", "
              << car->Seats << ", "
              << car->Wheels << std::endl;

    delete car;
    std::cout << "The Ray Code is AWESOME!!!" << std::endl;
    return 0;
}
