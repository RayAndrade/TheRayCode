//
// Created by ray on 6/28/23.
//

#ifndef SHOW1_SINGLETON_H
#define SHOW1_SINGLETON_H

class Singleton {
private:
    static Singleton* instance;

    // Private constructor to prevent direct instantiation
    Singleton();

public:
    // Method to get the singleton instance
    static Singleton* getInstance();
    // Add other methods or data members as needed
};

#endif //SHOW1_SINGLETON_H
