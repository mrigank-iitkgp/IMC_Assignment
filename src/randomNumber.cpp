#include "randomNumber.h"

int RandomNumber::getRandomNumber(int&& lowerBound , int&& upperBound) {
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution < int > uniformDist(lowerBound , upperBound);
    return uniformDist(rng);
}