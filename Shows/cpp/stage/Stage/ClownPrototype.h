//
// Created by ray on 11/11/23.
//

#ifndef BEGINNING_CLOWNPROTOTYPE_H
#define BEGINNING_CLOWNPROTOTYPE_H

class ClownPrototype {
public:
    virtual ~ClownPrototype() {}
    virtual ClownPrototype* clone() = 0;
};

#endif //BEGINNING_CLOWNPROTOTYPE_H
