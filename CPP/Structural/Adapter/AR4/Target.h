//
// Created by ray on 9/6/22.
//

#ifndef ADAPTER_TARGET_H
#define ADAPTER_TARGET_H


class Target
{
public:
    virtual void Request() = 0 ;
    virtual ~Target()=default ;
};


#endif //ADAPTER_TARGET_H
