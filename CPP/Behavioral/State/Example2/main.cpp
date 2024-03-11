#include "Developer.h"
#include "CodingState.h"
#include "CoffeeBreakState.h"
#include "SleepingState.h"

int main() {
    CodingState coding;
    CoffeeBreakState coffeeBreak;
    SleepingState sleeping;

    Developer developer(&coding); // Starting with coding.

    developer.liveLife(); // Developer is coding.
    developer.changeState(&coffeeBreak);
    developer.liveLife(); // Time for a coffee break.
    developer.changeState(&sleeping);
    developer.liveLife(); // And now, some well-deserved sleep.

    return 0;
}
