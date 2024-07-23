#include <iostream>
#include "Game.h"

using namespace std;

int main() {
    while (true) {
        cout << "Welcome to the game " << endl;
        cout << "Select which mode you want to play" << endl;
        cout << "1. Player vs Computer" << endl;
        cout << "2. Player vs Player" << endl;
        cout << "3. Exit" << endl;
        int choice;
        cin >> choice;
        if (choice == 3) {
            return 0;
        } else if (choice > 3) {
            cout << "Invalid choice, try again" << endl;
            continue;
        }
        Game game(choice);
        game.play();
    }
    return 0;
}

