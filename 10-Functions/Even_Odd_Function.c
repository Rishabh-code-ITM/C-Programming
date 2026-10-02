#include <stdio.h>                              // Standard input output library

int isEven(int n) {                             // Even ho to 1, odd ho to 0 return karega
    return n % 2 == 0;                          // Condition ka result (1 ya 0) seedha return
}                                               // isEven function end

int main() {                                    // Program yahin se start hota hai (main function)
    int num;                                    // Number store karne ke liye
    printf("Enter a number: ");                 // Number maango
    scanf("%d", &num);                          // Number input lo
    if (isEven(num)) {                          // Function ka result check karo
        printf("Even\n");                       // Even number
    } else {                                    // Warna
        printf("Odd\n");                        // Odd number
    }                                           // if-else end
    return 0;                                   // Program successfully khatam
}                                               // main function end
