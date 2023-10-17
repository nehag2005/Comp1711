#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
 

    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    c = a + b;

    printf("The sum of two integers is: %d \n", c);

    return 0;

}