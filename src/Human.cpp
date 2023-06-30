//
// Created by Jannik Loth on 24.06.23.
//

#include "Human.hpp"
#include <limits>

// method to make a move
void Human::setMove(Board &board)
{
    // prompt the user to enter a column
    std::cout << this->m_name << ", please enter a column number: ";
    int column;

    while (!(std::cin >> column)) {
        cout << "This was no number. Please try again!" << std::endl;
        cout << "Please enter a column number: ";

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // set the lowest free field in the wanted column to the color of the player
    board.setLowestFreeField(column - 1, this->m_color);
}
