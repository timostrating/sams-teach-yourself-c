#define MAX 10


#include <stdio.h>

int * addarrays(int k[], int l[]);
int add[MAX];


void main() {
    int data1[MAX] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int data2[MAX] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    int *p_output = addarrays(data1, data2);
    for (int i=0; i < MAX; i++)
        printf("%d ", p_output[i]);
}

int * addarrays(int k[], int l[]) {
    for (int i=0; i < MAX; i++)
        add[i] = k[i] + l[i];

    return add;
}