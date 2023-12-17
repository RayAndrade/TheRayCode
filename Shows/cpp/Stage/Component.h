//
// Created by ray on 12/16/23.
//

#ifndef STAGE_COMPONENT_H
#define STAGE_COMPONENT_H

class Component {
public:
    virtual ~Component() {}
    virtual void operation() = 0;
};

#endif //STAGE_COMPONENT_H
