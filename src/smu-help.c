// Display help message of all smu tools

#include <stdio.h>
#include <string.h>

void help_help()
{
    printf("SMU - help\n");
    printf("version 1.5\n");
    printf("display help message for smu programs.\n");
    printf("usage:\n");
    printf("      help <program>\n");
    printf("source code -> smutils/src/smu-help.c");
}

void help_clear()
{
    printf("SMU - clear\n");
    printf("version 1.0\n");
    printf("clear console screen.\n");
    printf("usage:\n");
    printf("      clear\n");
    printf("source code -> smutils/src/smu-clear.c");
}

void help_getmem()
{
    printf("SMU - getmem\n");
    printf("version 1.1\n");
    printf("display memory information.\n");
    printf("usage:\n");
    printf("      getmem <flag>\n");
    printf("      flags:\n");
    printf("            -t --total        display only total memory.\n");
    printf("            -u --used         display only used memory.\n");
    printf("            -f --free         display only free memory.\n\n");
    printf("             use NO flags to get all information.\n\n");
    printf("      at this moment smu-getmem only accept one flag at time.\n\n");
    printf("source code -> smutils/src/smu-getmem.c");
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        char *program = argv[1];
        if (strcmp(program, "clear") == 0)
            help_clear();
        else if (strcmp(program, "getmem") == 0)
            help_getmem();
    }
    else
    {
        help_help();
        return 0;
    }

    return 0;
}

