#include <stdio.h>
#include "addsub.h"
#include <iostream>
#include <list>
#include <iterator>

// static std::list<board> Boards;

int *update_board_1_svc(board *argp, struct svc_req *rqstp)
{
   // std::list<board>::iterator board_iterator;
   // for (board_iterator = Boards.begin(); board_iterator != Boards.end(); ++board_iterator)
   // {
   //    if (board_iterator->n == argp->n)
   //    {
   //       Boards.erase(board_iterator);
   //       break;
   //    }
   // }
   // Boards.push_front(*argp);
   return 0;
}

int *get_last_1_svc(board *argp, struct svc_req *rqstp)
{
   // std::list<board>::iterator board_iterator;
   // for (board_iterator = Boards.begin(); board_iterator != Boards.end(); ++board_iterator)
   // {
   //    if (board_iterator->n == argp->n)
   //    {
   //       break;
   //    }
   // }
   // static board ret = *board_iterator;
   // // return (&ret);
   return 0;
}
