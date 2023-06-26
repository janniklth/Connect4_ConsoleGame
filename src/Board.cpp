//
// Created by Jannik Loth on 22.06.23.
//

#include "Board.hpp"

// method to print the board
void Board::printBoard()
{
    std::cout << "_______________" << std::endl;
    std::cout << "|1 2 3 4 5 6 7|" << std::endl;
    for (int i = 0; i < m_height; i++)
    {
        std::cout << "|";
        for (int j = 0; j < m_width; j++)
        {
            switch (m_fields[i][j])
            {
                case FieldColor::RED:
                    Board::printColoredCharacter('R', FieldColor::RED);
                    break;
                case FieldColor::YELLOW:
                    Board::printColoredCharacter('Y', FieldColor::YELLOW);
                    break;
                case FieldColor::NONE:
                    std::cout << " ";
                    break;
            }
            std::cout << "|";
        }
        std::cout << std::endl;
    }
    std::cout << "¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯" << std::endl;
}


// method to set a field on the board
void Board::setField(int x, int y, FieldColor color)
{
    m_fields[x][y] = color;
}


// method to set the lowest free field in a column
void Board::setLowestFreeField(int column, FieldColor color)
{
    for (int i = m_height - 1; i >= 0; i--)
    {
        if (m_fields[i][column] == FieldColor::NONE)
        {
            m_fields[i][column] = color;
            break;
        }
    }
}


// method to set a field on the board with colored characters
void Board::printColoredCharacter(char character, FieldColor color)
{
    switch (color)
    {
        case FieldColor::RED:
            std::cout << "\033[1;31m";
            break;
        case FieldColor::YELLOW:
            std::cout << "\033[1;33m";
            break;
        case FieldColor::NONE:
            std::cout << "\033[0m";
            break;
    }
    std::cout << character;
    std::cout << "\033[0m";
}

// method to check if there is a winner
WinnerColor Board::checkWinner()
{
    int need_to_win = 4;
    for (int i = 0; i < (this->m_height - need_to_win); ++i) {
        for (int j = 0; j < (this->m_width - need_to_win); ++j) {
            // check if field isnt empty
            if (this->m_fields[i][j] != FieldColor::NONE) {
                for (int k = 0; k < need_to_win; ++k) {
                    // ....
                    // ....
                }
            }
        }
    }
}



// method to get the height of the board
int Board::getHeight() const
{
    return m_height;
}

// method to get the width of the board
int Board::getWidth() const
{
    return m_width;
}

