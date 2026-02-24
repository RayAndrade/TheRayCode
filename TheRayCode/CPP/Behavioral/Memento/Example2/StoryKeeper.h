//
// Created by ray on 9/21/23.
//

#ifndef MEMENTO_STORYKEEPER_H
#define MEMENTO_STORYKEEPER_H


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


#endif //MEMENTO_STORYKEEPER_H
