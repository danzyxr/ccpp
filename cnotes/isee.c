#include <math.h>    // cos()
#include <stdio.h>   // printf()
#include <stdbool.h> // bool

typedef int buul;
#define T 1
#define F 0

buul booly = F;

typedef enum
{
    faltz = (1 == 0),
    trooe = (!faltz)
} buulean;

buulean booler = faltz;

void printTime(int hour, char delimit, int minute)
{
    printf("The current time is:\n%i%c%ipm", hour, delimit, minute);
}

void dateTime(int month, int day, int year)
{
    printf("\nAmerican: %i/%i/%i", month, day, year);
    printf("\nEuropean: %i.%i.%i\n", day, month, year);
}

void clockTime(int hour, int minute, int second)
{
    bool am = 0;
    int newHour = 0;

    if (hour < 12)
    {
        am = true;
        newHour = hour;
    }
    else
    {
        if (hour >= 12)
        {
            if (hour == 24)
                am = true;
            else
                am = false;
            if (hour == 12)
                newHour = hour;
            else
                newHour = hour - 12;
        }
    }

    // int -> char *str ...?

    if (am == true)
        printf("Time: %i:%i:%iam\n", newHour, minute, second);
    else if (am == false)
        printf("Time: %i:%i:%ipm\n", newHour, minute, second);
}

int getSeconds(int hour, int minute, int second)
{
    return ((hour * 3600) + (minute * 60) + second);
}

int main(int argc, char *argv[])
{
    // int num = 42;
    // char fred = 'f';

    // printf("%i\n", 14);
    // printf("%i\n", num);

    // printf("%c\n", 'c');
    // printf("%c\n", fred);

    printTime(4, ':', 20);

    dateTime(5, 13, 1993);

    clockTime(6, 25, 15);
    clockTime(12, 33, 22);
    clockTime(23, 0, 22);
    clockTime(24, 5, 5);

    float ourTime = getSeconds(12, 50, 5);
    float dayTime = getSeconds(24, 0, 0);

    float secondsLeft = dayTime - ourTime;
    float perCent = ourTime / dayTime;

    printf("Our time: %0.3f\n", ourTime);
    printf("Seconds left in the day: %0.3f\n", secondsLeft);
    printf("Percentage of day passed: %0.3f\n", perCent);

    printf("The cosine of 1 is %0.3g\n", cos(1.0));
    printf("Bye!");
    return 0;
}