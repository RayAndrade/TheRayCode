#include <iostream>
#include "Joke.h"
#include "JokeBook.h"
#include "JokeIterator.h"


int main() {
    JokeBook myJokeBook;
    myJokeBook.addJoke(Joke("Why do we never tell secrets on a farm? Because the potatoes have eyes and the corn has ears."));
    myJokeBook.addJoke(Joke("I told my computer I needed a break, and it said 'Why? You haven’t done anything today!'"));
    myJokeBook.addJoke(Joke("Parallel lines have so much in common. It’s a shame they’ll never meet."));

    JokeIterator it(myJokeBook);
    while (it.hasNext()) {
        std::cout << it.next().getContent() << std::endl << std::endl;
    }
    return 0;
}
