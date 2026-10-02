#include <stdio.h>                                      // Standard input output library

int main() {                                            // Program yahin se start hota hai (main function)
    int n;                                              // Jiska table chahiye wo number
    printf("Enter a number: ");                         // Number maango
    scanf("%d", &n);                                    // Number input lo
    for (int i = 1; i <= 10; i++) {                     // 1 se 10 tak multiply karenge
        printf("%d x %d = %d\n", n, i, n * i);          // Table ki ek line print karo
    }                                                   // for loop end
    return 0;                                           // Program successfully khatam
}                                                       // main function end
