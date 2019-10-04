#ifndef CLIENT_H
#define CLIENT_H

#include <stdio.h>
#include "addsub.h"

class Client
{
public:
    int add(int x, int y);
    int sub(int x, int y);
    bool start(const char *hostname);

private:
    CLIENT *clnt;
    int x, y;
};
#endif
