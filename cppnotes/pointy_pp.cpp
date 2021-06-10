#include <iostream>

int main()
{
    int x = 0;
    printf("%p\n", (void *)&x);

    int *ptr_to_int;
    ptr_to_int = &x;
    printf("%p\n", (void *)&ptr_to_int);
    return 0;
}
