//
// Created by ray on 7/16/22.
//

#ifndef AR4_ADAPTER_H
#define AR4_ADAPTER_H

#include "Iparser.h"
#include "IbetterParser.h"

class Adapter : public Iparser{
public:
    IbetterParser *bParserPtr;
    Adapter(IbetterParser *obj){
        bParserPtr = obj;
    }
    void  parser(){
        bParserPtr->parser();
    }
    void parse(){
        bParserPtr->secondLevelParser();
    }
};

#endif //AR4_ADAPTER_H
