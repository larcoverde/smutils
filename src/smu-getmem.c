/* Display user memory information ('free' cmd on unix)

| TOTAL:     TOTAL MEMORY 
| USED:      USED MEMORY
| FREE:	     FREE

*/

#include <stdio.h>

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
    if (argc > 2)
    {
        usage(program_name);
        return 1;
    }

    get_memory();

    long mem_used = mem_total - mem_free;

    printf("total: %ld\n", mem_total);
    printf("used:  %ld\n", mem_used);
    printf("free:  %ld\n", mem_free);

    return 0;
}

