//
// Created by ray on 2/4/24.
//

#ifndef EXAMPLE2_JOKE_H
#define EXAMPLE2_JOKE_H

#include <string>

// Represents a single joke
class Joke {
private:
    std::string content; // The joke's text

public:
    Joke(const std::string& content) : content(content) {}

    std::string getContent() const { return content; }
};

#endif //EXAMPLE2_JOKE_H
