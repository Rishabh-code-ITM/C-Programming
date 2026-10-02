#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int num, rev = 0;                           // rev mein reversed number banega, start 0 se
    printf("Enter a number: ");                 // Number maango
    scanf("%d", &num);                          // Number input lo
    while (num != 0) {                          // Jab tak saare digits khatam na ho jayein
        int digit = num % 10;                   // Last digit nikalo (remainder se)
        rev = rev * 10 + digit;                 // rev ko ek place left shift karke digit jodo
        num /= 10;                              // Last digit hata do
    }                                           // while loop end
    printf("Reversed number = %d\n", rev);      // Reversed number print karo
    return 0;                                   // Program successfully khatam
}                                               // main function end
