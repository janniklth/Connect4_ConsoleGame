
# Connect4_ConsoleGame

This project is a console-based implementation of the Connect 4 game. It is developed as an exercise project for our Programming Lecture at DHBW Stuttgart.

## Description

Connect 4 is a classic two-player game where the goal is to connect four discs of the same color in a vertical, horizontal, or diagonal line on a grid. This project provides a command-line interface to play the game against a bot or another human player.

### Class Diagram

<img src="/UML_Diagram.png" alt="Alt text" title="Optional title">

- `App`: Manages the start of the game and processes the player type choices of the user.
- `Board`: Manages the game board and provides operations for placing discs and checking win conditions.
- `Player`: Represents a player and stores information such as player name and disc color.
   - `Human`: Is a player, who is controlled by the user.
   - `Bot_Horizontal`: Is a player bot, who always places the discs horizontal.
   - `Bot_Vertical`: Is a player bot, who always places the discs vertical.
   - `Bot_Random`: Is a player bot, who always places the discs random.
   - `Bot_AI`: Is a player bot, who always places the discs in a smart way with the target to win.
- `FieldColor`: Represents the disc colors.
- `PlayerType`: Represents all player types.


## Features

- Interactive gameplay for two human players
- Single-player mode against computer bots of different difficulty levels
- Multiple bot strategies, including horizontal, vertical, random, and smart moves
- Visual representation of the game board using ASCII characters
- Win condition detection and game over handling
- Input validation and error handling

## Technologies Used

- C++ programming language
- Standard Library

## Getting Started

### Prerequisites

- C++ compiler

### Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/janniklth/Connect4_ConsoleGame.git

2. Compile the source code using a C++ compiler:

   ```bash
   g++ main.cpp -o connect4

### Usage

1. Navigate to the project directory.

2. Run the compiled executable:

   ```bash
   ./connect4

4. Follow the on-console instructions to select the opponents and play the game.


## Contributing

Contributions to this project are welcome. Some areas where you can contribute include:

 - Implementing additional features or game modes 
 - Enhancing the user interface or graphics 
 - Improving the bot strategies or adding new ones
 - Fixing bugs or optimizing the code 
 
 If you have any suggestions or find any issues, please create a new issue in the project repository.

## License

This project is licensed under the MIT License. For more information, please see the [LICENSE](LICENSE.md) file.


## Contact

Thank you for checking out our project. We hope it is fun to play and helpful in expanding your knowledge of C++. If you have any questions, don't hesitate to contact ous.



