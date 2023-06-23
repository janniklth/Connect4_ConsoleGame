//
// Created by Jannik Loth on 22.06.23.
//

#include "App.hpp"


// main method to run the game
void App::run()
{
    // Welcome message
    cout << "Welcome to Connect4!" << endl;

    // choose first player type and get input from user
    PlayerType player_red = choosePlayerType("first (red)");
    PlayerType player_yellow = choosePlayerType("second (yellow)");


    // create the board and test print it
    Board gameboard(6, 7);
    gameboard.printBoard();

    // fill some random fields
    gameboard.setField(5, 0, FieldColor::RED);
    gameboard.setField(5, 1, FieldColor::YELLOW);
    gameboard.setField(5, 2, FieldColor::RED);
    gameboard.setField(5, 3, FieldColor::YELLOW);
    gameboard.setField(5, 4, FieldColor::RED);
    gameboard.setField(5, 5, FieldColor::YELLOW);
    gameboard.setField(5, 6, FieldColor::RED);

    gameboard.printBoard();

    // create players




}


// Method to choose a player type
PlayerType App::choosePlayerType(std::string player_color)
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
    cout << endl;

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
