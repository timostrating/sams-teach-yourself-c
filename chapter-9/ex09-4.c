#include <stdio.h>

void main() {
    int cost = 9;
    int *p_cost = &cost;

    // direct
    cost = 100;
    // indirect
    *p_cost = 100;

    printf("%d %p, %d %p", cost, &cost, *p_cost, &p_cost);
}