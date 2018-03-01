/* ex02-4.c */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[256];

    printf("Enter your name and pres <Enter>;\n");
    fgets(buffer);

    printf("|n Your name has %d characters and spaces!", strlen(buffer));

    return 0;
} 