#include <stdio.h>

void print_value(int);


int main(void) {
    int var = 999;
    printf("%d\n", var);
    print_value(var);

    return 0;
}

void print_value(int var) {
    printf("%d\n", var);
}