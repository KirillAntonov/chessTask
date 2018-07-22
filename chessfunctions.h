#ifndef CHESSFUNCTIONS_H
#define CHESSFUNCTIONS_H
#include <iostream>
#include "chessboard.h"
#include <vector>
#include <iterator>

namespace ChessFunctions
{
    std::vector<ChessBoard> getPossibleMoves(ChessBoard cb);
    bool ownPiece(ChessPiece cp, PlayerColour turn);
}

#endif // CHESSFUNCTIONS_H
