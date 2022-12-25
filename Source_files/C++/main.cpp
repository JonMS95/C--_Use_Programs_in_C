#include <iostream>
#include <vector>

#define FIB_NUMBER_AMOUNT   10

extern "C" 
{
    #include "../C/fibonacciNumber.h"
    #include "../C/revertIntArray.h"
}

int main()
{
    //std::vector<int> fibSeq(FIB_NUMBER_AMOUNT);
    int fibSeq[FIB_NUMBER_AMOUNT];
    int fibNumber;

    for(int i = 0; i < 10; i++)
    {
        fibNumber = fibNum(i);
        std::cout << fibNum(i) << "\n";
        fibSeq[fibNumber] = fibNumber;
    }

    std::cout << "Revert it!\n";

    // int size = fibSeq.size();
    int size = FIB_NUMBER_AMOUNT;
    std::cout << size << "\n";

    //revertIntArray(&fibSeq[0], size);

    for(int i = 0; i < 10; i++)
    {
        std::cout << fibSeq[i] << "\n";
    }

    return 0;
}