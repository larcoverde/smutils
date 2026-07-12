// create a new file
#include <stdio.h>

void make_file(char *file_name)
{
    FILE *new_file = fopen(file_name, "w");
}

int main(int argc, char **argv)
{
    char *file_name = argv[1];
    make_file(file_name);
    return 0;
}

