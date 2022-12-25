#include "swapIntegers.h"

int fibNum(int n)
{
    if((n == 0) || (n == 1))
    {
        return n;
    }
    
    int fibSeq[] = {0, 1};
    int i;
    for(i = 2; i <= n; i++)
    {
        swapInt(&fibSeq[0], &fibSeq[1]);
        fibSeq[1] = fibSeq[0] + fibSeq[1];
    }
    
    return fibSeq[1];
}