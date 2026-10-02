#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int i = 1;                                  // Counter variable
start:                                          // Label: yahin se baar baar shuru karenge
    if (i <= 5) {                               // Jab tak i 5 ya kam hai
        printf("%d ", i);                       // i print karo
        i++;                                    // i badhao
        goto start;                             // Wapas label par jao (loop jaisa behaviour)
    }                                           // if block end
    printf("\n");                               // Last mein nayi line
    return 0;                                   // Program successfully khatam
}                                               // main function end
