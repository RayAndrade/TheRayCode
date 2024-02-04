//
// Created by ray on 8/30/23.
//

#ifndef EXAMPLE2_REDCOLOR_H
#define EXAMPLE2_REDCOLOR_H
using namespace std;

#include <iostream>
#include "fillColorImp.h"

class redColor : public fillColorImp
{
public:
    void fillColor()
    {
        cout<<"Its is red color"<<endl;
    }

};

#endif //EXAMPLE2_REDCOLOR_H
