#include <stdio.h>

void print_value(void);

int var = 999;

int main(void) {
    printf("%d\n", var);
    print_value();

    return 0;
}

void print_value() {
    printf("%d\n", var);
}