#include <stdio.h>

int radius, area;

int main(void)
{
    printf( "enter radios (i.e. 10): " );
    scanf("%d", &radius);
    area = (int) (3.14159 * radius * radius);
    printf("\n\nArea = %d\n", area);
    return 0;
}


// OUTPUT

// enter radios (i.e. 10): 2
//
//
// Area = 12