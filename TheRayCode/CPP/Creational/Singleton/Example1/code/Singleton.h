//
// Created by ray on 1/29/25.
//

#ifndef CODE_SINGLETON_H
#define CODE_SINGLETON_H
#include <iostream>

class Singleton {
private:
    static Singleton* _instance;
    Singleton();
public:
    static Singleton* Instance();
    void ShowMessage();

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};
#endif //CODE_SINGLETON_H
