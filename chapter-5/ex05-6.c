#include <stdio.h>

char li;
int room;

int main( void ) 
{
    puts("Enter the first initial of your last name: ");
    scanf("%c", &li);

    room = ((li >= 'a' && li <= 'm') || (li >= 'A' && li <= 'M'))? 1045 : 1055;

    printf("\nYou need to report to room %d.", room);

    return 0;
}