#include <stdio.h>

int pow_inner(int a, int n, int value);


int main(void) 
{
    printf("%d", pow_inner(3, 4, 1));
}

int pow_inner(int a, int n, int value) 
{
    if (n == 0)
        return value;
    
    return pow_inner(a, --n, (value * a));
}