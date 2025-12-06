
#include <stdio.h>

int main() {
    float c,f,newc,newf;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    newf = c *1.8 + 32;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    newc = (f - 32) / 1.8;
    printf("Temperature in Fahrenheit: %.2f\n", newf);
    printf("Temperature in Celsius: %.2f\n", newc);

    return 0;
}
