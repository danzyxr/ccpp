#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n = 42;
    int len = snprintf(NULL, 0, "%d", n);
    char *str = malloc(len + 1);

    sprintf(str, "%d", n);

    // printf("%i", snprintf(*str, len + 1, "%d", n));

    free(str);

    return 0;
}