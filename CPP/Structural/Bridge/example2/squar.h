//
// Created by ray on 8/30/23.
//

#ifndef EXAMPLE2_SQUAR_H
#define EXAMPLE2_SQUAR_H


#include "bridge.h"


class squar : public bridge
{
public:

    squar(fillColorImp* obj):bridge(obj) {}

    void colorIt()
    {
        colorObj1->fillColor();
    }

    void drawIt()
    {
        cout<<"Squar drawan without color"<<endl;
    }

};

#endif //EXAMPLE2_SQUAR_H
