// list directory contents
#include <stdio.h>
#include <dirent.h>

int main(int argc, char**argv)
{
    char *path = argv[1];
    DIR *dir = opendir(path);
    if (!dir)
        printf("error");
    return 0;
}

