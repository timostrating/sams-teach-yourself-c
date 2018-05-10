#include <stdio.h>

float avg(float a, float b, float c, float d, float e);


int main(void) 
{
    printf("%f", avg(1.0, 2.0, 3.0, 4.0, 6.0));

    return 0;
}

float avg(float a, float b, float c, float d, float e)
{
    return ((a+b+c+d+e) / 5.0);
}