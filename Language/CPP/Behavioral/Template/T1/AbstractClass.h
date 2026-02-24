//
// Created by ray on 9/9/20.
//

#ifndef TEMPLATE_ABSTRACTCLASS_H
#define TEMPLATE_ABSTRACTCLASS_H

#include <iostream>

class AbstractClass {

/**
* The template method defines the skeleton of an algorithm.
*/
public:
    void TemplateMethod() const {
        this->BaseOperation1();
        this->RequiredOperations1();
        this->BaseOperation2();
        this->Hook1();
        this->RequiredOperation2();
        this->BaseOperation3();
        this->Hook2();
    }

/**
* These operations already have implementations.
*/
protected:
    void BaseOperation1() const {
        std::cout << "AbstractClass says: I am doing the bulk of the work\n";
    }
    void BaseOperation2() const {
        std::cout << "AbstractClass says: But I let subclasses override some operations\n";
    }
    void BaseOperation3() const {
        std::cout << "AbstractClass says: But I am doing the bulk of the work anyway\n";
    }
    /**
    * These operations have to be implemented in subclasses.
    */
    virtual void RequiredOperations1() const = 0;
    virtual void RequiredOperation2() const = 0;
    /**
     * These are "hooks." Subclasses may override them, but it's not mandatory
     * since the hooks already have default (but empty) implementation. Hooks
     * provide additional extension points in some crucial places of the
     * algorithm.
     */
    virtual void Hook1() const {}
    virtual void Hook2() const {}


};


#endif //TEMPLATE_ABSTRACTCLASS_H
