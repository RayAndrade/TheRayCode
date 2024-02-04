//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE2_WIZARDPROXY_H
#define EXAMPLE2_WIZARDPROXY_H

#include "Subject.h"
#include "Wizard.h"
#include <iostream>

// Proxy class controlling access to the Wizard
class WizardProxy : public Subject {
private:
    Wizard* wizard; // Pointer to the real subject
public:
    WizardProxy() : wizard(new Wizard()) {}
    ~WizardProxy() {
        delete wizard;
    }

    void castSpell(const std::string& spell) override {
        // Control access or modify behavior
        if (spell == "Fireball") {
            std::cout << "Proxy: Let's not burn things down. Choose a different spell." << std::endl;
        } else {
            std::cout << "Proxy: Spell approved by the council." << std::endl;
            wizard->castSpell(spell);
        }
    }
};

#endif //EXAMPLE2_WIZARDPROXY_H
