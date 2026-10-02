#include <stdio.h>                      // Standard input output library

int main() {                            // Program yahin se start hota hai (main function)
    int num;                            // Number store karne ke liye
    printf("Enter a number: ");         // Number maango
    scanf("%d", &num);                  // Number input lo
    if (num % 2 == 0) {                 // Agar number 2 se divide hoke remainder 0 de, to even hai
        printf("Even\n");               // Even print karo
    } else {                            // Warna number odd hoga
        printf("Odd\n");                // Odd print karo
    }                                   // if-else block end
    return 0;                           // Program successfully khatam
}                                       // main function end
