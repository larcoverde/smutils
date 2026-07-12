// create a new file
#include <stdio.h>
#include <string.h>

void make_empty_file(char *file_name)
{
    FILE *new_file = fopen(file_name, "w");
    fclose(new_file);
}

void make_filled_file(char *file_name, char *text)
{
    FILE *new_file = fopen(file_name, "w");
    fprintf(new_file, text);
    fclose(new_file);
}

int main(int argc, char **argv)
{
    char *file_name = argv[1];
    char *flag = argv[2];
    char *text = argv[3];

    if (strcmp(flag, "-i") == 0 || strcmp(flag, "--insert") == 0)
    {
        make_filled_file(file_name, text);
        return 0;
    }

    make_empty_file(file_name);
    return 0;
}

