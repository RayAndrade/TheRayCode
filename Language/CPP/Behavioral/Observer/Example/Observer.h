//
// Created by ray on 3/9/24.
//

#ifndef EXAMPLE_OBSERVER_H
#define EXAMPLE_OBSERVER_H

class Observer {
public:
    virtual ~Observer() {}
    virtual void update(int state) = 0;
};

#endif //EXAMPLE_OBSERVER_H
