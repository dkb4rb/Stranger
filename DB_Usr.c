#include "stranger.h"

int usr_in_db(anom_t *user);
int usr_in_db(anom_t *user)
{
    ssize_t fd_DB, w1;
    int len = 0;

    if (user == NULL)
    {
        dprintf(STDERR_FILENO, "\n %s Problemas al agregar el usuario a la base de datos %s \n", RED_T, RESET_COLOR);
        return (EXIT_FAILURE);
    }

    fd_DB = open(DB, O_CREAT | O_RDWR | O_APPEND, 00600);
    if (fd_DB == NULL)
    {
        dprintf(STDERR_FILENO, " %s No se pudo abrir la DB %s\n", RED_T, RESET_COLOR);
        return (EXIT_FAILURE);
    }

    if (user)
    {
        w1 = write(fd_DB, user->username, BUFF);
    }
    dprintf(STDIN_FILENO, "\n %s [ ✔ ] Usuario creado Correctamente %s\n", GREEN_T, RESET_COLOR);
    close(fd_DB);

    return (EXIT_SUCCESS);
}