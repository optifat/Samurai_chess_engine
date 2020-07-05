#ifndef CHESS_ENGINE_MOVE_H
#define CHESS_ENGINE_MOVE_H

#include <string>

#include "Board.h"


class Move{

public:
    Move();

    virtual void makeMove(Board *board, int initSquare, int endSquare, bool take);

    bool openingPin(Board *board, int initSquare, int endSquare);
};


#endif //CHESS_ENGINE_MOVE_H
