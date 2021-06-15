#ifndef STATE_CONCRETESTATEB_H
#define STATE_CONCRETESTATEB_H
#include "State.h"
class ConcreteStateB : public State {
public:
    void Handle1() override {
        std::cout << "ConcreteStateB handles request1.\n";
    }
    void Handle2() override {
        std::cout << "ConcreteStateB handles request2.\n";
        std::cout << "ConcreteStateB wants to change the state of the context.\n";
        this->context_->TransitionTo(new ConcreteStateA);
    }
};
#endif //STATE_CONCRETESTATEB_H
