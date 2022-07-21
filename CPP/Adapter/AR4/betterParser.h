//
// Created by ray on 7/16/22.
//
// t = 7:35


#ifndef AR4_BETTERPARSER_H
#define AR4_BETTERPARSER_H

#include "IbetterParser.h"

class betterParser : public IbetterParser{
    void parser(){
        std::cout << "Class: betterPArser-Fun: parser, i am Parser " << std::endl;
    }
    void firstLevelParser(){
        std::cout << "Class: betterPArser-Fun: parser, i am firstParser " << std::endl;
    }
    void secondLevelParser(){
        std::cout << "Class: betterPArser-Fun: parser, i am secondParser " << std::endl;
    }
};

#endif //AR4_BETTERPARSER_H
