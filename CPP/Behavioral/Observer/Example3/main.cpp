#include "Subject.h"
#include "ConcreteObservers.h"

int main() {
    Monster monster;

    Hunter hunter;
    Villager villager;

    monster.attach(&hunter);
    monster.attach(&villager);

    monster.howl(); // Both Hunter and Villager will react to this event.
    return 0;
}
