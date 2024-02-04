//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE3_CLOWNPROXY_H
#define EXAMPLE3_CLOWNPROXY_H

#include "Performer.h"
#include "Clown.h"
#include <iostream>

// Proxy class controlling access to the Clown
class ClownProxy : public Performer {
private:
    Clown* clown; // Pointer to the real subject
public:
    ClownProxy() : clown(new Clown()) {}
    ~ClownProxy() {
        delete clown;
    }

    void performAct(const std::string& act) override {
        // Control access or modify behavior
        if (act == "fire-eating") {
            std::cout << "Proxy: Sorry, fire-eating is too dangerous for today's show. Choose a different act." << std::endl;
        } else {
            std::cout << "Proxy: Act approved by the circus manager." << std::endl;
            clown->performAct(act);
        }
    }
};

#endif //EXAMPLE3_CLOWNPROXY_H
