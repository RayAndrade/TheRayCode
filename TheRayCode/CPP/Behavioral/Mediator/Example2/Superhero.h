//
// Created by ray on 1/22/24.
//

#ifndef EXAMPLE2_SUPERHERO_H
#define EXAMPLE2_SUPERHERO_H

#include <string>

class Mediator;

class Superhero {
public:
    Superhero(const std::string& name, Mediator* mediator);

    void sendMessage(const std::string& message);
    void receiveMessage(const std::string& message);

    const std::string& getName() const;

private:
    std::string name;
    Mediator* mediator;
};

#endif //EXAMPLE2_SUPERHERO_H
