#include "Board.h"
#include <iostream>

using namespace std;

Board::Board() {
    for (int i = 0; i < 9; i++) {
        spaces[i] = ' ';
    }
}

void Board::draw() const {
    cout << '\n';
    cout << "   |   |   " << endl;
    cout << " " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << " " << endl;
    cout << "   |   |   " << endl;
    cout << endl;
}

bool Board::checkwinner(char marker) const {
    const int wincondition[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8},
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
        {0, 4, 8}, {2, 4, 6}
    };
    for (int i = 0; i < 8; i++) {
        if (spaces[wincondition[i][0]] == marker && spaces[wincondition[i][1]] == marker && spaces[wincondition[i][2]] == marker && spaces[wincondition[i][0]] != ' ') {
            return true;
        }
    }
    return false;
}

bool Board::checktie() const {
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ') {
            return false;
        }
    }
    return true;
}

bool Board::placemarker(char mark, int place) {
    if (place >= 0 && place <= 8 && spaces[place] == ' ') {
        spaces[place] = mark;
        return true;
    }
    return false;
}

