//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE3_PERFORMER_H
#define EXAMPLE3_PERFORMER_H

#include <string>

// Performer interface declaring common operations for RealSubject and Proxy
class Performer {
public:
    virtual ~Performer() {}
    virtual void performAct(const std::string& act) = 0;
};

#endif //EXAMPLE3_PERFORMER_H
