#include <iostream>
#include <string>
#include "game.h"

int getNumberOfRounds() {
    int nRounds;
    std::cout << "Enter number of rounds you want to play!!\n";
    std::cin >> nRounds;
    if(std::cin && nRounds < INT32_MAX && nRounds >= 0) {
        return nRounds;
    } else {
        std::cin.clear();
        std::cout <<"Uh Oh!! The number of rounds is too high or too low. Please try again!!\n";
        return getNumberOfRounds();
    }
}
int main() {
    std::cout << "Hello User!! Welcome to Rock, Paper & Scissors!!\n";
    int nRounds = getNumberOfRounds();
    if(nRounds == 0) {
        std::cout << "You're the only winner!!\n";
    } else {
        Game game;
        game.playGame(nRounds);
    }
    return 0;
}