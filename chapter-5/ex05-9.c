#include <stdio.h>

int plus(int a, int b);
int divide(int a, int b);
int mega_sum(int a, int b);


int plus(int a, int b) 
{
    return a + b;
}

int divide(int a, int b)
{
    if (b == 0)
        return 0;

    return a / b;
}

int mega_sum(int a, int b) 
{
    return plus(a, b) + devide(a, b);
}