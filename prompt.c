#include "stranger.h"

void my_promt();
void signal_line(int signal);

void signal_line(int signal)
{
    if (signal == SIGINT)
    {
        system("clear");

        printf("\n %s[!] %s Saliendo del Programa .... %s \n", RED_T, GREEN_T, RESET_COLOR);
        exit(EXIT_FAILURE);
    }
}

void my_promt()
{
    printf("\n%s %s ", CYAN_T, RESET_COLOR);
}
