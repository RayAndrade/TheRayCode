//
// Created by ray on 8/25/20.
//

#ifndef PROXY_REALSUBJECT_H
#define PROXY_REALSUBJECT_H
#include <iostream>
#include "Subject.h"

class RealSubject : public Subject {
public:
    void Request() const override {
        std::cout << "RealSubject: Handling request.\n";
    }
};


#endif //PROXY_REALSUBJECT_H
