#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    for (int i = 1; i <= 10; i++) {             // 1 se 10 tak loop
        if (i % 2 == 0) {                       // Agar i even hai
            continue;                           // continue is iteration ko skip karke seedha agle iteration par jata hai
        }                                       // if block end
        printf("%d ", i);                       // Sirf odd numbers print honge
    }                                           // for loop end
    printf("\n");                               // Last mein nayi line
    return 0;                                   // Program successfully khatam
}                                               // main function end
