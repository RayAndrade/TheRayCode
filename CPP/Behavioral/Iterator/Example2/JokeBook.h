//
// Created by ray on 2/4/24.
//

#ifndef EXAMPLE2_JOKEBOOK_H
#define EXAMPLE2_JOKEBOOK_H

#include "Joke.h"
#include <vector>

// Represents a collection of jokes
class JokeBook {
private:
    std::vector<Joke> jokes; // The book of jokes

public:
    void addJoke(const Joke& joke) { jokes.push_back(joke); }

    std::vector<Joke> getJokes() const { return jokes; }
};

#endif //EXAMPLE2_JOKEBOOK_H
