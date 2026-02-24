//
// Created by ray on 3/9/24.
//

#ifndef EXAMPLE2_OBSERVER_H
#define EXAMPLE2_OBSERVER_H

class Observer {
public:
    virtual ~Observer() {}
    virtual void update(float temperature) = 0;
};

#endif //EXAMPLE2_OBSERVER_H
