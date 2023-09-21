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
