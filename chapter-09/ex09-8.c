#define MAX 10


#include <stdio.h>

int sumarrays(int k[], int l[]);


void main() {
    int data1[MAX] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int data2[MAX] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    printf("%d", sumarrays(data1, data2));
}

int sumarrays(int k[], int l[]) {
    int sum = 0;

    for (int i=0; i < MAX; i++)
        sum += k[i] + l[i];

    return sum;
}