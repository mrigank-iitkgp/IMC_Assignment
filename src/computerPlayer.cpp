#include "computerPlayer.h"
#include "randomNumber.h"
#include <string>
#include <iostream>
#include <unordered_set>

ComputerPlayer :: ComputerPlayer(std::string const& name) : Player(name) {
    this->handsList = {"ROCK" , "PAPER" , "SCISSORS"};
}

void ComputerPlayer :: play() {
    RandomNumber randomNumber;
    int computerChoice = randomNumber.getRandomNumber(1 , (int)this->handsList.size());
    this->setHand(handsList[computerChoice - 1]);
    std::cout << this->getName() << " has chosen " << this->getHand() << "\n";
}

void ComputerPlayer :: printMessage() {
    std::cout << this->getName() << " has won this round!!\n";
}