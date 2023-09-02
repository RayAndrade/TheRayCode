//
// Created by ray on 9/2/23.
//

#ifndef EXAMPLE_COMPONENT_H
#define EXAMPLE_COMPONENT_H

#include <iostream>

class Component {
protected:
    Component *parent_;

public:
    virtual ~Component() {}
    void SetParent(Component *parent) {
        this->parent_ = parent;
    }
    Component *GetParent() const {
        return this->parent_;
    }
    virtual void Add(Component *component) {}
    virtual void Remove(Component *component) {}
    virtual bool IsComposite() const {
        return false;
    }
    virtual std::string Operation() const = 0;
};

#endif //EXAMPLE_COMPONENT_H
