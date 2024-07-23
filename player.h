#ifndef PLAYER_H
#define PLAYER_H

#include "Board.h"

class Player {
private:
    char marker;
public:
    Player(char marker);
    void makemove(Board &board) const;
    char getmark() const;
};

#endif

