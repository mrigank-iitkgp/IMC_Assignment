#include <gtest/gtest.h>
#include "../src/game.h"

TEST(RoundWinnerTest, TestWinnerOne)
{
    Game game;
    ComputerPlayer bot("Mark");
    HumanPlayer human("Mrigank");
    bot.setHand("ROCK");
    human.setHand("SCISSORS");
    auto expected = "Mark";
    auto actual = game.checkRoundWinner(human , bot);
    ASSERT_EQ(expected, actual);
}

TEST(RoundWinnerTest, TestWinnerTwo)
{
    Game game;
    ComputerPlayer bot("Mark");
    HumanPlayer human("Mrigank");
    bot.setHand("SCISSORS");
    human.setHand("SCISSORS");
    auto expected = "TIE";
    auto actual = game.checkRoundWinner(human , bot);
    ASSERT_EQ(expected, actual);
}

TEST(RoundWinnerTest, TestWinnerThree)
{
    Game game;
    ComputerPlayer bot("Mark");
    HumanPlayer human("Mrigank");
    bot.setHand("PAPER");
    human.setHand("SCISSORS");
    auto expected = "Mrigank";
    auto actual = game.checkRoundWinner(human , bot);
    ASSERT_EQ(expected, actual);
}

TEST(GameWinnerTest, TestWinnerOne)
{
    Game game;
    ComputerPlayer bot("Mark");
    HumanPlayer human("Mrigank");
    bot.setGamesWon();
    auto expected = "Mark";
    auto actual = game.checkGameWinner(human , bot);
    ASSERT_EQ(expected, actual);
}

TEST(GameWinnerTest, TestWinnerTwo)
{
    Game game;
    ComputerPlayer bot("Mark");
    HumanPlayer human("Mrigank");
    human.setGamesWon();
    auto expected = "Mrigank";
    auto actual = game.checkGameWinner(human , bot);
    ASSERT_EQ(expected, actual);
}

TEST(GameWinnerTest, TestWinnerThree)
{
    Game game;
    ComputerPlayer bot("Mark");
    HumanPlayer human("Mrigank");
    human.setGamesWon();
    bot.setGamesWon();
    auto expected = "TIE";
    auto actual = game.checkGameWinner(human , bot);
    ASSERT_EQ(expected, actual);
}


int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

