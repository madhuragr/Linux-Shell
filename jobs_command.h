#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/utsname.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include <locale.h>
#include <langinfo.h>
#include <inttypes.h>
#include <unistd.h>
#include <ctype.h>
#include "global_variable.h"

#define MAX_BUF 1024
#define INT_SIZE_BUF 6
#define PID_LIST_BLOCK 32
#define UP_TIME_SIZE 10

int check_if_number (char *str);
const int jobs_command(char **command);
