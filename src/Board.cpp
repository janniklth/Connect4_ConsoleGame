//
// Created by Jannik Loth on 22.06.23.
//

#include "Board.hpp"

// method to print the board
void Board::printBoard()
{
    std::cout << "_______________" << std::endl;
    for (int i = 0; i < m_height; i++)
    {
        std::cout << "|";
        for (int j = 0; j < m_width; j++)
        {
            switch (m_fields[i][j])
            {
                case FieldColor::RED:
                    std::cout << "R";
                    break;
                case FieldColor::YELLOW:
                    std::cout << "Y";
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
