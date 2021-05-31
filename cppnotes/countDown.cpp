#include <iostream>

void countDownLoop(int countFrom = 10)
{
    int timer = countFrom;

    printf("Counting down...\n%d\n", countFrom);

    while (timer > 0)
    {
        timer = timer - 1;
        std::cout << timer << std::endl;
    }
}

void countDownRecur(int n = 10)
{
    if (n == 0)
        std::cout << 0 << std::endl;
    else
    {
        std::cout << n << std::endl;
        countDownRecur(n - 1);
    }
}

int main()
{
    countDownLoop();
    countDownRecur();
    return 0;
}
