//
// Created by ray on 7/13/22.
//

#ifndef AR2_ADAPTER_H
#define AR2_ADAPTER_H

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
#endif //AR2_ADAPTER_H
