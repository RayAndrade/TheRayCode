//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE3_REALSUBJECT_H
#define EXAMPLE3_REALSUBJECT_H

#include "Performer.h"
#include <iostream>

// RealSubject class that the Proxy represents
class Clown : public Performer {
public:
    void performAct(const std::string& act) override {
        std::cout << "Clown performs a hilarious " << act << " act!" << std::endl;
    }
};

#endif //EXAMPLE3_REALSUBJECT_H
