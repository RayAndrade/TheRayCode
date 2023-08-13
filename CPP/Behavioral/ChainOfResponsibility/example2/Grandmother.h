//
// Created by ray on 8/12/23.
//

#ifndef EXAMPLE2_GRANDMOTHER_H
#define EXAMPLE2_GRANDMOTHER_H

class Grandmother : public Listener {
public:
    void shareFeelings(const std::string& feeling) override {
        std::cout << "Grandmother: I've seen many things, felt many pains. Come, let's talk...\n";
    }
};

#endif //EXAMPLE2_GRANDMOTHER_H
