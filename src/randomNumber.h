#ifndef RANDOMNUMBER_H
#define RANDOMNUMBER_H
#include <random>

class RandomNumber {
    public:
        int getRandomNumber(int&& lowerBound , int&& upperBound);
};
#endif
