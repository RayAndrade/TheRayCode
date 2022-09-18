//
// Created by ray on 9/6/22.
//

#ifndef ADAPTER_ADAPTER_H
#define ADAPTER_ADAPTER_H
#include "Target.h"
#include "Adaptee.h"


class Adapter :
        public Target, public Adaptee
{
    Adaptee m_Adaptee ;
public:
    void Request() override;
};



#endif //ADAPTER_ADAPTER_H
