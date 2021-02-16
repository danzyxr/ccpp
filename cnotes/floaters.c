#include <math.h>
#include <stdio.h>

int main()
{
    char a = 'a';

    double logged = log(17.0);
    printf("%f\n", logged);

    const double PI = acos(-1.0);
    printf("%f\n", PI);
    printf("%i\n", (int)PI);

    double degrees = 45.0;
    double radians = (degrees * 2 * PI) / 360;
    double height = sin(radians);
    printf("%f\n", height);

    double x = exp(log(42.0));
    printf("%f\n", x);

    return 0;
}