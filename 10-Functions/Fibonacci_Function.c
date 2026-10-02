#include <stdio.h>                              // Standard input output library

void fibonacci(int n) {                         // Pehle n terms print karega
    int a = 0, b = 1;                           // Series 0 aur 1 se shuru
    for (int i = 0; i < n; i++) {               // n baar loop chalega
        printf("%d ", a);                       // Current term print karo
        int next = a + b;                       // Agla term = pichle do ka sum
        a = b;                                  // a ko aage khiskao
        b = next;                               // b ko aage khiskao
    }                                           // for loop end
    printf("\n");                               // Last mein nayi line
}                                               // fibonacci function end

int main() {                                    // Program yahin se start hota hai (main function)
    int n;                                      // Terms ki ginti
    printf("Enter number of terms: ");          // Terms maango
    scanf("%d", &n);                            // Terms input lo
    fibonacci(n);                               // Function call kiya
    return 0;                                   // Program successfully khatam
}                                               // main function end
