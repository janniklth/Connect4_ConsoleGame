//
// Created by Jannik Loth on 22.06.23.
//

#include "App.hpp"
#include "Player.hpp"
#include "Human.hpp"
#include "Bot_Random.hpp"


// main method to run the game
void App::run()
{
    // Welcome message
    cout << "Welcome to Connect4!" << endl;

    // choose first player type and get input from user
    PlayerType player_red = choosePlayerType("first (red)");
    PlayerType player_yellow = choosePlayerType("second (yellow)");

    P

    // create the board and test print it
    Board gameboard(6, 7);
    gameboard.printBoard();



    // create players
    //Human player1("Player 1", FieldColor::RED);
    //Bot_Random player2("Player 2", FieldColor::YELLOW);

    // main loop
    while (true)
    {
        // player 1 makes a move
        //player1.setMove(gameboard);

        player1->setMove(gameboard);
        gameboard.printBoard();

        // check win condition
        // ...

        // player 2 makes a move
        //player2.setMove(gameboard);

        player2->setMove(gameboard);
        gameboard.printBoard();

        // check win condition
        // ...
    }
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

Player *App::playerTypeToObject(PlayerType playerType, std::string player_name, FieldColor color) {

    switch(playerType){
        case PlayerType::HUMAN:
            Human player_human(player_name, color);
            return &player_human;
            break;
        case PlayerType::BOT_RANDOM:
            Bot_Random player_bot_random(player_name, color);
            return &player_bot_random;
            break;
        case PlayerType::BOT_HORIZONTAL:
            break;
        case PlayerType::BOT_VERTICAL:
            break;
        case PlayerType::BOT_AI:
            break;
    }
}
