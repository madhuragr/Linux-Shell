#include "pwd_command.h"

const int pwd_command(char **command)
{
    if(command == NULL)
    {
        //Not any command
        fprintf(stderr , "%s\n", "command: expected command");
        return 1;
    }
    fprintf(stdout , "%s\n", current_directory);
    return 1;
}
