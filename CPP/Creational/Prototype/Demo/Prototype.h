//
// Created by ray on 5/15/23.
//

#ifndef DEMO_PROTOTYPE_H
#define DEMO_PROTOTYPE_H

class Prototype {
public:
    virtual ~Prototype(){}
    virtual Prototype* clone() const = 0;
};

#endif //DEMO_PROTOTYPE_H
