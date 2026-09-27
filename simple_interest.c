#include <stdio.h>

int main() {
    float P, R, T; // variable
    float SI;  // formula ka variable

    printf("Enter principal (P): ");
    scanf("%f", &P); // P ka input 

    printf("Enter rate (R): ");
    scanf("%f", &R); // R ka input 

    printf("Enter time (T): ");
    scanf("%f", &T);  // T ka input

    SI = (P * R * T) / 100.0;  // simple interest formula

    printf("Simple Interest = %.2f\n", SI); // print two last float number 

    return 0;
}