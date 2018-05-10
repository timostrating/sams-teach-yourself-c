#include <stdio.h>

void main() {
    float radius = 9;
    float *p_radius = &radius;

    printf("%f %p, %f %p", radius, &radius, *p_radius, &p_radius);
}