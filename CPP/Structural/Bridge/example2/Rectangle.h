//
// Created by ray on 8/30/23.
//

#ifndef EXAMPLE2_RECTANGLE_H
#define EXAMPLE2_RECTANGLE_H
#include "bridge.h"

class Rectangle : public bridge
{
public:

    Rectangle(fillColorImp* obj):bridge(obj) {}

    void colorIt()
    {
        colorObj1->fillColor();
    }

    void drawIt()
    {
        cout<<"Squar drawan without color"<<endl;
    }


};

#endif //EXAMPLE2_RECTANGLE_H
