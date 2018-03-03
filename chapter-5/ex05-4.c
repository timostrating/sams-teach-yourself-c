#include <stdio.h>
#include <string.h>

void print_msg(void);

int main(void)
{
    print_msg();  // "This is a message to print"
    return 0;
}

void print_msg(void)
{
    printf("This is a message to print");
    //return 0;
}