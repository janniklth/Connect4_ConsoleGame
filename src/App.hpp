//
// Created by Jannik Loth on 22.06.23.
//

#ifndef CONNECT4_CONSOLEGAME_APP_HPP
#define CONNECT4_CONSOLEGAME_APP_HPP

#include <iostream>

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
    PlayerType choosePlayerType(std::string player_color)
    {
        cout << "Please choose player type for the " << player_color << " player:" << endl;
        cout << "  1. Human" << endl;
        cout << "  2. Bot (horizontal)" << endl;
        cout << "  3. Bot (vertical)" << endl;
        cout << "  4. Bot (random)" << endl;
        cout << "  5. Bot (AI)" << endl;
        cout << "Please enter a number: ";

        int selected_player_type;
        std::cin >> selected_player_type;

        switch (selected_player_type) {
            case 1:
                return PlayerType::HUMAN;
            case 2:
                return PlayerType::BOT_HORIZONTAL;
            case 3:
                return PlayerType::BOT_VERTICAL;
            case 4:
                return PlayerType::BOT_RANDOM;
            case 5:
                return PlayerType::BOT_AI;
            default:
                cout << "Invalid input. Please try again." << endl;
                return choosePlayerType(player_color);
        }
    }

    /// Method to run the connect4 application and show a menu
    void run()
    {
        // Welcome message
        cout << "Welcome to Connect4!" << endl;

        // choose first player type and get input from user
        PlayerType player_red = choosePlayerType("first (red)");
        PlayerType player_yellow = choosePlayerType("second (yellow)");



        // create players
    }

private:


};


#endif //CONNECT4_CONSOLEGAME_APP_HPP
