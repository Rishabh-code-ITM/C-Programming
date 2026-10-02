#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    for (int i = 1; i <= 10; i++) {             // 1 se 10 tak loop
        if (i == 6) {                           // Jab i 6 ho jaye
            break;                              // break loop ko turant rok deta hai
        }                                       // if block end
        printf("%d ", i);                       // 1 se 5 tak print hoga
    }                                           // for loop end
    printf("\nLoop stopped at 6\n");            // Loop ke baad ka message
    return 0;                                   // Program successfully khatam
}                                               // main function end
