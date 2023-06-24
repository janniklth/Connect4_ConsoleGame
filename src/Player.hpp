//
// Created by Jannik Loth on 22.06.23.
//

#ifndef CONNECT4_CONSOLEGAME_PLAYER_HPP
#define CONNECT4_CONSOLEGAME_PLAYER_HPP


#include <utility>

#include "Board.hpp"


class Player
{
public:
    // default constructor
    Player()
    = default;;

    // overloaded constructor
    Player(std::string name, FieldColor color)
        : m_name(std::move(name))
        , m_color(color)
    {};

    // destructor
    virtual ~Player()
    = default;;

    /// Method to make a move
    /// @param board: the board to make the move on
    virtual void setMove(Board& board) = 0;



    // - - - Getter and Setter - - -

    /// Method to get the name of the player
    /// @return std::string: the name of the player
    std::string getName();

protected:
    std::string m_name;
    FieldColor m_color;
};


#endif //CONNECT4_CONSOLEGAME_PLAYER_HPP
