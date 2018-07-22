#ifndef MOVETEMPLATE_H
#define MOVETEMPLATE_H

#include <vector>

typedef std::vector<std::vector<std::pair<int, int>>> MoveTemplate;

const MoveTemplate pawnWhiteMoveNotTake =
{
    { std::pair<int, int>{0, 1} }
};

const MoveTemplate pawnWhiteMoveTake =
{
    { std::pair<int, int>{1, 1}, std::pair<int, int>{-1, 1} }
};

const MoveTemplate pawnBlackMoveNotTake =
{
    { std::pair<int, int>{0, -1} }
};

const MoveTemplate pawnBlackMoveTake =
{
    { std::pair<int, int>{1, -1}, std::pair<int, int>{-1, -1} }
};

#endif // MOVETEMPLATE_H
