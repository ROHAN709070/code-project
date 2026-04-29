#include <stdio.h>

int main() {
    float km, cm;

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    cm = km * 100000;   // 1 km = 100000 cm

    printf("Distance in centimeters = %.2f cm\n", cm);

    return 0;
}
How it works