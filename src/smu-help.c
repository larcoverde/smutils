// Display help message of all smu tools

#include <stdio.h>
#include <string.h>

void help_clear()
{
    printf("SMU - clear\n");
    printf("version 1.0\n");
    printf("clear console screen.\n");
    printf("usage:\n");
    printf("      smu-clear\n");
    printf("      (or just 'clear' if you compiled that way.)\n\n");
    printf("source code -> smutils/src/smu-clear.c");
}

int main(int argc, char **argv)
{
    char *program = argv[1];
    
    if (strcmp(program, "clear") == 0)
        help_clear();
    else if (strcmp(program, "getmem") == 0)
        //help_getmem();

    return 0;
}

