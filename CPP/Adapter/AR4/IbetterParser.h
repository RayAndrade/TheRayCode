//
// Created by ray on 7/16/22.
//
//
#ifndef AR4_IBETTERPARSER_H
#define AR4_IBETTERPARSER_H

#include <iostream>

class IbetterParser{
public:
    void virtual parser() =0;
    void virtual firstLevelParser() =0;
    void virtual secondLevelParser() =0;
};

#endif //AR4_IBETTERPARSER_H
