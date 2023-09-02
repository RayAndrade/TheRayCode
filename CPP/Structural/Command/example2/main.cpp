#include "Monster.h"
#include "Horde.h"

int main() {
    // Create individual monsters
    Zombie* zombie = new Zombie();
    Ghost* ghost = new Ghost();

    // Create a horde and add monsters to it
    Horde* horde = new Horde();
    horde->add(zombie);
    horde->add(ghost);

    // Scare using individual monsters
    zombie->scare();
    ghost->scare();

    // Scare using the horde
    horde->scare();

    // Cleanup
    delete horde; // This will also delete the monsters inside it

    return 0;
}
