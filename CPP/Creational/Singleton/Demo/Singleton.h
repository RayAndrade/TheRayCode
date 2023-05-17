//
// Created by ray on 5/16/23.
//

#ifndef DEMO_SINGLETON_H
#define DEMO_SINGLETON_H

class Singleton {
public:
    // Delete copy constructor and assignment operator
    Singleton(Singleton &other) = delete;
    void operator=(const Singleton &) = delete;

    static Singleton* getInstance();
private:
    Singleton() {}

    static Singleton* instance;
};

#endif //DEMO_SINGLETON_H
