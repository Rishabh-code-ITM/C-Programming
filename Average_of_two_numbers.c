#include <stdio.h> //header file

int main() {
    int a, b; // int variable 
    float avg; // float variable

    printf("Enter first number: ");
    scanf("%d", &a); //input first number

    printf("Enter second number: ");
    scanf("%d", &b); // input second number

    avg = (a + b) / 2.0;  // average formula 

    printf("Average = %f\n", avg); //print 

    return 0;
}