#include <stdio.h> 

void main() {
    char * first = "First characters";
    char * second = "Second chars";

    int result = compare_string(first, second);
 
    if (result == 0)
       printf("The strings are same.\n");
    else
       printf("The strings are different.\n");
}