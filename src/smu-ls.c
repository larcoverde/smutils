// list directory contents
#include <stdio.h>
#include <dirent.h>

int main(int argc, char**argv)
{
    char *path;
    if (!argv[1])
        path = ".";
    else
        path = argv[1];
    DIR *dir = opendir(path);
    if (!dir)
    {
        perror("opendir");
        return 1;
    }
    return 0;
}

