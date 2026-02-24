#include <iostream>
#include "Sandwich.h"
#include "SandwichBuilder.h"
#include "ClubSandwichBuilder.h"
#include "SandwichDirector.h"


int main() {

    SandwichDirector director;
    ClubSandwichBuilder clubBuilder;

    director.construct(clubBuilder);
    Sandwich* sandwich = clubBuilder.getSandwich();
    sandwich->display();

    delete sandwich; // Remember to free resources!

    return 0;
}
