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


    for (int i = 0; i < this->m_height; i++) {
        for (int j = 0; j < this->m_width; j++) {
            bool horizontal_possible = true;
            bool vertical_possible = true;
            bool diagonal_possible = true;

            // check if field isn't empty
            if (this->m_fields[i][j] != FieldColor::NONE) {
                cout << "field not empty: i=" << i << " j=" << j << std::endl;
                for (int k = 0; k < need_to_win; k++) {
                    // horizontal check
                    if (this->m_fields[i][j] == this->m_fields[i][j + k] && horizontal_possible && j < (this->m_width - need_to_win) + 1) {
                        horizontal_possible = true;
                        cout << "horizontal possible" << std::endl;
                        if (k == need_to_win - 1) {
                            if (this->m_fields[i][j] == FieldColor::RED) {
                                cout << "Red won! horizontal" << std::endl;
                                return WinnerColor::RED;
                            }
                            else {
                                cout << "Yellow won! horizontal" << std::endl;
                                return WinnerColor::YELLOW;
                            }
                        }
                        cout << "test" << std::endl;
                    }
                    else {
                        cout << "horizontal not possible" << std::endl;
                        horizontal_possible = false;
                    }

                    cout << "test2" << std::endl;

                    // vertical check
                    if (this->m_fields[i][j] == this->m_fields[i + k][j] && vertical_possible && i < (this->m_height - need_to_win) + 1) {
                        vertical_possible = true;
                        cout << "vertical possible" << std::endl;
                        if (k == need_to_win - 1) {
                            if (this->m_fields[i][j] == FieldColor::RED) {
                                cout << "Red won! vertical" << std::endl;
                                return WinnerColor::RED;
                            }
                            else {
                                cout << "Yellow won! vertical" << std::endl;
                                return WinnerColor::YELLOW;
                            }
                        }
                    }
                    else {
                        vertical_possible = false;
                    }

                    // diagonal check
//                    if (this->m_fields[i][j] == this->m_fields[i + k][j + k] && diagonal_possible) {
//                        diagonal_possible = true;
//                        if (k == need_to_win - 1) {
//                            if (this->m_fields[i][j] == FieldColor::RED) {
//                                cout << "Red won! diagonal" << std::endl;
//                                return WinnerColor::RED;
//                            }
//                            else {
//                                cout << "Yellow won! diagonal" << std::endl;
//                                return WinnerColor::YELLOW;
//                            }
//                        }
//                    }
//                    else {
//                        diagonal_possible = false;
//                    }
                }
            }
        }
    }
    return WinnerColor::NONE;
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

