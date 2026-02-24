#include "Wizard.h"
#include "Spellbook.h"

int main() {
    Wizard merlin;
    Spellbook grimoire;

    merlin.conjure("RainbowRays");
    grimoire.addPotion(merlin.brewPotion());

    merlin.conjure("StarryNight");
    grimoire.addPotion(merlin.brewPotion());

    merlin.conjure("SunnyDelight");
    grimoire.addPotion(merlin.brewPotion());

    // Drinking potions to recall spells
    merlin.drinkPotion(grimoire.getPotion(1)); // Should recall StarryNight
    merlin.drinkPotion(grimoire.getPotion(0)); // Should recall RainbowRays

    return 0;
}
