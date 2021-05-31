#include "libr.hpp"
#include <iostream>

int main()
{
    int love = 21;
    for (int i = 0; i < 10; i++)
    {
        love = (love + 7) / love;
    }

    std::cout << "Hello, world!\n";
    libr::myLibrary();
}
