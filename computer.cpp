#include "Computer.h"
#include <cstdlib>

Computer::Computer(char marker) : marker(marker) {}

char Computer::getmark() const {
    return marker;
}

void Computer::makemove(Board &board) const {
    int number;
    while (true) {
        number = rand() % 9;
        if (board.placemarker(marker, number))
            break;
    }
}

