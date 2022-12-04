#include <iostream>
#include <string>
#include <time.h>
#include "game.h"
#include <cstdio>

int getNumberOfRounds() {
    int nRounds;
    std::cout << "Enter number of rounds you want to play!!\n";
    std::cin >> nRounds;
    if(std::cin && nRounds < INT32_MAX && nRounds >= 0) {
        return nRounds;
    } else {
        std::cout <<"Uh Oh!! The number of rounds is invalid. Please try again!!\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return getNumberOfRounds();
    }
}
int main() {
    srand(time(nullptr));
    std::cout << "Hello User!! Welcome to Rock, Paper & Scissors!!\n";
    
    // Prompting the user to ask for the number of rounds
    int nRounds = getNumberOfRounds();
    if(nRounds == 0) {
        std::cout << "You're the only winner!!\n";
    } else {
        Game game;
        game.playGame(nRounds);
    }
    // Added this line to avoid abrupt exit from the terminal in Windows Machine
    std::cin.ignore();
    std::cout << "Press enter to exit!!\n";
    std::cin.get();  
    return 0;
}