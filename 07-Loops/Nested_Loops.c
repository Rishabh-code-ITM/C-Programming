#include <stdio.h>                          // Standard input output library

int main() {                                // Program yahin se start hota hai (main function)
    for (int i = 1; i <= 4; i++) {          // Outer loop: rows ke liye
        for (int j = 1; j <= i; j++) {      // Inner loop: har row mein i stars, outer ek baar chale to inner poora chalta hai
            printf("* ");                   // Star print karo
        }                                   // inner loop end
        printf("\n");                       // Row khatam hone par nayi line
    }                                       // outer loop end
    return 0;                               // Program successfully khatam
}                                           // main function end
