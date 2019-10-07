#define PROGRAM_NUMBER 1111111
#define VERSION_NUMBER 7 

/* tipo de dado que será passado aos procedimentos remotos */

struct board {
   int x1;
   int y1;
   int x2;
   int y2;
   int r;
   int g;
   int b;
   int n;
};

/* Defini��o da interface que ser� oferecida aos clientes */

program BOARDS_PROG
{
   version BOARDS_VERSION
   {
     int UPDATE_BOARD (board) = 1;
     board GET_LAST (board) = 2;
     int MSG (board) = 3;
   }
   = VERSION_NUMBER;
}
= PROGRAM_NUMBER;

 
