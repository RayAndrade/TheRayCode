//
// Created by ray on 2/6/22.
//

#ifndef SHOW_PROTOTYPE_H
#define SHOW_PROTOTYPE_H

#include <string>
#include <iostream>

class Prototype {
protected:
    std::string prototype_name_;
    float prototype_field_;

public:
    Prototype() {}
    Prototype(std::string prototype_name)
            : prototype_name_(prototype_name) {
    }
    virtual ~Prototype() {}
    virtual Prototype *Clone() const = 0;
    virtual void Method(float prototype_field) {
        this->prototype_field_ = prototype_field;
        std::cout << "Call Method from " << prototype_name_ << " with field : " << prototype_field << std::endl;
    }
};


#endif //SHOW_PROTOTYPE_H
