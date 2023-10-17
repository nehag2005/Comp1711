#include <stdio.h>

int main() {
    float r, area;
    printf("Enter the radius: ");
    scanf("%f", &r);


    area = 3.1415926 * r * r;
    printf("The area of the circle is: %f\n ", area);

    return 0;
}