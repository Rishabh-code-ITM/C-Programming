#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int n, a = 0, b = 1, next;                  // Series 0 aur 1 se shuru hoti hai
    printf("Enter number of terms: ");          // Kitne terms chahiye
    scanf("%d", &n);                            // Terms input lo
    for (int i = 1; i <= n; i++) {              // n terms print karne ke liye loop
        printf("%d ", a);                       // Current term print karo
        next = a + b;                           // Agla term = pichle do terms ka sum
        a = b;                                  // a ko aage khiskao
        b = next;                               // b ko aage khiskao
    }                                           // for loop end
    printf("\n");                               // Last mein nayi line
    return 0;                                   // Program successfully khatam
}                                               // main function end
