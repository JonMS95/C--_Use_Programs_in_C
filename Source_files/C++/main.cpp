#include <iostream>

extern "C" 
{
    #include "/home/jon/Desktop/scripts/C++/CPP_Use_Programs_in_C/Source_files/C/fibonacciNumber.h"
}

int main()
{
    for(int i = 0; i < 10; i++)
    {
        std::cout << fibNum(i) << "\n";
    }

    return 0;
}