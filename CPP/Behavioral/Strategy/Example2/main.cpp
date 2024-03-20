#include <iostream>
#include "MazeNavigator.h"
#include "LeftHandRuleStrategy.h"
#include "RandomWalkStrategy.h"

int main() {
    MazeNavigator navigator;

    // Use the left-hand rule strategy
    navigator.setStrategy(new LeftHandRuleStrategy());
    std::cout << "Using LeftHandRuleStrategy: ";
    navigator.navigateMaze();

    // Switch to the random walk strategy
    navigator.setStrategy(new RandomWalkStrategy());
    std::cout << "Switching to RandomWalkStrategy: ";
    navigator.navigateMaze();
    return 0;
}
