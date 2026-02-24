[up](../README.md)

Alright, let's add a whimsical twist to the Memento design pattern:

**Order of Creation:**
1. `Potion.h`: This class will store the magic essence of the `Wizard`.
2. `Wizard.h`: This magical being conjures potions and also consumes them to remember spells.
3. `Spellbook.h`: Responsible for storing multiple potions to help the wizard remember many spells.
4. `main.cpp`: The enchanting tale unfolds here.

**1. Potion.h:**

```cpp
// Potion.h
#ifndef POTION_H
#define POTION_H

#include <string>

class Potion {
private:
    std::string spell;

public:
    Potion(const std::string &s) : spell(s) {}

    std::string getSpell() const {
        return spell;
    }
};

#endif // POTION_H
```

**2. Wizard.h:**

```cpp
// Wizard.h
#ifndef WIZARD_H
#define WIZARD_H

#include "Potion.h"
#include <iostream>
#include <string>

class Wizard {
private:
    std::string currentSpell;

public:
    void conjure(const std::string &s) {
        currentSpell = s;
        std::cout << "Wizard: Conjuring the spell " << s << "!" << std::endl;
    }

    Potion brewPotion() {
        std::cout << "Wizard: Brewing a potion to remember the spell." << std::endl;
        return Potion(currentSpell);
    }

    void drinkPotion(const Potion &p) {
        currentSpell = p.getSpell();
        std::cout << "Wizard: Recalling the spell after drinking potion: " << currentSpell << "!" << std::endl;
    }
};

#endif // WIZARD_H
```

**3. Spellbook.h:**

```cpp
// Spellbook.h
#ifndef SPELLBOOK_H
#define SPELLBOOK_H

#include "Potion.h"
#include <vector>

class Spellbook {
private:
    std::vector<Potion> potions;

public:
    void addPotion(const Potion &p) {
        potions.push_back(p);
    }

    Potion getPotion(int index) {
        return potions[index];
    }
};

#endif // SPELLBOOK_H
```

**4. main.cpp:**

```cpp
// main.cpp
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
```

**Explanations:**

1. **Potion**:
   - Holds a spell. Think of it as a bottled spell.

2. **Wizard**:
   - `conjure`: The wizard casts a spell.
   - `brewPotion`: Bottles up the current spell into a potion.
   - `drinkPotion`: Drinks a potion to recall a spell.

3. **Spellbook**:
   - Holds a collection of potions. It's like a magical book of bottled spells.
   - `addPotion`: Adds a new potion to the book.
   - `getPotion`: Fetches a specific potion from the book.

4. **main.cpp**:
   - Tells the story of Merlin, a whimsical wizard who conjures spells, brews them into potions, and recalls spells by drinking those potions with the help of his magical grimoire (spellbook).

Compile and run `main.cpp`, and you'll witness the magical adventures of Merlin and his spellbook!
