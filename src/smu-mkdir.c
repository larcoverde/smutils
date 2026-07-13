// create a new directory

#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char **argv)
{
    char *dir_name = argv[1];
    mkdir(dir_name, 0777);

    return 0;
}
