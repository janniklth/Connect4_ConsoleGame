//
// Created by Jannik Loth on 22.06.23.
//

#ifndef CONNECT4_CONSOLEGAME_PLAYER_HPP
#define CONNECT4_CONSOLEGAME_PLAYER_HPP


#include "Board.hpp"


class Player
{
public:
    // default constructor
    Player()
    {};

    // overloaded constructor
    Player(std::string name, FieldColor color)
        : m_name(name)
        , m_color(color)
    {};

    // destructor
    ~Player()
    {};

private:
    std::string m_name;
    FieldColor m_color;
};


#endif //CONNECT4_CONSOLEGAME_PLAYER_HPP
