#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int a, b;                                   // Do numbers ke liye variables
    printf("Enter first number: ");             // Pehla number maango
    scanf("%d", &a);                            // Pehla number a mein store karo
    printf("Enter second number: ");            // Dusra number maango
    scanf("%d", &b);                            // Dusra number b mein store karo
    printf("Sum = %d\n", a + b);                // Dono ka sum print karo
    return 0;                                   // Program successfully khatam
}                                               // main function end
