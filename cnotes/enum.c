#include <stdio.h>

#define DAYS_IN_YEAR 365
#define YOUR_MOM "is fat"

enum days
{
    SUN = 1,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
};

// Array types are adjusted to pointer types
// When passed into a function as a parameter

int main()
{
    printf("Your mom %s\n", YOUR_MOM);
    printf("The day is #%d!\n", FRI);

    return 0;
}