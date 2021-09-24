#include "stranger.h"

int get_cmd(char *cmd);

int get_cmd(char *cmd)
{
    system(cmd);

    if (strcmp(cmd, "exit") == 0)
        _exit_err();
}
