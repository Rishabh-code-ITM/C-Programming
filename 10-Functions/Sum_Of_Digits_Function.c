#include <stdio.h>                                      // Standard input output library

int sumOfDigits(int n) {                                // Digits ka sum return karega
    int sum = 0;                                        // sum 0 se start
    while (n != 0) {                                    // Jab tak digits bache hain
        sum += n % 10;                                  // Last digit sum mein jodo
        n /= 10;                                        // Last digit hatao
    }                                                   // while loop end
    return sum;                                         // Sum wapas bhejo
}                                                       // sumOfDigits function end

int main() {                                            // Program yahin se start hota hai (main function)
    int n;                                              // Number store karne ke liye
    printf("Enter a number: ");                         // Number maango
    scanf("%d", &n);                                    // Number input lo
    printf("Sum of digits = %d\n", sumOfDigits(n));     // Function call karke result print kiya
    return 0;                                           // Program successfully khatam
}                                                       // main function end
