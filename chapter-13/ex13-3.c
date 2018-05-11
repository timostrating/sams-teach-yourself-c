#include <stdio.h>

void main() {
    char answer = 'Y';

    switch(answer) {
        case 'Y': printf("You answered yes");
            break;
        case 'N': printf("You answered no");
    }
}