#include <stdio.h>
int main () {
    int integer, fac = 1, i;
    printf("Enter the integer you want to calculate the factorial of: ");
    scanf("%d", &integer);


    for (i=1; i<=integer; i++ ) {
        fac = fac * i; 
    }

    printf("The factorial is: %d\n", fac);

    return 0;



}