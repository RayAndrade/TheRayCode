//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE2_SUBJECT_H
#define EXAMPLE2_SUBJECT_H

#include <string>

// Subject interface declaring common operations for RealSubject and Proxy
class Subject {
public:
    virtual ~Subject() {}
    virtual void castSpell(const std::string& spell) = 0;
};

#endif //EXAMPLE2_SUBJECT_H
