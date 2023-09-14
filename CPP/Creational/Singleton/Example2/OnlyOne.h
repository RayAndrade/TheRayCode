//
// Created by ray on 9/13/23.
//

#ifndef EXAMPLE2_ONLYONE_H
#define EXAMPLE2_ONLYONE_H

class OnlyOne {
private:
    // Private Constructor to prevent external instantiation
    OnlyOne() {}

    // Declare a private static instance of the same class
    static OnlyOne* instance;

public:
    // Delete copy constructor and assignment operator to avoid duplication
    OnlyOne(const OnlyOne&) = delete;
    OnlyOne& operator=(const OnlyOne&) = delete;

    // Static method to access the unique OnlyOne instance
    static OnlyOne* getInstance();

    // Some business logic method
    void demoMethod();
};

#endif //EXAMPLE2_ONLYONE_H
