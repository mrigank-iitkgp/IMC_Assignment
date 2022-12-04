#include "../src/game.h"
#include <iostream>

bool run_test_1() {
    Game game;
    ComputerPlayer bot("Mark");
    HumanPlayer human("Mrigank");
    bot.setHand("ROCK");
    human.setHand("SCISSORS");
    auto expected = "Mark";
    auto actual = game.checkRoundWinner(human , bot);
    if(actual == expected) {
        std::cout << "***** Test Case 1 passed *****\n";
        return true;
    } else {
        std::cout << "***** Test Case 1 failed *****\n";
        std::cout << "Expected Value is : " << expected << "\n";
        std::cout << "Actual Value is : " << actual << "\n";
        return false;
    }
}

bool run_test_2() {
    Game game;
    ComputerPlayer bot("Mark");
    HumanPlayer human("Mrigank");
    bot.setHand("SCISSORS");
    human.setHand("SCISSORS");
    auto expected = "TIE";
    auto actual = game.checkRoundWinner(human , bot);
    if(actual == expected) {
        std::cout << "***** Test Case 2 passed *****\n";
        return true;
    } else {
        std::cout << "***** Test Case 2 failed *****\n";
        std::cout << "Expected Value is : " << expected << "\n";
        std::cout << "Actual Value is : " << actual << "\n";
        return false;
    }
}

bool run_test_3() {
    Game game;
    ComputerPlayer bot("Mark");
    HumanPlayer human("Mrigank");
    bot.setHand("PAPER");
    human.setHand("SCISSORS");
    auto expected = "Mrigank";
    auto actual = game.checkRoundWinner(human , bot);
    if(actual == expected) {
        std::cout << "***** Test Case 3 passed *****\n";
        return true;
    } else {
        std::cout << "***** Test Case 3 failed *****\n";
        std::cout << "Expected Value is : " << expected << "\n";
        std::cout << "Actual Value is : " << actual << "\n";
        return false;
    }
}

bool run_test_4() {
    Game game;
    ComputerPlayer bot("Mark");
    HumanPlayer human("Mrigank");
    bot.setGamesWon();
    auto expected = "Mark";
    auto actual = game.checkGameWinner(human , bot);
    if(actual == expected) {
        std::cout << "***** Test Case 4 passed *****\n";
        return true;
    } else {
        std::cout << "***** Test Case 4 failed *****\n";
        std::cout << "Expected Value is : " << expected << "\n";
        std::cout << "Actual Value is : " << actual << "\n";
        return false;
    }
}

bool run_test_5() {
    Game game;
    ComputerPlayer bot("Mark");
    HumanPlayer human("Mrigank");
    human.setGamesWon();
    auto expected = "Mrigank";
    auto actual = game.checkGameWinner(human , bot);
    if(actual == expected) {
        std::cout << "***** Test Case 5 passed *****\n";
        return true;
    } else {
        std::cout << "***** Test Case 5 failed *****\n";
        std::cout << "Expected Value is : " << expected << "\n";
        std::cout << "Actual Value is : " << actual << "\n";
        return false;
    }
}

bool run_test_6() {
    Game game;
    ComputerPlayer bot("Mark");
    HumanPlayer human("Mrigank");
    human.setGamesWon();
    bot.setGamesWon();
    auto expected = "TIE";
    auto actual = game.checkGameWinner(human , bot);
    if(actual == expected) {
        return true;
    } else {
        std::cout << "***** Test Case 6 failed *****\n";
        std::cout << "Expected Value is : " << expected << "\n";
        std::cout << "Actual Value is : " << actual << "\n";
        return false;
    }
}

int main() {
    int total = 6;
    int passed = 0;
    int failed = 0;
    if(run_test_1()) {
        passed++;
    } else {
        failed++;
    }
    if(run_test_2()) {
        passed++;
    } else {
        failed++;
    }
    if(run_test_3()) {
        passed++;
    } else {
        failed++;
    }
    if(run_test_4()) {
        passed++;
    } else {
        failed++;
    }
    if(run_test_5()) {
        passed++;
    } else {
        failed++;
    }
    if(run_test_6()) {
        passed++;
    } else {
        failed++;
    }
    std::cout <<"***** " << total << " tests ran *****\n";
    std::cout <<"***** " << passed << " out of " << total << " tests passed *****\n";
    std::cout <<"***** " << failed << " out of " << total << " tests failed *****\n";
}