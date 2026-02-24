[up](../README.md)


Alright, let's make this a bit more whimsical!

Imagine an `EnchantedBook` that remembers the tales it tells. Each tale (or story) it tells is stored as a `FairyTaleMemento`. There's a magical creature named `StoryKeeper` that remembers all the tales the book has told.

**1. FairyTaleMemento.h:**

```cpp
// FairyTaleMemento.h
#ifndef FAIRY_TALE_MEMENTO_H
#define FAIRY_TALE_MEMENTO_H

#include <string>

class FairyTaleMemento {
private:
    std::string tale;

public:
    FairyTaleMemento(const std::string &t) : tale(t) {}

    std::string getTale() const {
        return tale;
    }
};

#endif // FAIRY_TALE_MEMENTO_H
```

**2. EnchantedBook.h:**

```cpp
// EnchantedBook.h
#ifndef ENCHANTED_BOOK_H
#define ENCHANTED_BOOK_H

#include "FairyTaleMemento.h"
#include <string>

class EnchantedBook {
private:
    std::string currentTale;

public:
    void tellTale(const std::string &t) {
        currentTale = t;
        std::cout << "EnchantedBook: Telling tale - " << t << std::endl;
    }

    FairyTaleMemento saveTale() {
        std::cout << "EnchantedBook: Saving this tale to remember later." << std::endl;
        return FairyTaleMemento(currentTale);
    }

    void recallTale(const FairyTaleMemento &m) {
        currentTale = m.getTale();
        std::cout << "EnchantedBook: Recalling the tale - " << currentTale << std::endl;
    }
};

#endif // ENCHANTED_BOOK_H
```

**3. StoryKeeper.h:**

```cpp
// StoryKeeper.h
#ifndef STORY_KEEPER_H
#define STORY_KEEPER_H

#include "FairyTaleMemento.h"
#include <vector>

class StoryKeeper {
private:
    std::vector<FairyTaleMemento> talesLog;

public:
    void logTale(const FairyTaleMemento &m) {
        talesLog.push_back(m);
    }

    FairyTaleMemento getTale(int index) {
        return talesLog[index];
    }
};

#endif // STORY_KEEPER_H
```

**4. main.cpp:**

```cpp
// main.cpp
#include <iostream>
#include "EnchantedBook.h"
#include "StoryKeeper.h"

int main() {
    EnchantedBook magicBook;
    StoryKeeper loreMaster;

    magicBook.tellTale("Once upon a time, in a faraway kingdom...");
    loreMaster.logTale(magicBook.saveTale());

    magicBook.tellTale("In a dense, mystical forest, there lived a wise old owl...");
    loreMaster.logTale(magicBook.saveTale());

    magicBook.tellTale("Deep in the mountains, a dragon slept for a thousand years...");
    loreMaster.logTale(magicBook.saveTale());

    // Recalling tales
    magicBook.recallTale(loreMaster.getTale(1)); // Should recall the owl story
    magicBook.recallTale(loreMaster.getTale(0)); // Should recall the kingdom story

    return 0;
}
```

**Explanations:**

1. **FairyTaleMemento**:
   - A memory of a tale told by the `EnchantedBook`.

2. **EnchantedBook**:
   - `tellTale`: Tells a new tale.
   - `saveTale`: Saves the current tale as a memento.
   - `recallTale`: Recalls a tale from a given memento.

3. **StoryKeeper**:
   - A magical being that keeps track of all the tales told.
   - `logTale`: Logs a new tale.
   - `getTale`: Fetches a specific tale from its memory.

4. **main.cpp**:
   - Demonstrates the book telling different tales, saving them, and then recalling them.

When you compile and run the whimsical `main.cpp`, the `EnchantedBook` will share tales and then recall some with the help of the `StoryKeeper`.
