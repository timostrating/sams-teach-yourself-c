#include <stdio.h>

struct person {
    char name[50];
    char address[256];
    struct person *next;
};

void main() {
    struct person *new;
    struct person *head;
    head = NULL;
}