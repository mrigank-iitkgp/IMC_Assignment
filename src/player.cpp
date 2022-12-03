#include <string>
#include "player.h"

Player::Player(std::string const& name) : playerName(name) , gamesWon(0) {}

void Player :: setHand(std::string const& hand) {
    this->hand = hand;
}

std::string Player :: getName() {
    return this->playerName;
}

void Player:: setGamesWon() {
    this->gamesWon++;
}

int Player:: getGamesWon() {
    return this->gamesWon;
}

std::string Player::getHand() {
    return this->hand;
}