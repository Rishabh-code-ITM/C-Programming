#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int num, sum = 0;                           // sum ko 0 se start karo
    printf("Enter a number: ");                 // Number maango
    scanf("%d", &num);                          // Number input lo
    while (num != 0) {                          // Jab tak digits bache hain
        sum += num % 10;                        // Last digit ko sum mein jodo
        num /= 10;                              // Last digit hata do
    }                                           // while loop end
    printf("Sum of digits = %d\n", sum);        // Digits ka sum print karo
    return 0;                                   // Program successfully khatam
}                                               // main function end
