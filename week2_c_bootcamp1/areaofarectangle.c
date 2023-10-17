#include <stdio.h>
int main() {
    int length;
    int width; 
    int area;

    printf("Hello, enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Hello, enter the width of the rectange: ");
    scanf("%d", &width);

    area = width * length;
    printf("The area of the rectangle is: %d \n", area);

    return 0;
}