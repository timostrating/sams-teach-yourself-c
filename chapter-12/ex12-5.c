#include <stdio.h>

void print_value(int);

int var = 999;


int main(void) {
    printf("%d\n", var);
    print_value(000);

    return 0;
}

void print_value(int var) {
    printf("%d\n", var);
}