//
// Created by ray on 9/2/23.
//

#ifndef EXAMPLE_LEAF_H
#define EXAMPLE_LEAF_H

#include "Component.h"

class Composite : Component
{
public override string Operation()
    {
        return "Leaf";
    }
public override bool IsComposite()
    {
        return false;
    }
};
#endif //EXAMPLE_LEAF_H
