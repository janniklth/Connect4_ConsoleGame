//
// Created by Jannik Loth on 24.06.23.
//

#ifndef CONNECT4_CONSOLEGAME_BOT_RANDOM_HPP
#define CONNECT4_CONSOLEGAME_BOT_RANDOM_HPP

#include <thread>
#include <chrono>
#include <random>

#include "Player.hpp"

class Bot_Random : public Player
{
public:
    // default constructor
    Bot_Random()
    = default;

    // overloaded constructor
    Bot_Random(std::string name, FieldColor color)
        : Player(std::move(name), color)
    {};

    // destructor
    ~Bot_Random()
    override = default;;

    /// Method to make a move
    /// @param board: the board to make the move on
    void setMove(Board& board) override;
};


#endif //CONNECT4_CONSOLEGAME_BOT_RANDOM_HPP
