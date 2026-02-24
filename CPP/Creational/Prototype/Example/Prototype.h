//
// Created by ray on 11/11/23.
//

#ifndef BEGINNING_PROTOTYPE_H
#define BEGINNING_PROTOTYPE_H

class Prototype {
public:
    virtual ~Prototype() {}
    virtual Prototype* clone() const = 0;
};

#endif //BEGINNING_PROTOTYPE_H
