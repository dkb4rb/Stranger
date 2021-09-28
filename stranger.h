/* THIS IS ALL LIBRARIES */
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
#include <limits.h>

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

/* SIZE DEFAULT TO BUFFERS */
#define BUFF 1024
#define DB "DB/DB_Stranger_users.tmp"

//            ############# STRUCTURES DECLARATION #################

/* STRUCT TO CONSTRUCTOR ANOM_T */
typedef struct usr_1
{
    char *encr;
    size_t id_user;
    int status;
    char *username;
    char *mail;
    char *ip;
    char *send_usr_2;
    char *recv_usr_2;
    struct Chat **chat_users;
    char *pass;

} anom_t;

/* STRUCT TO CONSTRUCTOR ANOM_TT */
typedef struct usr_2
{
    char *encr;
    size_t id_user;
    int status;
    char *username;
    char *mail;
    char *ip;
    char *send_usr_1;
    char *recv_usr_1;
    struct Chat **chat_users;
    char *pass;
} anom_tt;

typedef struct Chat
{
    int status;
    size_t id_chat;
    int date;
    anom_t *usr_1;
    anom_tt *usr_2;
    char **speak;

} message_t;

typedef struct Chat_serv
{
    int status;
    size_t id_chat;
    int date;
    struct message_t **request_1;
    struct message_t **request_2;
    struct message_t **send_request_1;
    struct message_t **send_request_2;
    anom_t *usr_1;
    anom_tt *usr_2;
    char **speak;

} messsageServ_t;

typedef struct server
{
    int status_Service;
    char *name;
    anom_t anom;
    anom_tt anomm;
    struct messsageServ_t **chat;
    char *History_1;
} Serv_t;

char *_itoa(int n);
void signal_line(int signal);
int get_cmd(char *cmd);
void my_promt();
int _exit_err(void);
int _pwd(void);

/* CALLS TO USER TO SERVER */
int new_call(char conexion, anom_t *call_to);
int new_call_2(char conexion, anom_tt *call_to);
int Call_serv(char conexion, Serv_t *call_to);
int new_user();

/* CHAT HACKING */
int _chat_hacking();
int init_chat(Serv_t *servidor, anom_t *user, anom_tt *users, message_t *chat_H);
int ini();

/* NETWORKING FILES */
int new_socket();
int new_user(anom_t *user);
int new_server(Serv_t *server);
int request_Con(char *fd, anom_t *user, anom_tt *users);

/* DATABASES FOR USERS */
int usr_in_db(anom_t *user);
int assign_values(anom_t *user);
