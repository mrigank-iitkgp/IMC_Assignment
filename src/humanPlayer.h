#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H
#include "player.h"
#include <string>
#include <unordered_set>

class HumanPlayer : public Player {
    public:
        HumanPlayer(std::string const& name);
        virtual void play();
        virtual void printMessage();
    private:
        std::unordered_set < std::string > handsSet; 
};
#endif
