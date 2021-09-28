#include "stranger.h"

int get_cmd(char *cmd);

int get_cmd(char *cmd)
{
    system(cmd);
    if (strcmp(cmd, "exit") == 0)
        _exit_err();
    else if (strcmp(cmd, "Chat_Hack") == 0)
        _chat_hacking();
}