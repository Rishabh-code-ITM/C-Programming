#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int num, count = 0;                         // count mein digits ginenge
    printf("Enter a number: ");                 // Number maango
    scanf("%d", &num);                          // Number input lo
    if (num == 0) {                             // Special case: 0 mein ek digit hota hai
        count = 1;                              // Isliye count 1 set karo
    }                                           // if block end
    while (num != 0) {                          // Jab tak number 0 na ho jaye
        num /= 10;                              // Ek digit hatao
        count++;                                // Count badhao
    }                                           // while loop end
    printf("Total digits = %d\n", count);       // Digits ki ginti print karo
    return 0;                                   // Program successfully khatam
}                                               // main function end
