#include <iostream>

extern "C"
{
    #include "fibonacciNumber.h"
}

int main()
{
    for(int i = 0; i < 10; i++)
    {
        std::cout << fibNum(i) << "\n";
    }

    return 0;
}