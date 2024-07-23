#include "Player.h"
#include <iostream>

using namespace std;

Player::Player(char marker) : marker(marker) {}

void Player::makemove(Board &board) const {
    int number;
    while (true) {
        cout << "Enter a number to place your mark (1-9) like a mobile keypad: ";
        cin >> number;
        number--; // Adjust for 0-based indexing
        if (board.placemarker(marker, number)) {
            board.draw();
            break;
        } else {
            cout << "Invalid move, try again" << endl;
        }
    }
}

char Player::getmark() const {
    return marker;
}

