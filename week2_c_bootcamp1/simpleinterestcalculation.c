#include <stdio.h>
int main() {
    int principal, rate, time, simple_int;

    printf("Enter the principal: $");
    scanf("%d", &principal);
    printf("Enter the rate percentage: ");
    scanf("%d", &rate);
    printf("Enter the time in years: ");
    scanf("%d", &time);

    
    simple_int = (principal * rate * time) / 100;

    printf("Calculated simple interest: $%d\n", simple_int);

    return 0;

}