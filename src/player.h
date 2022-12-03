#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <vector>
#include <unordered_set>

class Player {
    public:
        Player(std::string const& name);
        //virtual ~Player() {}
        virtual void play() = 0;
        virtual void printMessage() = 0;
        void setHand(std::string const& hand);
        std::string getName();
        std::string getHand();
        void setGamesWon();
        int getGamesWon();
    private:
        std::string playerName;
        std::string hand;
        int gamesWon;
};
#endif
