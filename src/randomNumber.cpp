#include "randomNumber.h"
#include <chrono>
int RandomNumber::getRandomNumber(int&& lowerBound , int&& upperBound) {
    std::random_device rd;
    static std::mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count());
    std::uniform_int_distribution < int > uniformDist(lowerBound , upperBound);
    return uniformDist(rng);
}