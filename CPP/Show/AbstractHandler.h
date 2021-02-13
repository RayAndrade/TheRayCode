#ifndef CHAINOFRESPONSIBILITY_ABSTRACTHANDLER_H
#define CHAINOFRESPONSIBILITY_ABSTRACTHANDLER_H

#include "Handler.h"

class AbstractHandler : public Handler {
public:
    AbstractHandler() : next_handler_(nullptr) { }
    Handler *SetNext(Handler *handler) override {
        return nullptr;
    }

private:
    Handler *next_handler_;


};



#endif //CHAINOFRESPONSIBILITY_ABSTRACTHANDLER_H
