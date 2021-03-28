#ifndef CHAINOFRESPONSIBILITY_ABSTRACTHANDLER_H
#define CHAINOFRESPONSIBILITY_ABSTRACTHANDLER_H

#include "Handler.h"

class AbstractHandler : public Handler {

private:
    Handler *next_handler_;

public:
    AbstractHandler() : next_handler_(nullptr) {
    }
    Handler *SetNext(Handler *handler) override {
        this->next_handler_ = handler;
        return handler;
    }
    std::string Handle(std::string request) override {
        if (this->next_handler_) {
            return this->next_handler_->Handle(request);
        }

        return {};
    }
};



#endif //CHAINOFRESPONSIBILITY_ABSTRACTHANDLER_H
