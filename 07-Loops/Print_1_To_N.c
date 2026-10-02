#include <stdio.h>                          // Standard input output library

int main() {                                // Program yahin se start hota hai (main function)
    int n;                                  // N ki value store karne ke liye
    printf("Enter N: ");                    // N maango
    scanf("%d", &n);                        // N input lo
    for (int i = 1; i <= n; i++) {          // 1 se lekar user ke diye hue N tak loop
        printf("%d ", i);                   // Number print karo
    }                                       // for loop end
    printf("\n");                           // Last mein nayi line
    return 0;                               // Program successfully khatam
}                                           // main function end
