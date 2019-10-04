#ifndef CLIENT_H
#define CLIENT_H

#include <stdio.h>
#include "addsub.h"

class Client
{
public:
    int add(CLIENT *clnt, int x, int y);
    int sub(CLIENT *clnt, int x, int y);
};
#endif
