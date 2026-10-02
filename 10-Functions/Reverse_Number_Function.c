#include <stdio.h>                                      // Standard input output library

int reverse(int n) {                                    // Number ka reverse return karega
    int rev = 0;                                        // Reversed number yahan banega
    while (n != 0) {                                    // Jab tak digits bache hain
        rev = rev * 10 + n % 10;                        // Last digit rev ke end mein jodo
        n /= 10;                                        // Last digit hatao
    }                                                   // while loop end
    return rev;                                         // Reversed number wapas bhejo
}                                                       // reverse function end

int main() {                                            // Program yahin se start hota hai (main function)
    int n;                                              // Number store karne ke liye
    printf("Enter a number: ");                         // Number maango
    scanf("%d", &n);                                    // Number input lo
    printf("Reversed = %d\n", reverse(n));              // Function call karke result print kiya
    return 0;                                           // Program successfully khatam
}                                                       // main function end
