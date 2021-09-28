#include "stranger.h"

int new_call(char conexion, anom_t *call_to);
int new_call_2(char conexion, anom_tt *call_to);
int Call_serv(char conexion, Serv_t *call_to);

int new_call(char conexion, anom_t *call_to)
{
    if (connect(conexion, (struct sockaddr *)&call_to, sizeof(call_to)) < 0)
    {
        printf("\n%s [ ! ] Error conectando con el host... %s \n", RED_T, RESET_COLOR);
        close(conexion);
        return (EXIT_FAILURE);
    }

    dprintf(STDOUT_FILENO, "\n%s Online %s\n", GREEN_T, RESET_COLOR);
    return (EXIT_SUCCESS);
}

int new_call_2(char conexion, anom_tt *call_to)
{
    if (connect(conexion, (struct sockaddr *)&call_to, sizeof(call_to)) < 0)
    {
        printf("\n%s [ ! ] Error conectando con el host... %s \n", RED_T, RESET_COLOR);
        close(conexion);
        return (EXIT_FAILURE);
    }

    dprintf(STDOUT_FILENO, "\n%s Online %s\n", GREEN_T, RESET_COLOR);
    return (EXIT_SUCCESS);
}

int Call_serv(char conexion, Serv_t *call_to)
{
    if (connect(conexion, (struct sockaddr *)&call_to, sizeof(call_to)) < 0)
    {
        dprintf(STDERR_FILENO, "\nDisconnected\n");
        close(conexion);
        return (EXIT_FAILURE);
    }

    dprintf(STDOUT_FILENO, "\nOnline\n");
    return (EXIT_SUCCESS);
}
