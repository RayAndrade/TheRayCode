//
// Created by ray on 7/24/23.
//

#ifndef SHOW_ONLYONE_H
#define SHOW_ONLYONE_H

class OnlyOne {
public:
    // Deleting the copy constructor and the assignment operator to prevent copies.
    OnlyOne(const OnlyOne&) = delete;
    OnlyOne& operator=(const OnlyOne&) = delete;

    // Static method that controls access to the singleton instance.
    static OnlyOne& getInstance() {
        static OnlyOne instance; // Guaranteed to be destroyed.
        // Instantiated on first use.
        return instance;
    }

    // The rest of the class's interface here.
    void someMethod();

    void printAddress() {
        std::cout << "OnlyOne instance address: " << this << std::endl;
    }

private:
    // Private constructor to prevent instancing.
    OnlyOne() {}
};


#endif //SHOW_ONLYONE_H
