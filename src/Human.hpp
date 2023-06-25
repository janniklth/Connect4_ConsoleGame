//
// Created by Jannik Loth on 24.06.23.
//

#ifndef CONNECT4_CONSOLEGAME_HUMAN_HPP
#define CONNECT4_CONSOLEGAME_HUMAN_HPP

#include "Player.hpp"


class Human : public Player
{
public:
    // default constructor
    Human()
    = default;

    // overloaded constructor
    Human(std::string name, FieldColor color)
        : Player(std::move(name), color)
    {};

    // destructor
    ~Human()
    override = default;;

    /// Method to make a move
    /// @param board: the board to make the move on
    void setMove(Board& board) override;
    
};


#endif //CONNECT4_CONSOLEGAME_HUMAN_HPP
