#include "Game.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

Game::Game(int mode) : player1('O'), player2('X'), computer('X'), running(true), mode(mode) {
    srand(time(0));
    board.draw();
}

void Game::play() {
    if (mode == 1) {
        while (running) {
            player1.makemove(board);
            if (board.checkwinner(player1.getmark())) {
                cout << "Player 1 wins" << endl;
                break;
            }
            if (board.checktie()) {
                cout << "It's a tie, try again" << endl;
                break;
            }

            computer.makemove(board);
            board.draw();
            if (board.checkwinner(computer.getmark())) {
                cout << "Computer wins!! Hard luck" << endl;
                break;
            }
            if (board.checktie()) {
                cout << "It's a tie, try again" << endl;
                break;
            }
        }
    } else if (mode == 2) {
        while (running) {
            player1.makemove(board);
            if (board.checkwinner(player1.getmark())) {
                cout << "Player 1 wins" << endl;
                break;
            }
            if (board.checktie()) {
                cout << "It's a tie, try again" << endl;
                break;
            }

            player2.makemove(board);
            board.draw();
            if (board.checkwinner(player2.getmark())) {
                cout << "Player 2 wins" << endl;
                break;
            }
            if (board.checktie()) {
                cout << "It's a tie, try again" << endl;
                break;
            }
        }
    }
}

