//
// Created by ray on 7/16/22.
//

#ifndef AR4_CPARSER_H
#define AR4_CPARSER_H

#include "Iparser.h"

class cParser : public Iparser{
public:
    void parser(){
        std::cout << "Class : cParser-Fun :parser, I am a parser " << std::endl;
    }
    void parse(){
        std::cout << "Class : cParser-Fun :parser, I am a parse  " << std::endl;
    }
};

#endif //AR4_CPARSER_H
