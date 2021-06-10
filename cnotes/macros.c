#include <stdio.h>
#include <stdbool.h>

#define T 1
#define F 0
typedef int buul;

buul booly = F;

typedef enum
{
    faltz = (1 == 0),
    trooe = (!faltz)
} buulean;

buulean booler = faltz;

#define DAYS_IN_YEAR 365
#define SECS_IN_HOUR 3600
#define AVERAGE(x, y) ((x + y) / 2)
#define YOUR_MOM "is fat"
#define pf(x) printf(x)

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

int main()
{
    pf("asdf\n");
    printf("Your mom %s\n", YOUR_MOM);
    printf("The day is #%d!\n", FRI);

    return 0;
}
