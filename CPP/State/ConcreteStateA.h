#ifndef STATE_CONCRETESTATEA_H
#define STATE_CONCRETESTATEA_H
#include "State.h"
/**
 * Concrete States implement various behaviors, associated with a state of the
 * locContext.
 */
class ConcreteStateA : public State {
public:
    void Handle1() override;

    void Handle2() override {
        std::cout << "ConcreteStateA handles request2.\n";
    }
};


#endif //STATE_CONCRETESTATEA_H
