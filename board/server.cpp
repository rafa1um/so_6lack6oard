#include <stdio.h>
#include "boards.h"
#include <iostream>
#include <list>
#include <iterator>

static std::list<board> Boards;

int *update_board_7_svc(board *argp, struct svc_req *rqstp)
{
   printf("%d %d %d %d %d", argp->n, argp->x1, argp->y1, argp->x2, argp->y2);
   static std::list<board>::iterator board_iterator;
   for (board_iterator = Boards.begin(); board_iterator != Boards.end(); ++board_iterator)
   {
      printf("%d %d %d %d %d", argp->n, argp->x1, argp->y1, argp->x2, argp->y2);
      if (board_iterator->n == argp->n)
      {
         Boards.erase(board_iterator);
         break;
      }
   }
   printf("%d %d %d %d %d", argp->n, argp->x1, argp->y1, argp->x2, argp->y2);
   Boards.push_front(*argp);
   return 0;
}

board *get_last_7_svc(board *argp, struct svc_req *rqstp)
{
   printf("%d %d %d %d %d", argp->n, argp->x1, argp->y1, argp->x2, argp->y2);
   static std::list<board>::iterator board_iterator;
   for (board_iterator = Boards.begin(); board_iterator != Boards.end(); ++board_iterator)
   {
      printf("%d %d %d %d %d", argp->n, argp->x1, argp->y1, argp->x2, argp->y2);
      if (board_iterator->n == argp->n)
      {
         static board ret = *board_iterator;
         return (&ret);
      }
   }

   printf("%d %d %d %d %d", argp->n, argp->x1, argp->y1, argp->x2, argp->y2);
   return nullptr;
}

int *msg_7_svc(board *argp, struct svc_req *rqstp)
{
   static int ret = 0;
   printf("chegou aqui\n");
   return (&ret);
}
