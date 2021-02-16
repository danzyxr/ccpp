#include <stdio.h>

// A self-deleting executable

void main()
{
    int del = remove("delete.exe");
    printf("%i\n", del);
    if (!del)
        printf("Files deleted...\n");
    else
        printf("Aborted!\n");
}