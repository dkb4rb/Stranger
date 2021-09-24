#include "stranger.h"

int main(int argc, char **argv)
{
    int id = system("id -u");
    char *id_s = _itoa(id);
    char cmd[30];

    if (argc < 2)
    {
        dprintf(STDERR_FILENO, "\n%s Usage: incorrect%s\n", RED_F, RESET_COLOR);
        exit(EXIT_FAILURE);
    }

    struct sockaddr_in server;

    while (1)
    {
        printf("%s" YELLOW_T);
        my_promt();
        scanf("%s", cmd);
        get_cmd(cmd);
        signal(SIGINT, signal_line);
        printf("%s", RESET_COLOR);
    }

    return 0;
}
