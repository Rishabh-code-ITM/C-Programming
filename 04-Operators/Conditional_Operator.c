#include <stdio.h>                                  // Standard input output library

int main() {                                        // Program yahin se start hota hai (main function)
    int a = 10, b = 20;                             // Do numbers
    int max = (a > b) ? a : b;                      // Ternary operator: condition true to a, warna b (chhota if-else)
    printf("Maximum = %d\n", max);                  // Bada number print karo
    int num = 7;                                    // Even/odd check karne ke liye number
    printf("%d is %s\n", num, (num % 2 == 0) ? "Even" : "Odd");   // Ternary se seedha string choose ki
    return 0;                                       // Program successfully khatam
}                                                   // main function end
