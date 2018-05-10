#include <stdio.h>

int main(void) {
    int stuff[12][10];

    for (int i=0; i < 12; i++) {
        for (int j=0; j < 10; j++) {
            stuff[i][j] = 0;
        }
    }
}