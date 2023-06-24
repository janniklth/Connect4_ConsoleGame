//
// Created by Jannik Loth on 24.06.23.
//

#include "Bot_Random.hpp"

// method to make a move (random)
void Bot_Random::setMove(Board &board)
{
    // some prints to make the bot look like it's thinking
    std::cout << this->m_name << " is thinking about his next move";
    std::cout.flush();

    // get a random number between 0 and the width of the board
    int column = rand() % (board.getWidth());

    // set the lowest free field in the wanted column to the color of the player
    board.setLowestFreeField(column, this->m_color);
}
