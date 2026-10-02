#include <stdio.h>                              // Standard input output library

int isPrime(int n) {                            // Prime ho to 1, warna 0 return karega
    if (n <= 1) return 0;                       // 1 aur usse chhote numbers prime nahi hote
    for (int i = 2; i * i <= n; i++) {          // Square root tak divisors check karo
        if (n % i == 0) return 0;               // Koi divisor mila to prime nahi hai
    }                                           // for loop end
    return 1;                                   // Koi divisor nahi mila, matlab prime hai
}                                               // isPrime function end

int main() {                                    // Program yahin se start hota hai (main function)
    int n;                                      // Number store karne ke liye
    printf("Enter a number: ");                 // Number maango
    scanf("%d", &n);                            // Number input lo
    if (isPrime(n)) {                           // Function ka result check karo
        printf("Prime\n");                      // Prime hai
    } else {                                    // Warna
        printf("Not Prime\n");                  // Prime nahi hai
    }                                           // if-else end
    return 0;                                   // Program successfully khatam
}                                               // main function end
