# Tic-Tac-Toe Game

## Description

This project is a simple console-based implementation of the classic Tic-Tac-Toe game in C++. It features two modes of play: Player vs. Computer and Player vs. Player. The game provides an interactive experience where players can place their marks on a 3x3 board until one player wins or the game ends in a tie.

## Features

- **Two Modes of Play**:
- **Player vs. Computer**: Play against an AI opponent.
- **Player vs. Player**: Play against another human player.
- **Interactive Console Interface**: Players input their moves through the console.
- **Board Visualization**: The current state of the board is displayed after each move.
- **Winner and Tie Detection**: The game checks for win conditions and ties after each move.
- **Random COMPUTER Moves**: The computer player makes random valid moves.

## How to Play

1. **Clone the Repository**:
   ```sh
   git clone https://github.com/yourusername/tic-tac-toe-game.git
   cd tic-tac-toe-game

Compile the Source Code:
Make sure you have g++ installed and added to your system's PATH.

sh
Copy code
g++ -o tictactoe main.cpp Board.cpp Player.cpp Computer.cpp Game.cpp -mconsole
Run the Game:

sh
Copy code
./tictactoe
Select Game Mode:

Enter 1 for Player vs. Computer.
Enter 2 for Player vs. Player.
Enter 3 to Exit the game.
Make Moves:

Players take turns to enter a number (1-9) to place their mark on the board.
The numbers correspond to positions on a mobile keypad layout.
File Structure
Board.h / Board.cpp: Defines the Board class which handles drawing the board, placing markers, and checking for winners or ties.
Player.h / Player.cpp: Defines the Player class for human players.
Computer.h / Computer.cpp: Defines the Computer class for the AI player.
Game.h / Game.cpp: Defines the Game class which manages the game flow and player interactions.
main.cpp: Contains the main function which initializes the game and handles user input for game mode selection.
