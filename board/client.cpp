#include "client.h"
#include "addsub.h"

int Client::update_board(board input)
{
    board newBoard = input;
    int *result = update_board_1(&input, clnt);
    return (*result);
}

board Client::get_last(board lastBoard)
{
    board *result = get_last_1(&lastBoard, clnt);
    return (*result);
}

// int main(int argc, char *argv[])
// {
//     CLIENT *clnt;
//     Client newClient;
//     int x, y;

//     /* verifica se o cliente foi chamado corretamente */
//     if (argc != 4)
//     {
//         fprintf(stderr, "Usage: %s hostname num1 num2\n", argv[0]);
//         exit(1);
//     }

//     /* cria uma struct CLIENT que referencia uma interface RPC */
//     clnt = clnt_create(argv[1], ADDSUB_PROG, ADDSUB_VERSION, "udp");

//     /* verifica se a referência foi criada */
//     if (clnt == (CLIENT *)NULL)
//     {
//         clnt_pcreateerror(argv[1]);
//         exit(1);
//     }

//     /* obtém os dois inteiros que serão passados via RPC */
//     x = atoi(argv[2]);
//     y = atoi(argv[3]);

//     /* executa os procedimentos remotos */
//     printf("%d + %d = %d\n", x, y, newClient.add(clnt, x, y));
//     printf("%d - %d = %d\n", x, y, newClient.sub(clnt, x, y));

//     return (0);
// }
