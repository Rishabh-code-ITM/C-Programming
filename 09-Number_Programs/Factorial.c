#include <stdio.h>                                      // Standard input output library

int main() {                                            // Program yahin se start hota hai (main function)
    int n;                                              // Number store karne ke liye
    unsigned long long fact = 1;                        // Factorial bahut bada ho sakta hai, isliye bada type; start 1 se
    printf("Enter a number: ");                         // Number maango
    scanf("%d", &n);                                    // Number input lo
    for (int i = 1; i <= n; i++) {                      // 1 se n tak
        fact *= i;                                      // Har number ko multiply karte jao
    }                                                   // for loop end
    printf("Factorial of %d = %llu\n", n, fact);        // Factorial print karo (%llu unsigned long long ke liye)
    return 0;                                           // Program successfully khatam
}                                                       // main function end
