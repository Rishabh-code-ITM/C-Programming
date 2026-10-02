#include <stdio.h>                                      // Standard input output library

int main() {                                            // Program yahin se start hota hai (main function)
    int n, sum = 0;                                     // sum mein proper divisors jodenge
    printf("Enter a number: ");                         // Number maango
    scanf("%d", &n);                                    // Number input lo
    for (int i = 1; i < n; i++) {                       // 1 se n-1 tak (n khud divisor nahi gina jata)
        if (n % i == 0) {                               // Agar i, n ko poora divide karta hai
            sum += i;                                   // To i ko sum mein jodo
        }                                               // if block end
    }                                                   // for loop end
    if (sum == n && n > 0) {                            // Divisors ka sum number ke barabar ho to perfect
        printf("%d is a perfect number\n", n);          // Perfect hai (jaise 6, 28)
    } else {                                            // Warna
        printf("%d is not a perfect number\n", n);      // Perfect nahi hai
    }                                                   // if-else end
    return 0;                                           // Program successfully khatam
}                                                       // main function end
