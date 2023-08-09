//
// Created by ray on 8/9/23.
//

#include "Singleton.h"

Singleton* Singleton::instance = 0;

Singleton* Singleton::getInstance() {
    if (instance == 0) {
        instance = new Singleton();
    }

    return instance;
}
