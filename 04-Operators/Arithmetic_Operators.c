#include <stdio.h>                          // Standard input output library

int main() {                                // Program yahin se start hota hai (main function)
    int a = 17, b = 5;                      // Do numbers declare kiye
    printf("a + b = %d\n", a + b);          // Addition
    printf("a - b = %d\n", a - b);          // Subtraction
    printf("a * b = %d\n", a * b);          // Multiplication
    printf("a / b = %d\n", a / b);          // Division: int / int ka result int aata hai (decimal part hat jata hai)
    printf("a %% b = %d\n", a % b);         // Modulus: remainder deta hai (%% se % print hota hai)
    return 0;                               // Program successfully khatam
}                                           // main function end
