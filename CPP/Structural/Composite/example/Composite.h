//
// Created by ray on 9/2/23.
//

#ifndef EXAMPLE_COMPOSITE_H
#define EXAMPLE_COMPOSITE_H

#include <list>
#include "Component.h"

class Composite : public Component {
    /**
     * @var \SplObjectStorage
     */
protected:
    std::list<Component *> children_;

public:
    void Add(Component *component) override {
        this->children_.push_back(component);
        component->SetParent(this);
    }
    void Remove(Component *component) override {
        children_.remove(component);
        component->SetParent(nullptr);
    }
    bool IsComposite() const override {
        return true;
    }
    std::string Operation() const override {
        std::string result;
        for (const Component *c : children_) {
            if (c == children_.back()) {
                result += c->Operation();
            } else {
                result += c->Operation() + "+";
            }
        }
        return "Branch(" + result + ")";
    }
};
#endif //EXAMPLE_COMPOSITE_H
