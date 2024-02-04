//
// Created by ray on 8/30/23.
//

#ifndef EXAMPLE2_BRIDGE_H
#define EXAMPLE2_BRIDGE_H

#include <iostream>
using namespace std;

#include "fillColorImp.h"
#include "Shape.h"

class bridge : public Shape
{
protected :
    fillColorImp* colorObj1;
public:

    bridge(fillColorImp* obj)
    {
        cout<<"\ninside consstructor of bridge class\n"<<endl;
        colorObj1 = obj;

    }
};

#endif //EXAMPLE2_BRIDGE_H
