//
// Created by ray on 7/24/23.
//

#ifndef SHOW_ORDINARY_H
#define SHOW_ORDINARY_H

class Ordinary {
public:
    Ordinary() {}

    void someMethod();

    void printAddress() {
        std::cout << "Ordinary instance address: " << this << std::endl;
    }
};

#endif //SHOW_ORDINARY_H
