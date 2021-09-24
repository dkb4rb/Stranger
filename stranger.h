#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>

/* THIS IS THE NEW PALET OF COLORS */
#define RESET_COLOR "\033[0m"
#define BLACK_T "\033[30m"
#define BLACK_F "\033[40m"
#define RED_T "\033[31m"
#define RED_F "\033[41m"
#define GREEN_T "\033[32m"
#define GREEN_F "\033[42m"
#define YELLOW_T "\033[33m"
#define YELLOW_F "\033[43m"
#define BLUE_T "\033[34m"
#define BLUE_F "\033[44m"
#define MAGENT_T "\033[35m"
#define MAGENT_F "\033[45m"
#define CYAN_T "\033[36m"
#define CYAN_F "\033[46m"
#define WHITE_T "\033[37m"
#define WHITE_F "\033[47m"

#define red "\033[31m"
#define no_Colour "\033[0m"
#define green "\033[32m"

typedef struct message
{
    int date;
    char *ip;

    char *usr;

} message_t;

char *_itoa(int n);
void signal_line(int signal);
int get_cmd(char *cmd);
void my_promt();
int _exit_err(void);
int _pwd(void);