#ifndef COMPOSITE_LEAF_H
#define COMPOSITE_LEAF_H
#include "Component.h"

class Leaf : public Component {
public:
    std::string Operation() const override {
        return "Leaf";
    }
};


#endif //COMPOSITE_LEAF_H
