// print file contect

#include <stdio.h>

int main(int argc, char **argv)
{
    char *file_name = argv[1];
    FILE *file = fopen(file_name, "r");

    if (file == NULL) // check if file exists
        return 1;

    int c; // character
    int n = 1; // number of chars to read
    
    while((c = getc(file)) != EOF)
    {
        putchar(c);
    }

    return 0;
}

