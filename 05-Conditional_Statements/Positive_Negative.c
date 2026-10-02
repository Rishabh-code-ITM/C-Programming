#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int num;                                    // Number store karne ke liye
    printf("Enter a number: ");                 // Number maango
    scanf("%d", &num);                          // Number input lo
    if (num > 0) {                              // 0 se bada hai to positive
        printf("Positive\n");                   // Positive print karo
    } else if (num < 0) {                       // 0 se chhota hai to negative
        printf("Negative\n");                   // Negative print karo
    } else {                                    // Dono nahi, matlab number 0 hai
        printf("Zero\n");                       // Zero print karo
    }                                           // if-else block end
    return 0;                                   // Program successfully khatam
}                                               // main function end
