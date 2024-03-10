//
// Created by ray on 3/9/24.
//

#ifndef EXAMPLE3_OBSERVER_H
#define EXAMPLE3_OBSERVER_H

#include <string>

class Observer {
public:
    virtual ~Observer() = default;
    virtual void update(const std::string& message_from_subject) = 0;
};


#endif //EXAMPLE3_OBSERVER_H
