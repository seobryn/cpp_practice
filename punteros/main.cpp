#include <iostream>
#include <stdio.h>

int withoutPointers(int value)
{
    value = value + 10;
    return value;
}

int withPointers(int *value)
{
    *value = *value + 10; // Adding 10 to memory address
    return *value;
}

int main(int argc, char *argv[])
{
    int num = 10;

    printf("Before Function execution %d\n", num);
    withoutPointers(num);
    printf("After Function execution %d\n", num);
    printf("Before PointerFunction execution %d\n", num);
    withPointers(&num);
    printf("After PointerFunction execution %d\n", num);

    return 0;
}