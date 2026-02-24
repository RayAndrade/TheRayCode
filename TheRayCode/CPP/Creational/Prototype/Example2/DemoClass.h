//
// Created by ray on 7/20/23.
//

#ifndef SHOW_DEMOCLASS_H
#define SHOW_DEMOCLASS_H

#include "ConcretePrototype.h"

class DemoClass
{
private:
    ConcretePrototype* prototype;

public:
    DemoClass(int d):prototype(new ConcretePrototype(d)){}
    DemoClass(const DemoClass& dc): prototype(dc.prototype) {}  // Shallow Copy
    DemoClass& operator=(const DemoClass& dc) // Deep Copy
    {
        if(this != &dc)
        {
            delete prototype;
            prototype = dynamic_cast<ConcretePrototype *>(dc.prototype->clone());
        }
        return *this;
    }
    int getData() { return prototype->getData(); }
    ~DemoClass() { delete prototype; }
};

#endif //SHOW_DEMOCLASS_H
