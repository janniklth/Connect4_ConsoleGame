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
    std::string player_red_name = enterNickname();

    PlayerType player_yellow = choosePlayerType("second (yellow)");
    std::string player_yellow_name = enterNickname();

    // create players
    Player *player1 = playerTypeToObject(player_red, player_red_name, FieldColor::RED);
    Player *player2 = playerTypeToObject(player_yellow, player_yellow_name, FieldColor::YELLOW);
    
    // create the board and test print it
    Board gameboard(6, 7);
    gameboard.printBoard();



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


    while (!(std::cin >> selected_player_type)) {
        cout << "This was no number. Please try again!" << endl;
        cout << "Please enter a number: ";

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

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

// Method to convert a player type to a player object (enum to object)
Player *App::playerTypeToObject(PlayerType playerType, std::string player_name, FieldColor color) {

    switch (playerType) {
        case PlayerType::HUMAN:
            return new Human(player_name, color);
        case PlayerType::BOT_RANDOM:
            return new Bot_Random(player_name, color);
        case PlayerType::BOT_HORIZONTAL:
            return nullptr;
        case PlayerType::BOT_VERTICAL:
            return nullptr;
        case PlayerType::BOT_AI:
            return nullptr;
        default:
            return nullptr;
    }
}

// Method for entering nickname
std::string App::enterNickname() {
    cout << "Please enter your Nickname: ";

    std::string nickname;
    std::cin >> nickname;

    return nickname;
}
