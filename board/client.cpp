#include "client.h"

int *Client::update_board(board input)
{
    board newBoard = input;
    int *result = update_board_7(&newBoard, clnt);
    return result;
}

board *Client::get_last(board lastBoard)
{
    board newBoard = lastBoard;
    board *result = get_last_7(&newBoard, clnt);
    if (equals(newBoard, *result))
    {
        return nullptr;
    }
    return result;
}

bool Client::equals(board b1, board b2)
{
    if ((b1.x1 == b2.x1) and (b1.x2 == b2.x2) and (b1.y1 = b2.y1) and (b1.y2 == b2.y2) and (b1.r == b2.r))
    {
        return TRUE;
    }
    return FALSE;
}

bool Client::start(const char *hostname)
{

    /* cria uma struct CLIENT que referencia uma interface RPC */
    clnt = clnt_create(hostname, BOARDS_PROG, BOARDS_VERSION, "udp");

    /* verifica se a referência foi criada */
    if (clnt == (CLIENT *)NULL)
    {
        clnt_pcreateerror(hostname);
        return FALSE;
    }

    return TRUE;
}

// int Client::add(int x, int y)
// {
//     operands ops;
//     int *result;

//     /* junta os parâmetros em um struct */
//     ops.x = x;
//     ops.y = y;

//     /* chama a função remota */
//     result = add_1(&ops, clnt);
//     if (result == NULL)
//     {
//         printf("Problemas ao chamar a função remota\n");
//         return FALSE;
//     }

//     return (*result);
// }

// int Client::sub(int x, int y)
// {
//     operands ops;
//     int *result;

//     /* junta os parâmetros em um struct */
//     ops.x = x;
//     ops.y = y;

//     /* chama a função remota */
//     result = sub_1(&ops, clnt);
//     if (result == NULL)
//     {
//         printf("Problemas ao chamar a função remota\n");
//         return FALSE;
//     }
//     return (*result);
// }

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
