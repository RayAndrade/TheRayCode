#ifndef STATE_CONTEXT_H
#define STATE_CONTEXT_H
#include "State.h"
/**
 * The locContext defines the interface of interest to clients. It also maintains a
 * reference to an instance of a State subclass, which represents the current
 * state of the locContext.
 */
class locContext {
    /**
     * @var State A reference to the current state of the locContext.
     */
private:
    State *state_;

public:
    locContext(State *state) : state_(nullptr) {
        this->TransitionTo(state);
    }
    ~locContext() {
        delete state_;
    }
    /**
     * The locContext allows changing the State object at runtime.
     */
    void TransitionTo(State *state) {
        std::cout << "locContext: Transition to " << typeid(*state).name() << ".\n";
        if (this->state_ != nullptr)
            delete this->state_;
        this->state_ = state;
        this->state_->set_context(this);
    }
    /**
     * The locContext delegates part of its behavior to the current State object.
     */
    void Request1() {
        this->state_->Handle1();
    }
    void Request2() {
        this->state_->Handle2();
    }
};
#endif //STATE_CONTEXT_H
