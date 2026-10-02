#include <stdio.h>                                      // Standard input output library

unsigned long long factorial(int n) {                   // n ka factorial return karega
    unsigned long long fact = 1;                        // Factorial start 1 se
    for (int i = 2; i <= n; i++) {                      // 2 se n tak multiply karenge
        fact *= i;                                      // Har number se multiply karo
    }                                                   // for loop end
    return fact;                                        // Result wapas bhejo
}                                                       // factorial function end

int main() {                                            // Program yahin se start hota hai (main function)
    int n;                                              // Number store karne ke liye
    printf("Enter a number: ");                         // Number maango
    scanf("%d", &n);                                    // Number input lo
    printf("Factorial = %llu\n", factorial(n));         // Function call karke result print kiya
    return 0;                                           // Program successfully khatam
}                                                       // main function end
