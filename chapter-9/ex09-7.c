#define MAX 10


#include <stdio.h>

int sumarrays(int k[], int l[]);

int sumarrays(int k[], int l[]) {
    int sum = 0;

    for (int i=0; i < MAX; i++)
        sum += k[i] + l[i];

    return sum;
}