#include "stranger.h"

int ini();
int _chat_hacking();
int init_chat(Serv_t *servidor, anom_t *user, anom_tt *users, message_t *chat_H);
int request_Con(char *fd, anom_t *user, anom_tt *users);

int _chat_hacking()
{
    char *fd;
    struct Chat **chat_H;
    struct anom_t *user;
    struct anom_tt *users;
    struct Serv_t *servidor;

    fd = malloc(sizeof(message_t));
    if (fd == NULL)
    {
        dprintf(STDERR_FILENO, " Error al Crear chat");
        return (EXIT_FAILURE);
    }

    /* UPDATE WITH ZERO THE STRUCTURE */
    relleno(chat_H);
    relleno(user);
    relleno(users);
    relleno(servidor);

    new_server(servidor);
    new_user(user);

    request_Con(fd, user, users);
    return (0);
}

int ini()
{
    printf("\n\t\t %s [ ✔ ] %s El chat ah iniciado ****** ", BLUE_T, RESET_COLOR);
    return (EXIT_SUCCESS);
}

int init_chat(Serv_t *servidor, anom_t *user, anom_tt *users, message_t *chat_H)
{

    printf("El chat entre %s y %s ah iniciado", user->username, users->username);
    printf("En el servidor %s", servidor->name);
    return (EXIT_SUCCESS);
}

int request_Con(char *fd, anom_t *user, anom_tt *users)
{
    while (1)
    {

        if (new_call(fd, user) == EXIT_SUCCESS)
        {
            printf(" %s [ ✔ ] Usuario1 = %s %s \n", GREEN_T, user, RESET_COLOR);
        }
        if (new_call_2(fd, users) == EXIT_SUCCESS)
        {
            printf(" %s [ ✔ ] Usuario2 = %s %s \n", GREEN_T, users, RESET_COLOR);
        }
        ini();
        break;
        /*
        init_chat(servidor, user, users, chat_H);
    */}
        return 0;
}