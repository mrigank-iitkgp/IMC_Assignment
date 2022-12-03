#include "computerPlayer.h"
#include "humanPlayer.h"
#include "game.h"
#include "randomNumber.h"
#include <iostream>
#include <string>
#include <random>

std::vector < std::string > botNames = {"Albert" , "Cecil" , "Clarence" , "Sophie" , "Emily" , "Bert" , 
                                            "Elmer" , "Elliot" , "Nadia" , "Sara" , "Meg"};



PlayMode Game::getPlayMode() {
    std::cout << "Select the mode of play!!\n";
    std::cout << "Type 1 for Human vs Computer\n";
    std::cout << "Type 2 for Computer vs Computer\n";
    std::cout << "Type 3 for Human vs Human\n";

    int mode;
    std::cin >> mode;
    if(std::cin) {
        switch (mode)
        {
            case 1:
                return HUMAN_VS_COMPUTER;
            case 2:
                return COMPUTER_VS_COMPUTER;
            case 3:
                return HUMAN_VS_HUMAN;
            default:
                std::cout << "Invalid Choice!! Please enter the valid option\n";
        }
        return this->getPlayMode();
    } else {
        std::cout << "Invalid Choice!! Please enter the valid option\n";
        std::cin.clear();
        return this->getPlayMode();
    }
}

std::string Game::assignPlayerName(std::string const & playerAlias) {
    std::string name;
    if(playerAlias == "HUMAN") {
        std::cout << "Enter your name!!\n";
        std::cin >> name;
        if(std::cin && (int)name.length() > 0) {
            return name;
        } else {
            std::cout << "Please enter your name again!!\n";
            std::cin.clear();
            return this->assignPlayerName(playerAlias);
        }
    } else {
        RandomNumber randomNumber;
        int botIdx = randomNumber.getRandomNumber(1 , (int)botNames.size());
        return botNames[botIdx - 1];
    }
}

std::string Game::checkRoundWinner(Player& player1 , Player& player2) {
    if(player1.getHand() == player2.getHand()) {
        std::cout << "It's a tie!!\n";
        return "TIE";
    } else {
        
        if( (player1.getHand() == "ROCK" && player2.getHand() == "SCISSORS") || 
        (player1.getHand() == "SCISSORS" && player2.getHand() == "PAPER") ||
        (player1.getHand() == "PAPER" && player2.getHand() == "ROCK") ) {
            
            player1.setGamesWon();
            player1.printMessage();
            return player1.getName();
        } else {
            
            player2.setGamesWon();
            player2.printMessage();
            return player2.getName();
        } 
    }
}

std::string Game::checkGameWinner(Player& player1 , Player& player2) {
    std::string result;
    if(player1.getGamesWon() == player2.getGamesWon()) {
        std::cout << "Game is tied!!\n";
        result = "TIE";
    } else if(player1.getGamesWon() > player2.getGamesWon()) {
        std::cout << "Congratulations, " << player1.getName() << "!! You have won the game!!\n";
        result = player1.getName();
    } else {
        std::cout << "Congratulations, " << player2.getName() << "!! You have won the game!!\n";
        result = player2.getName();
    }

    std::cout << "Final Scoreline : \n";
    std::cout << player1.getName() << " " << player1.getGamesWon() << " - " << 
                player2.getGamesWon() << " " << player2.getName() << "\n";
    return result;
}

void Game::playGameUtil(Player& player1 , Player& player2 , int& nRounds) {
    for(int round = 1 ; round <= nRounds ; round++) {
        std::cout << "Welcome to Round " << round << "\n";
        player1.play();
        player2.play();
        this->checkRoundWinner(player1 , player2);
        std::cout << "Scores after Round " << round << " are : \n";
        std::cout << player1.getName() << " : " << player1.getGamesWon() << "\n";
        std::cout << player2.getName() << " : " << player2.getGamesWon() << "\n";
    }
}
void Game::playGame(int& nRounds) {
    PlayMode mode = this->getPlayMode();
    if(mode == HUMAN_VS_COMPUTER) {
        std::string humanName = assignPlayerName("HUMAN");
        std::string botName = assignPlayerName("BOT");
        HumanPlayer humanPlayer(humanName);
        ComputerPlayer computerPlayer(botName);
        this->playGameUtil(humanPlayer , computerPlayer , nRounds);
        this->checkGameWinner(humanPlayer , computerPlayer);
    } else if(mode == COMPUTER_VS_COMPUTER) {
        std::string botname1 = assignPlayerName("BOT");
        std::string botname2 = assignPlayerName("BOT");
        ComputerPlayer computerPlayer1(botname1);
        ComputerPlayer computerPlayer2(botname2);
        this->playGameUtil(computerPlayer1 , computerPlayer2 , nRounds);
        this->checkGameWinner(computerPlayer1 , computerPlayer2);
    } else {
        std::string humanName1 = assignPlayerName("HUMAN");
        std::string humanName2 = assignPlayerName("HUMAN");
        HumanPlayer humanPlayer1(humanName1);
        HumanPlayer humanPlayer2(humanName2);
        this->playGameUtil(humanPlayer1 , humanPlayer2 , nRounds);
        this->checkGameWinner(humanPlayer1 , humanPlayer2);
    }
}
