//
// Created by ray on 5/22/23.
//

#ifndef SHOW_PROTOTYPE_H
#define SHOW_PROTOTYPE_H

class Prototype {
public:
    virtual ~Prototype(){}
    virtual Prototype* clone() const = 0;
};

#endif //SHOW_PROTOTYPE_H
