//
// Created by ray on 9/12/23.
//

#ifndef EXAMPLE_SINGLETON_H
#define EXAMPLE_SINGLETON_H

class Singleton {
private:
    // Private Constructor to prevent external instantiation
    Singleton() {}

    // Declare a private static instance of the same class
    static Singleton* instance;

public:
    // Delete copy constructor and assignment operator to avoid duplication
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    // Static method to access the unique Singleton instance
    static Singleton* getInstance();

    // Some business logic method
    void demoMethod();
};

#endif //EXAMPLE_SINGLETON_H
