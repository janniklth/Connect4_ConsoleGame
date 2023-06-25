//
// Created by Jannik Loth on 22.06.23.
//

#ifndef CONNECT4_CONSOLEGAME_APP_HPP
#define CONNECT4_CONSOLEGAME_APP_HPP

#include <iostream>
#include "Player.hpp"
#include "Board.hpp"

using std::cout;
using std::endl;

enum class PlayerType
{
    HUMAN,
    BOT_HORIZONTAL,
    BOT_VERTICAL,
    BOT_RANDOM,
    BOT_AI
};




class App
{
public:
    // Default constructor
    App()
    {};

    // Overloaded constructor
    App(int argc, char** argv)
    {};

    // Destructor
    ~App()
    {};

    /// Method to choose a player type
    /// @return PlayerType: the chosen player type
    PlayerType choosePlayerType(std::string player_color);

    /// Method to choose a player type
    /// @return Player: player object based on chosen player type
    Player *playerTypeToObject(std::string player_name, std::string player_color, FieldColor color);

    /// Method to run the connect4 application and show a menu
    void run();


private:


};


#endif //CONNECT4_CONSOLEGAME_APP_HPP
