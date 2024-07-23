#ifndef BOARD_H
#define BOARD_H

class Board {
private:
    char spaces[9];
public:
    Board();
    void draw() const;
    bool checkwinner(char marker) const;
    bool checktie() const;
    bool placemarker(char mark, int place);
};

#endif

