#include <iostream>
#include "Superhero.h"
#include "SuperheroTeam.h"


int main() {
    // Create a Mediator (SuperheroTeam)
    SuperheroTeam team;

    // Create superheroes and add them to the team
    Superhero superman("Superman", &team);
    Superhero batman("Batman", &team);
    Superhero wonderWoman("Wonder Woman", &team);

    team.addSuperhero(&superman);
    team.addSuperhero(&batman);
    team.addSuperhero(&wonderWoman);

    // Send messages between superheroes
    superman.sendMessage("I need backup!");
    batman.sendMessage("On my way!");
    wonderWoman.sendMessage("I'm here to help!");
    return 0;
}
