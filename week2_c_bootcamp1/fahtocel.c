#include <stdio.h>
int main () {
    float f;
    float celsius;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &f);

    celsius = (f - 32) * 5/9;
    printf("The temperature in celsius is: %f°C\n", celsius);

    return 0;
}