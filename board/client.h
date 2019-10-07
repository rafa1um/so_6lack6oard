#ifndef CLIENT_H
#define CLIENT_H

#include <stdio.h>
#include "boards.h"

class Client
{
public:
    int *update_board(board newBoard);
    board *get_last(board lastBoard);
    bool start(const char *hostname);
    bool equals(board b1, board b2);

private:
    CLIENT *clnt;
    int x, y;
};
#endif
