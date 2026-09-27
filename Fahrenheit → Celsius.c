#include <stdio.h>

int main() {
    int F; //int variable 
    float C; // float variable

    printf("Enter temperature in Fahrenheit: ");
    scanf("%d", &F); //fahrenheit number in input  

    C = (F - 32) * 5.0 / 9.0;  // fahrenheit se celsius me

    printf("Temperature in Celsius = %.2f\n", C);  //print celsius number float me

    return 0;
}