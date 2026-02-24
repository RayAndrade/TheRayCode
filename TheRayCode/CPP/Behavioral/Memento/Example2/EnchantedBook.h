//
// Created by ray on 9/21/23.
//

#ifndef MEMENTO_ENCHANTEDBOOK_H
#define MEMENTO_ENCHANTEDBOOK_H

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

#endif //MEMENTO_ENCHANTEDBOOK_H
