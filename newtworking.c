#include "stranger.h"

int new_socket();
int relleno();

int new_socket()
{
    printf("New_Socket");
    return (0);
}

int relleno(void *anom)
{
    bzero((void *)&anom, sizeof(anom));
    return 0;
}