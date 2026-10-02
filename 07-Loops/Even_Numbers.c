#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int n;                                      // Limit store karne ke liye
    printf("Enter N: ");                        // N maango
    scanf("%d", &n);                            // N input lo
    for (int i = 2; i <= n; i += 2) {           // 2 se start, har baar 2 badhao, isliye sirf even numbers aayenge
        printf("%d ", i);                       // Even number print karo
    }                                           // for loop end
    printf("\n");                               // Last mein nayi line
    return 0;                                   // Program successfully khatam
}                                               // main function end
