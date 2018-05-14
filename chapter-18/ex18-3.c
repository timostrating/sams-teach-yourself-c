#include <stdio.h>
#include <stdlib.h>

void main() {
    printf("%f\n", atof("65"));             // 65.000000
    printf("%f\n", atof("81,23"));          // 81.230000
    printf("%f\n", atof("-34.2"));          // -34.200000
    printf("%f\n", atof("ten"));            // 0.000000
    printf("%f\n", atof("+12hundered"));    // 12.000000
    printf("%f\n", atof("1e+3"));           // 1000.000000
}