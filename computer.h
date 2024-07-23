#ifndef COMPUTER_H
#define COMPUTER_H

#include "Board.h"

class Computer {
private:
    char marker;
public:
    Computer(char marker);
    void makemove(Board &board) const;
    char getmark() const;
};

#endif

