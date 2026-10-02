#include <stdio.h>                                  // Standard input output library

int main() {                                        // Program yahin se start hota hai (main function)
    int n, sum = 0;                                 // sum ko 0 se start karna zaroori hai
    printf("Enter N: ");                            // N maango
    scanf("%d", &n);                                // N input lo
    for (int i = 1; i <= n; i++) {                  // 1 se N tak loop
        sum += i;                                   // Har number ko sum mein jodte jao
    }                                               // for loop end
    printf("Sum of 1 to %d = %d\n", n, sum);        // Final sum print karo
    return 0;                                       // Program successfully khatam
}                                                   // main function end
