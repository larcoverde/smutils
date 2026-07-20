/* Display user memory information ('free' cmd on unix)

| TOTAL:     TOTAL MEMORY 
| USED:      USED MEMORY
| FREE:	     FREE

*/

#include <stdio.h>
#include <string.h>

long mem_total, mem_free;

static void usage(char* program_name)
{
    printf("Usage:\n");
    printf("%s <flag>\n", program_name);
    printf("Use 'smu-help getmem' to more information.\n");
}

void get_memory()
{
    FILE* memory_file = fopen("/proc/meminfo", "r");

    fscanf(memory_file, "MemTotal: %ld kB\n", &mem_total);

    char line[128];
    while (fgets(line, sizeof(line), memory_file))
        if (sscanf(line, "MemFree: %ld kB\n", &mem_free) == 1)
            break;

    fclose(memory_file);
}

int main(int argc, char** argv)
{
    char *program_name = argv[0];
    get_memory();
    long mem_used = mem_total - mem_free;

    if (argc > 2)
    {
        usage(program_name);
        return 1;
    }
    else if (argc == 1)
    {
        printf("total: %ld\n", mem_total);
        printf("used:  %ld\n", mem_used);
        printf("free:  %ld\n", mem_free);
        return 0;
    }

    if (strcmp(argv[1], "-t") == 0 || strcmp(argv[1], "--total") == 0)
    {
        printf("total: %ld\n", mem_total);
    }
    else if (strcmp(argv[1], "-u") == 0 || strcmp(argv[1], "--used") == 0)
    {
        printf("used:  %ld\n", mem_used);
    } 
    else if (strcmp(argv[1], "-f") == 0 || strcmp(argv[1], "--free") == 0)
    {
        printf("free:  %ld\n", mem_free);
    }

    return 0;
}

