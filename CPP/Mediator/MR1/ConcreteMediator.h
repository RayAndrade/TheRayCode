//
// Created by ray on 8/18/20.
//

#ifndef SHOW_CONCRETEMEDIATOR_H
#define SHOW_CONCRETEMEDIATOR_H

#include "FirstComponent.h"
#include "SecondComponent.h"

class ConcreteMediator : public Mediator   {

private:
    FirstComponent *component1_;
    SecondComponent *component2_;

public:
    ConcreteMediator(FirstComponent *c1, SecondComponent *c2) : component1_(c1), component2_(c2) {
        this->component1_->set_mediator(this);
        this->component2_->set_mediator(this);
    }
    void Notify(BaseComponent *sender, std::string event) const override {
        if (event == "A") {
            std::cout << "Mediator reacts on A and triggers following operations:\n";
            this->component2_->DoC();
        }
        if (event == "D") {
            std::cout << "Mediator reacts on the Deed and triggers following operations:\n";
            this->component1_->DoB();
            this->component2_->DoC();
        }
    }
};


#endif //SHOW_CONCRETEMEDIATOR_H
