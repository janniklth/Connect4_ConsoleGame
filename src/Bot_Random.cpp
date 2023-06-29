//
// Created by Jannik Loth on 24.06.23.
//

#include "Bot_Random.hpp"
#include <random>
using namespace std;

// method to make a move (random)
void Bot_Random::setMove(Board &board)
{
    // some prints to make the bot look like it's thinking
    std::cout << this->m_name << " is thinking about his next move   ";
    for (int j = 0; j < 2; j++)
    {
        std::cout.flush();
        std::cout << "\b\b\b   \b\b\b";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
        std::cout.flush();
        for (int i = 0; i < 3; i++)
        {
            std::cout << ".";
            std::cout.flush();
            std::this_thread::sleep_for(std::chrono::milliseconds(300));
            std::cout.flush();
        }
    }
    std::cout << std::endl;

    // get a random number between 0 and the width of the board
    random_device device;
    mt19937 generator(device());
    uniform_int_distribution<int> selectColum(0, board.getWidth());


    int column = selectColum(generator);

    // set the lowest free field in the wanted column to the color of the player
    board.setLowestFreeField(column, this->m_color);
}
