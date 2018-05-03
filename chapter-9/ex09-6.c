#include <stdio.h>

void main() {
    int data[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    data[2] = 100;

    int *p_data_element = &data[2];
    *p_data_element = 100;

    for (int i=0; i < 10; i++)
        printf("%d ", data[i]);
}