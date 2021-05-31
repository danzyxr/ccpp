#include <stdio.h>

void printTime(int hour, char delimit, int minute)
{
    printf("The current time is:\n%i%c%ipm", hour, delimit, minute);
}

void printDate(int month, int day, int year)
{
    printf("\nAmerican: %i/%i/%i", month, day, year);
    printf("\nEuropean: %i.%i.%i\n", day, month, year);
}

int main()
{
    printTime(4, ':', 20);
    printDate(5, 13, 1993);

    return 0;
}