//
// Created by ray on 8/29/23.
//

#ifndef EAMPLE3_ADAPTER_H
#define EAMPLE3_ADAPTER_H

#include "Target.h"
#include "Adaptee.h"


class Adapter :
        public Target, public Adaptee
{
    Adaptee m_Adaptee ;
public:
    void Request() override;
};

#endif //EAMPLE3_ADAPTER_H
