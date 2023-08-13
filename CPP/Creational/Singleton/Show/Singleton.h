//
// Created by ray on 8/10/23.
//

#ifndef SHOW_SINGLETON_H
#define SHOW_SINGLETON_H

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

#endif //SHOW_SINGLETON_H
