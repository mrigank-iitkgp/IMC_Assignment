#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H
#include "player.h"
#include <string>

class ComputerPlayer : public Player {
    public:
        ComputerPlayer(std::string const& name);
        virtual void play();
        virtual void printMessage();
    private:
        std::vector < std::string > handsList;
};
#endif
