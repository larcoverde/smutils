// copy file
// scp /path/to/ogfile /path/to/newfile
#include <stdio.h>

int main(int argc, char* argv[])
{
    if (argc != 2)
        return 1;

    char *og_file_name  = argv[1];
    FILE *og_file        = fopen(og_file_name, "r");

    if (!og_file)
        return 1;

    char *new_file_name = argv[2];
    FILE *new_file       = fopen(new_file_name, "w");

    int c;
    while ((c = getc(og_file)) != EOF)
        putc(c, new_file);

    fclose(og_file);
    fclose(new_file);

    return 0;
}

