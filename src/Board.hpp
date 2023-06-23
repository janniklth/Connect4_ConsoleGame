//
// Created by Jannik Loth on 22.06.23.
//

#ifndef CONNECT4_CONSOLEGAME_BOARD_HPP
#define CONNECT4_CONSOLEGAME_BOARD_HPP

#include <iostream>
#include <vector>

using std::cout;

enum class FieldColor
{
    RED,
    YELLOW,
    NONE
};

class Board
{
public:
    // default constructor
    Board()
    {};

    // overloaded constructor
    Board(int height, int width)
        : m_height(height)
        , m_width(width)
        , m_fields(std::vector<std::vector<FieldColor>>(height, std::vector<FieldColor>(width, FieldColor::NONE)))
    {}

    // destructor
    ~Board()
    {};

    /// Method to print the board
    void printBoard();

    /// Method to set a field on the board
    /// @param x: the x coordinate of the field
    /// @param y: the y coordinate of the field
    /// @param color: the color to set the field to
    void setField(int x, int y, FieldColor color);


private:
    int m_height;
    int m_width;
    std::vector<std::vector<FieldColor>> m_fields;
};


#endif //CONNECT4_CONSOLEGAME_BOARD_HPP
