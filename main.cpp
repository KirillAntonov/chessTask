#include <iostream>
#include <chessboard.h>
#include <chessfunctions.h>

int main()
{
    ChessBoard cb;
    cb.debugPrint();
    cb.placePiece('E', 2, 'p');
    cb.debugPrint();

    auto tmp = ChessFunctions::getPossibleMoves(cb);



    return 0;
}
