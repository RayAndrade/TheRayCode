//
// Created by ray on 6/28/23.
//

#ifndef SHOW_SINGLETON_H
#define SHOW_SINGLETON_H

class Singleton {
private:
    static Singleton* instance;
    Singleton();  // Private constructor to prevent direct instantiation

public:
    static Singleton* getInstance();
    void someMethod();
};

#endif //SHOW_SINGLETON_H
