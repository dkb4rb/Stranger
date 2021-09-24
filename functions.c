#include "stranger.h"

int _pwd(void);

int _exit_err(void)
{
    printf("\n %s[!] %s Saliendo del Programa .... %s \n", RED_T, GREEN_T, RESET_COLOR);
    exit(EXIT_SUCCESS);
}

int _pwd(void)
{
    system("pwd");
    return (EXIT_SUCCESS);
}