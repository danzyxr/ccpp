#include <stdio.h>

// TODO:
//  24-hour clock
//  calc seconds since last midnight
//  calc seconds until next midnight
//  calc percent ratio of day passed/left

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

    if (am == true)
        printf("Time: %i:%i:%iam\n", newHour, minute, second);
    else if (am == false)
        printf("Time: %i:%i:%ipm\n", newHour, minute, second);
}

int getSeconds(int hour, int minute, int second)
{
    return ((hour * 3600) + (minute * 60) + second);
}

int main(int argc, char const *argv[])
{
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
}
