#ifndef GAME_H
#define GAME_H
#include "computerPlayer.h"
#include "humanPlayer.h"
#include <string>

enum PlayMode {HUMAN_VS_COMPUTER , COMPUTER_VS_COMPUTER , HUMAN_VS_HUMAN};
class Game {
    public:
        PlayMode getPlayMode();
        void playGame(int& nRounds);
        void playGameUtil(Player& player1 , Player& player2 , int& nRounds);
        std::string assignPlayerName(std::string const& playerAlias);
        void checkRoundWinner(Player& player1 , Player& player2);
        void checkGameWinner(Player& player1 , Player& player2);
};
#endif
