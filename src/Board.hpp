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

enum class WinnerColor
{
    RED,
    YELLOW,
    DRAW,
    NONE
};

enum class GameState
{
    RUNNING,
    RED_WON,
    YELLOW_WON,
    DRAW
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

    /// Method to print a colored character
    /// @param character: the character to print
    /// @param color: the color to print
    void printColoredCharacter(char character, FieldColor color);

    /// Method to set the lowest free field in a column
    /// @param column: the column to set
    /// @param color: the color to set the column to
    void setLowestFreeField(int column, FieldColor color);

    /// Method to check if game is finished (somebody won or board is full)
    /// @return bool: true if game is finished, false if not
    bool isGameFinished();

    /// Method to check if a player won
    /// @return GameState: the color of the winner or NONE if no winner
    GameState checkWinner();




    // - - - Getter and Setter - - -

    /// Method to get the height of the board
    /// @return int: the height of the board
    int getHeight() const;

    /// Method to get the width of the board
    /// @return int: the width of the board
    int getWidth() const;



private:
    int m_height;
    int m_width;
    std::vector<std::vector<FieldColor>> m_fields;
};


#endif //CONNECT4_CONSOLEGAME_BOARD_HPP
