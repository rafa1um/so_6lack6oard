#ifndef CLIENT_H
#define CLIENT_H

#include <stdio.h>
#include "addsub.h"

class Client
{
public:
    int update_board(board newBoard);
    board get_last(board lastBoard);
    bool start(const char *hostname);

private:
    CLIENT *clnt;
    int x, y;
};
#endif
