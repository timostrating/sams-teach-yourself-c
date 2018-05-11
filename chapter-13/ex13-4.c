#include <stdio.h>

void main() {
    char choice = 1;

    switch(choice) {
        case 1: printf("You answered 1");
            break;
        case 2: printf("You answered 2");
            break;
        default:                                    // a default case should be on the end
            printf("You did not choose 1 or 2");
    }
}