#include "stranger.h"

int main(int argc, char **argv)
{
    int id = system("id -u");
    char *id_s = _itoa(id);
    char cmd[30];

    argv[1] = "s";
    argc = 2;

    struct sockaddr_in server_add, client_add;

    if (argc < 2)
    {
        dprintf(STDERR_FILENO, "\n%s Usage: incorrect%s\n", RED_T, RESET_COLOR);
        exit(EXIT_FAILURE);
    }

    while (1)
    {
        signal(SIGINT, signal_line);
        my_promt();
        scanf("%s", cmd);
        get_cmd(cmd);
    }

    return 0;
}
