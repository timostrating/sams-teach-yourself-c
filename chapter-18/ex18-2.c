#include <stdio.h>

void main() {
    printf("%d\n", atoi("65"));             // 65
    printf("%d\n", atoi("81.23"));          // 81
    printf("%d\n", atoi("-34.2"));          // -34
    printf("%d\n", atoi("ten"));            // 0
    printf("%d\n", atoi("+12hundered"));    // 12
    printf("%d\n", atoi("negative100"));    // 0
}