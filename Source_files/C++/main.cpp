#include <iostream>
#include <vector>

#define FIB_NUMBER_AMOUNT   10

extern "C" 
{
    #include "../C/fibonacciNumber.h"
}

int main()
{
    std::vector<int> fibSeq(FIB_NUMBER_AMOUNT);
    int fibNumber;

    for(int i = 0; i < 10; i++)
    {
        fibNumber = fibNum(i);
        std::cout << fibNum(i) << "\n";
        fibSeq[fibNumber];
    }

    return 0;
}