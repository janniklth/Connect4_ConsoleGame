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
    /// @param player_color: color for the print message
    /// @return PlayerType: the chosen player type
    PlayerType choosePlayerType(std::string player_color);

    /// Method to choose a nickname
    /// @return String: the entered name of the user
    std::string enterNickname();

    /// Method to choose a player type
    /// @param fieldColor: color of the player on the boarf
    /// @param player_name: name of the player
    /// @return Player: player object based on chosen player type
    Player *playerTypeToObject(PlayerType playerType, std::string player_name, FieldColor fieldColor);

    /// Method to run the connect4 application and show a menu
    void run();


private:


};


#endif //CONNECT4_CONSOLEGAME_APP_HPP
