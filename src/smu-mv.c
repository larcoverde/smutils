#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
        return 1;

    char* old_path = argv[1];
    char* new_path = argv[2];

    if (rename(old_path, new_path) != 0)
        return 1;

    return 0;
}

