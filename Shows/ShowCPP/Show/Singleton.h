//
// Created by ray on 6/27/23.
//

#ifndef SHOW_SINGLETON_H
#define SHOW_SINGLETON_H

class Singleton {
public:
    static Singleton& getInstance() {
        static Singleton instance;
        return instance;
    }

    // delete copy and move constructors and assign operators
    Singleton(Singleton const&) = delete;             // Copy construct
    Singleton(Singleton&&) = delete;                  // Move construct
    Singleton& operator=(Singleton const&) = delete;  // Copy assign
    Singleton& operator=(Singleton &&) = delete;      // Move assign

    // Any other public methods.
    void doSomething() {
        //...
    }

protected:
    Singleton() {} // Constructor? (the {} brackets) are needed here.

    ~Singleton() {
        // Destructor
    }
};

#endif //SHOW_SINGLETON_H
