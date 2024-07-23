#ifndef GAME_H
#define GAME_H

#include "Board.h"
#include "Player.h"
#include "Computer.h"

class Game {
private:
    Board board;
    Player player1;
    Player player2;
    Computer computer;
    bool running;
    int mode;
public:
    Game(int mode);
    void play();
};

#endif

