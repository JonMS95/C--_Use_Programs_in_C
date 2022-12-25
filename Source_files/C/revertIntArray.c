#include "revertIntArray.h"

void revertIntArray(int* array, int arraySize)
{
    int i;

    if(arraySize <= 1)
    {
        return;
    }

    for(int i = 0; i < arraySize / 2; i++)
    {
        swapInt(&array[i], &array[arraySize - i - 1]);
    }
}