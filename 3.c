#include <stdio.h>
#define PI 3.14

int main() {
    float r, a;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    a = PI * r * r;
    printf("Area of the circle: %.2f\n", a);

    return 0;
}