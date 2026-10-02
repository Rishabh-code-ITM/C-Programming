#include <stdio.h>                                      // Standard input output library

int main() {                                            // Program yahin se start hota hai (main function)
    int n, isPrime = 1;                                 // isPrime flag: 1 = prime maan ke chalo
    printf("Enter a number: ");                         // Number maango
    scanf("%d", &n);                                    // Number input lo
    if (n <= 1) {                                       // 1 aur usse chhote numbers prime nahi hote
        isPrime = 0;                                    // Flag 0 kar do
    }                                                   // if block end
    for (int i = 2; i * i <= n; i++) {                  // Sirf square root tak check karna kaafi hai
        if (n % i == 0) {                               // Agar koi number n ko divide kar de
            isPrime = 0;                                // To n prime nahi hai
            break;                                      // Aage check karne ki zaroorat nahi
        }                                               // if block end
    }                                                   // for loop end
    if (isPrime) {                                      // Flag 1 hai to prime
        printf("%d is a prime number\n", n);            // Prime hai
    } else {                                            // Warna
        printf("%d is not a prime number\n", n);        // Prime nahi hai
    }                                                   // if-else end
    return 0;                                           // Program successfully khatam
}                                                       // main function end
