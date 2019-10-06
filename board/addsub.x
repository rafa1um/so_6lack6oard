/* addsub.x : defini��o da interface */

/*#define PROGRAM_NUMBER 12345678
#define VERSION_NUMBER 1*/

#define PROGRAM_NUMBER 1111111
#define VERSION_NUMBER 1

/* tipo de dado que será passado aos procedimentos remotos */

struct board {
   int x;
   int y;
   int r;
   int g;
   int b;
   int n;
};

/* Defini��o da interface que ser� oferecida aos clientes */

program ADDSUB_PROG
{
   version ADDSUB_VERSION
   {
     int UPDATE_BOARD (board) = 1;
     board GET_LAST (board) = 2;
   }
   = VERSION_NUMBER;
}
= PROGRAM_NUMBER;

 
