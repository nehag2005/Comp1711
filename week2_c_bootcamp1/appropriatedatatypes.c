#include <stdio.h>
int main() {
    int days;
    long long speed_per_day;

    printf("Enter the number of days you want to calculate distance travelled by light for: ");
    scanf("%d", &days);

    speed_per_day = 300000000LL * 3600 * 24 * days;
    printf("The speed of light is: %lld metres\n", speed_per_day);

    return 0; 

}