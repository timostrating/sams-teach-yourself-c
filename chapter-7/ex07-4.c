#include <stdio.h>

int main(void) 
{
    int number1;
    scanf("%d", &number1);

    if (number1 % 2 == 0)
        printf("%d", number1);
}