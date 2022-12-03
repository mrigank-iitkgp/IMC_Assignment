#include "humanPlayer.h"
#include <string>
#include <iostream>
#include <unordered_set>
#include <algorithm>


HumanPlayer :: HumanPlayer(std::string const& name) : Player(name) {
    this->handsSet.insert("ROCK");
    this->handsSet.insert("PAPER");
    this->handsSet.insert("SCISSORS");
}

void HumanPlayer :: play() {
    std::cout << this->getName() << ", Please enter your selection!! Type Rock, Paper or Scissors?\n";
    std::string hand;
    std::cin >> hand;
    std::transform(hand.begin() , hand.end() , hand.begin() , ::toupper);
    if(std::cin && handsSet.find(hand) != handsSet.end()) {
        this->setHand(hand);
        std::cout << this->getName() << " has chosen " << this->getHand() << "\n";
    } else {
        std::cout << "Invalid Selection!!\n";
        std::cin.clear();
        this->play();
    }
}

void HumanPlayer :: printMessage() {
    std::cout << "\n" << this->getName() << " has won this round!!";
}