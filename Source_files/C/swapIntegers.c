void swapInt(int* a, int* b)
{
    *a=*a^*b;
    *b=*a^*b;
    *a=*b^*a;
}