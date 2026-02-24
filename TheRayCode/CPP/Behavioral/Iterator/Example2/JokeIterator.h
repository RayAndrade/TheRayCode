//
// Created by ray on 2/4/24.
//

#ifndef EXAMPLE2_JOKEITERATOR_H
#define EXAMPLE2_JOKEITERATOR_H

#include "Iterator.h"
#include "JokeBook.h"

// Concrete iterator for JokeBook
class JokeIterator : public Iterator<Joke> {
private:
    const JokeBook& jokeBook;
    size_t current = 0;

public:
    JokeIterator(const JokeBook& jokeBook) : jokeBook(jokeBook) {}

    bool hasNext() const override {
        return current < jokeBook.getJokes().size();
    }

    Joke next() override {
        return jokeBook.getJokes().at(current++);
    }
};

#endif //EXAMPLE2_JOKEITERATOR_H
