#include "stranger.h"

int new_user(anom_t *user);
int new_server(Serv_t *server);
int assign_values(anom_t *user);

int new_user(anom_t *user)
{

    user = malloc(sizeof(anom_t));
    if (user == NULL)
    {
        dprintf(STDERR_FILENO, "\nNo se pudo crear el usuario 1\n");
        return (EXIT_FAILURE);
    }
    assign_values(user);

    /* ES NECESARIO REVISAR EL POR QUE LOS VALORES NO SE CARGAN COMO SE NECESITA*/
    usr_in_db(user);

    printf("\n\t%s [ ! ] Bienvenido:%s %s %s\n", YELLOW_T, CYAN_T, user->username, RESET_COLOR);
    printf("\t%s [ ! ] Este es tu id == %s %d %s\n", YELLOW_T, CYAN_T, user->id_user, RESET_COLOR);

    return (EXIT_SUCCESS);
}

int new_server(Serv_t *server)
{

    server = malloc(sizeof(anom_t));
    if (server == NULL)
    {
        dprintf(STDERR_FILENO, "\nNo se pudo crear el Servidor\n");
        return (EXIT_FAILURE);
    }

    server->name = "Zeus";

    dprintf(STDIN_FILENO, "\n %s [ ✔ ] Servidor creado Correctamente %s\n\n", GREEN_T, RESET_COLOR);
    return (EXIT_SUCCESS);
}

int assign_values(anom_t *user)
{

    char usr[20];
    char mail[50], pass[10];
    int id;

    srand(time(0));
    id = rand() - RAND_MAX / 2;

    user->id_user = id;

    printf("\t%s [*] %s Ingresa tu usuario: ", GREEN_T, RESET_COLOR);
    scanf("%s", usr);
    user->username = &usr;

    printf("\t%s [*] %s  Ingresa tu correo: ", GREEN_T, RESET_COLOR);
    scanf("%s", mail);
    user->mail = &mail;

    printf("\t%s [*] %s  Ingresa tu Contraseña: ", GREEN_T, RESET_COLOR);
    scanf("%s", pass);
    user->pass = &pass;

    return (EXIT_SUCCESS);
}