#include <stdio.h>

int divide(int a, int b);


int divide(int a, int b)
{
    if (b == 0)
        return 0;

    return a / b;
}