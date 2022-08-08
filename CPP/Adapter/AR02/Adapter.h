//
// Created by ray on 8/7/22.
//

#ifndef AR02_ADAPTER_H
#define AR02_ADAPTER_H

#include "Interface1.h"
#include "Interface2.h"

class Adapter : public Interface1
{
public:
    explicit Adapter(Interface2* o) : obj{ o } {}
    virtual void Method1() override { obj->Method2(); }
private:
    Interface2* obj = nullptr;
};

#endif //AR02_ADAPTER_H
