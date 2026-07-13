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

void help_ls()
{
    printf("SMU - ls\n");
    printf("version 1.0\n");
    printf("list directory content.\n");
    printf("usage:\n");
    printf("      ls <dir>\n\n");
    printf("      if no directory its provided, it uses the current directory.\n\n");
    printf("source code -> smutils/src/smu-ls.c");
}

void help_mkfile()
{
    printf("SMU - mkfile\n");
    printf("version 1.1\n");
    printf("create a new file.\n");
    printf("usage:\n");
    printf("      mkfile <file_name> <flag> <text>\n");
    printf("      flags:\n");
    printf("            -i  --insert     insert text in the file.\n\n");
    printf("source code -> smutils/src/smu-mkfile.c");
}

void help_mkdir()
{
    printf("SMU - mkdir\n");
    printf("version 1.0\n");
    printf("create a new directory.\n");
    printf("usage:\n");
    printf("      mkdir <dir_name>\n\n");
    printf("source code -> smutils/src/smu-mkdir.c");
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
        else if (strcmp(program, "ls") == 0)
            help_ls();
        else if (strcmp(program, "mkfile") == 0)
            help_mkfile();
        else if (strcmp(program, "mkdir") == 0)
            help_mkdir();
    }
    else
    {
        help_help();
        return 0;
    }

    return 0;
}

