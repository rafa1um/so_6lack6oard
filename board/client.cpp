#include "client.h"
#include "addsub.h"

int Client::add(CLIENT *clnt, int x, int y)
{
    operands ops;
    int *result;

    /* junta os parâmetros em um struct */
    ops.x = x;
    ops.y = y;

    /* chama a função remota */
    result = add_1(&ops, clnt);
    if (result == NULL)
    {
        printf("Problemas ao chamar a função remota\n");
        exit(1);
    }

    return (*result);
}

int Client::sub(CLIENT *clnt, int x, int y)
{
    operands ops;
    int *result;

    /* junta os parâmetros em um struct */
    ops.x = x;
    ops.y = y;

    /* chama a função remota */
    result = sub_1(&ops, clnt);
    if (result == NULL)
    {
        printf("Problemas ao chamar a função remota\n");
        exit(1);
    }
    return (*result);
}

int main(int argc, char *argv[])
{
    CLIENT *clnt;
    Client newClient;
    int x, y;

    /* verifica se o cliente foi chamado corretamente */
    if (argc != 4)
    {
        fprintf(stderr, "Usage: %s hostname num1 num2\n", argv[0]);
        exit(1);
    }

    /* cria uma struct CLIENT que referencia uma interface RPC */
    clnt = clnt_create(argv[1], ADDSUB_PROG, ADDSUB_VERSION, "udp");

    /* verifica se a referência foi criada */
    if (clnt == (CLIENT *)NULL)
    {
        clnt_pcreateerror(argv[1]);
        exit(1);
    }

    /* obtém os dois inteiros que serão passados via RPC */
    x = atoi(argv[2]);
    y = atoi(argv[3]);

    /* executa os procedimentos remotos */
    printf("%d + %d = %d\n", x, y, newClient.add(clnt, x, y));
    printf("%d - %d = %d\n", x, y, newClient.sub(clnt, x, y));

    return (0);
}